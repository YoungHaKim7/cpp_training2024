#!/bin/bash

g++ -g -std=c++11 -Wall -Wextra -ggdb -c *.cpp

g++ *.gch *.o
