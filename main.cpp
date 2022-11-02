#include <iostream>

int main() {
    const double pi = 3.14;
    int file_size = 0;
    double sales = 9.99;
    bool isActive = true;
    char char01 = 'p';
    float number = 4.56;
    double x = 5, y = 3;
    double z = 7.57;

    // OPERATIONS //
    int test_sum = x + z; // The int variable will discard the decimals - NO ERROR
    double test_division = x / 3; // The division of 2 int vars will result in an integer.
    y = ++x; // ++ prefix. Increment happens before assigment.
    y = x++; // ++ postfix. Increment happens after the assigment.
    x = 10, y = 5;
    z = (x + 10) / (3 * y); // order of operations () then  / and *  then  + and -

    std::cout << z << std::endl;
    return 0;
}
