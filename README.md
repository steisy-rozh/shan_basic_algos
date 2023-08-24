The target of the Shan Algo Solver Project is to create a test-full sandbox to help build a solver for tasks from the book. Tests are built based on a popular framework, JTest, and a solution is built based on the C\C++ language.

1. Load the GTest as a git submodule:
git submodule add git@github.com:google/googletest.git 'extern/googletest'
2. init cmake:
cmake .
3. build with cmake:
cmake --build .
4. create executable:
make
5. call ShenAlgo_tst in test directory of target problem to run unit tests

