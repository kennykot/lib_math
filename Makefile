CC=gcc
CFLAGS=-Wall -Wextra -Werror -c -std=c11
GCOVFLAGS:=--coverage
SOURCES:= s21_math.c s21_test.c
OBJECTS:=$(SOURCES:.c=.o)
UNAME = $(shell uname -s)
ifeq ($(UNAME),Darwin)
		CHECK=-lcheck -lm -lpthread -fprofile-arcs
endif
ifeq ($(UNAME),Linux)
		CHECK=-lcheck -lm -lpthread -lrt -lsubunit -fprofile-arcs
endif

all: test gcov_report

.c.o:
	$(CC) $(CFLAGS) $(GCOVFLAGS) $< -o $@

s21_math.a: s21_verter.o
	ar rcs s21_math.a s21_verter.o

s21_verter.o: s21_math.c
	$(CC) $(CFLAGS) s21_math.c -o s21_verter.o

check: cpplint cppcheck leaks
	
cpplint:
	cp ../materials/linters/CPPLINT.cfg ./
	python3 ../materials/linters/cpplint.py --extensions=c *.h s21*.c
	rm CPPLINT.cfg
	
cppcheck:
	cppcheck *.c *.h
	
leaks:
	leaks -atExit -- ./test

test: $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(CHECK)
	./$@

gcov_report:
	gcovr -r . --html --html-details -o coverage_report.html
	gcov -f s21_math.gcda
	open coverage_report.html

rebuild: clean all

clean:
	rm -rf a.* test s21_math.a *.o *.gc* *.css *.html

.PHONY: all clean check test
