#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int addition(int x,int y);
void getFileSize(int& fileSize);

int main() {
    const double PI = 3.141592;
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

    /*
    sales = 95000;
    double const state_tax_rate = 0.04;
    double  const county_tax_rate = 0.02;
    double state_tax = sales * state_tax_rate;
    double  county_tax = sales * county_tax_rate;
    double  total_tax = state_tax + county_tax;

    cout << "Sales: $" << sales << endl
         << "State Tax: $" << state_tax << endl
         << "County Tax: $" << county_tax << endl
         << "Total Tax: $" << total_tax << endl;
    */
    /* CONVERSION PROBLEM.
    double temperature_F, temperature_C;
    cout << "Enter Temperature in Farenheit:";
    cin >> temperature_F;
    temperature_C = (temperature_F - 32) * (5.0/9.0);
    cout << "Temperature in Celcius: " << temperature_C << endl;
    */
    // Area of a Circle Problem.
    /*
    double radius, area;
    cout << "Enter the radius of the Circle:";
    cin >> radius;
    area = PI * pow(radius,2);
    cout << "The area of the circle is: " << area << endl;*/

    //Declare variables.
    /*
    double some_number{3.2};
    int a_number(5);
    unsigned int positive_number{66};
    int binary_number = 0b11111111;
    int hex_number = 0xff;
    cout << binary_number << endl; // prints in decimal.
    cout << hex_number << endl; // prints decimal
     */
    /*
    int big_number = 1'000'000;
    short little_number{big_number};// error: number is too large for short type var.
    cout << "big number: " << big_number << endl;
    cout << "little number: " << little_number << endl;

    long seed = time(nullptr); // seconds since Jan 1 1970
    srand(seed);
    int random_number = rand() % 100;
    cout << "random Number: " << random_number << endl;
     */
    /*
    int dice_roll{};
    short max_value{12};
    short min_value{1};
    srand(time(nullptr));
    dice_roll = (rand() % (max_value - min_value +1)) + min_value;
    cout << "Dice: " << dice_roll << endl;*/
    /*
    short array_size = 5;
    int my_array[5] = {23,63,51,12,11}; // Arrays are fixed size. no push() or pop()
    my_array[2] = 22;
    cout << "array size:" << (sizeof(my_array) / sizeof(int)) << endl;
    for(int i = 0; i < (sizeof(my_array) / sizeof(int)); ++i){
        cout << i << ":  " << my_array[i] << endl;
    }
    */
/*
    //IF statements
    int age = 31;
    char gender = 'f';
    if(age > 18 && gender == 'm') cout << "you are a male adult" << endl;
    if(age > 18 && gender =='f') cout << "you are an adult female" << endl;
    if(age < 18 && gender == 'm') cout << "you are a male minor" << endl;
    if(age < 18 && gender =='f') cout << "you are an minor female" << endl;
    */

    //SWITCH STATEMENTS.
    /*
    int day_value{};
    cout << "enter a day value (1 - 7): ";
    cin >> day_value;
    switch (day_value) {
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thursday";
            break;
        case 6:
            cout << "Friday";
            break;
        case 7:
            cout << "Saturday";
            break;
        default:
            cout << "Invalid Day Value";
    }
    */
    /*
    short secret_number = 7;
    short user_guess{};
    while(user_guess != secret_number){
        cout << "enter your guess: ";
        cin >> user_guess;
    }
    */

    // function call with pass y reference.
    // the global file_size gets modified.
    getFileSize(file_size);
    cout << file_size;

    return 0;

}

int addition(int x,int y){
    int sum = x = y;
    return sum;
}

// pass by reference parameters
void getFileSize(int& fileSize) {
    cout << "enter file size: ";
    cin >> fileSize;
}