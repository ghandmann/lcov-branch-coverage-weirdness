LCOV/GCOV are reporting weird branch coverage (conditional coverage) results when used with c++.

![LCOV Result](https://raw.githubusercontent.com/ghandmann/lcov-branch-coverage-weirdness/master/screenshot-coverage-report-main.cpp.png)

* Line 6: printf() creating a branch?
* Line 9: Correct, both branches taken
* Line 16-21: Branches, all over the place?
