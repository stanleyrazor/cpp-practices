# include <iostream>
using namespace std;

//Write a program in C++ to find the sum of all 
// the even numbers between 1 and a given number.
int main()
{
    int n, sum = 0;
    cout << "Input the limit number: ";
    cin >> n;
    cout << endl;

    for (int i = 1; i < n; i++)
    {
        sum = (i % 2 == 0) ? sum + i : sum;
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}
