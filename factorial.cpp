# include <iostream>
using namespace std;

int main()
{
    // a program to compute the factorial of a number
    int n, a=1;
    cout << "What is the number: ";
    cin >> n;
    cout << endl;

    // handling special cases: 0 and 1
    if (n == 0 && n == 1) 
    {
        return 1;
    }        
    else
    {
        for (int i = n; i >= 1; i--)
        {
            a *= i;
        }
        cout << "The factorial of " << n << " is: " << a << endl;
        return a;
    }
}