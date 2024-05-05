#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number,last_digit,sum=0,temp,digits=0;

    cout << "Enter number : ";
    cin >> number;

    // Set temp to the original number to count digits
    temp = number;

    // Counting the number of digits
    while (temp != 0)
    {
        temp /= 10;
        ++digits;
    }

    // Reset temp to the original number
    temp = number;

    // Checking if it's an Armstrong number
    while(temp!=0)
    {
        last_digit = temp % 10;
        sum = sum + pow(last_digit,digits);
        temp /= 10;
    }

    // Checking if the number is Armstrong
    if(sum==number)
    {
        cout << number << " is Armstrong Number!" << endl;
    }
    else
    {
       cout << number << " is not an Armstrong Number!" << endl;
    }

    return 0;
}
