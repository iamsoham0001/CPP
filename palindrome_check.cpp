//write a c++ program to check a number palindrome or not..
#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0, temp;
    cout << "Enter the number : " << endl;
    cin >> n;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        cout << "Number is Palindrome " << endl;
    else
        cout << "Number is not Palindrome" << endl;

    return 0;
}
