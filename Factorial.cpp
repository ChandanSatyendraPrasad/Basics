/*2.Write a program in C++ to find the factorial of a number.
5 ->  5*4*3*2*1  */
#include <iostream>
using namespace std;

int main()
{
    int num = 0, factorial = 1;

    cout << "enter a num" << endl;
    cin >> num;//5

    //logic
    for (int i = num; i > 0; i--)
    {
        factorial = factorial * i;
    }
    cout << "factorial is :" << factorial;

    return 0;
}