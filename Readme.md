# LCOV/GCOV branch coverage reports

LCOV/GCOV are reporting weird branch coverage (conditional coverage) results when used with c++.

We suspect these weird branch reports come from internal exception wrappers/handlers. But shouldn't interfere with "high level" coverage reports.

![LCOV Result](https://raw.githubusercontent.com/ghandmann/lcov-branch-coverage-weirdness/master/screenshot-coverage-report-main.cpp.png)

* Line 6: printf() creating a branch? How to take the other one?
* Line 9: Correct, both branches taken
* Line 16-21: Branches, all over the place? How to take these other branches?

# Reproduce

## Dependencies

You need to install gcov, lcov and genhtml on your system.

Your g++ needs to support "--coverage".

## Running

1. Clone the repo
2. Navigate into your cloned repo
3. make
4. Inspect the coverage report in "./generated-coverage/index.html"
