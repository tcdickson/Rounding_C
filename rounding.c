//(Rounding Numbers) Function floor may be used to round a number to a specific decimal place. The statement
// y = floor(x * 10 + .5) / 10;
// rounds x to the tenths position (the first position to the right of the decimal point). The statement
// y = floor(x * 100 + .5) / 100;
// rounds x to the hundredths position (the second position to the right of the decimal point). Write a program that defines four functions to round a number x in various ways
// roundToInteger(number), roundToTenths(number), roundToHundreths(number), roundToThousandths(number)
// For each value read, your program should print the original value, the number rounded to the nearest integer, the number rounded to the nearest tenth, the number rounded to the nearest hundredth, and the number rounded to the nearest thousandth.

//importing standard C libraries
#include <stdio.h>
#include <math.h>
// function prototypes
int roundToInteger(double number);
double roundToTenths(double number);
double roundToHundreths(double number);
double roundToThousandths(double number);

int main(){
// defining number variable
double number;
// providing instructions to the user
printf("This program takes a number and provides the number rounded to the nearest Integer, Tenths, Hundreths, and Thousandths\nEnter a number:\n");
// taking input from the user
scanf("%lf", &number);
// the following statement prints out the fuctions (roundToInteger, roundToTenths, roundToHundreths, and roundToThousandths), based on the inputted number, and rounds to the nearest integer, the nearest tenth, the nearest hundredth, and the nearest thousandth. Note that we include the decimal place as the specifier to specify how many characters to print out. This helps with code readability. If we did not specify, the console would print out zeros after rounding is complete. Also, the original number could be specified to however many decimal places as we determine (I chose 10).
printf("Original Number: %.10lf\n", number);
printf("Rounded To Nearest Integer: %d\n",roundToInteger(number));
printf("Rounded To Nearest Tenths: %.1lf\n",roundToTenths(number));
printf("Rounded To Nearest Hundredths: %.2lf\n",roundToHundreths(number));
printf("Rounded To Nearest Thousandths: %.3lf\n",roundToThousandths(number));
return 0;
// the following functions provide the calculations to round the inputted number to the nearest specified amount.
}
int roundToInteger(double number) {
    return (int)floor(number + .5);
}
double roundToTenths(double number) {
    return floor(number * 10 + .5)/10;
}
double roundToHundreths(double number) {
    return floor(number * 100 + .5) / 100;
}
double roundToThousandths(double number) {
    return floor(number * 1000 + .5)/1000;
}