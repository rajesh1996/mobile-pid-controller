# PID Controller - C++ Project
[![Build Status](https://travis-ci.org/rajesh1996/mobile-pid-controller.svg?branch=master)](https://travis-ci.org/github/rajesh1996/mobile-pid-controller)
[![Coverage Status](https://coveralls.io/repos/github/rajesh1996/mobile-pid-controller/badge.svg?branch=master)](https://coveralls.io/github/rajesh1996/mobile-pid-controller?branch=master)
---
## Authors
- Part 1 : Daniel Sahu (Driver),Spencer Elyard (Navigator)
- Part 2 : Rajeshwar N S(Driver),Aditya Khopkar (Navigator)

## Overview

Simple PID C++ project with:

- cmake
- googletest

## Standard install via command-line
```
git clone --recursive https://github.com/rajesh1996/mobile-pid-controller
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## NOTES
- Good Test cases
- Adding a reset method was a good idea
- Getter Setter functions could have been simple

## TODO
- Getter function could have been simpler
