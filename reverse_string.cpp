//Write a c++ program to reverse a given String..........

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[50], temp;
    int i = 0, j;
    cout << "Enter String:";
    gets(str);
    i = 0;
    j = strlen(str) - 1;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    cout << "\n Rerversed String is:" << str;
    return 0;
}