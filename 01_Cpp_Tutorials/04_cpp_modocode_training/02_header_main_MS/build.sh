#!/bin/bash

g++ -g -std=c++11 -Wall -Wextra -ggdb -c my_class.cpp my_class.h sample.h my_program.cpp

g++ *.gch *.o
