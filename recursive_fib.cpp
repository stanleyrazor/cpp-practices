# include <iostream>
using namespace std;

int fib(int num)
{
    if (num == 0) 
        return 0;
    else if (num == 1)
        return 1;
    else
        return fib(num-1) + fib(num-2);
}

int main()
{
    int n;
    cout << "Input a number: ";
    cin >> n;
    cout << endl;

    for (int i=0; i < n; i++)
    {
        cout << fib(i) << "     ";
    }
    cout << endl;
}