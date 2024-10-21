#include <iostream>
using namespace std;
int main() {
    double capacity, miles, average;
    cout << "enter he number of gallons a tank can hold ";
    cin >> capacity;
    cout << "enter the number of miles driven on a full tank ";
    cin >> miles;
    average = miles/capacity;
    // calculate the dividend of the two numbers
    // display the MPG
    cout <<" the car mpg is: " << average << endl;
    system("PAUSE");
    return 0;
}