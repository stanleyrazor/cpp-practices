# include <iostream>
using namespace std;

int primenum(int n)
{
    int check = 0;
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            check = 1;
            break;
        }
    }
    return check;
}

int allprimes(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (primenum(i) == 0)
        {
            cout << i << "      " ;
        }
    }
    cout << endl;
    return 0;
}

int main()
{
    int num;
    cout << "Input number: ";
    cin >> num;
    cout << endl;

    allprimes(num);
    //if (primenum(num) == 0)
    //    cout << num << " is a prime number" << endl;
    //else
    //    cout << num << " is NOT a prime number" << endl;
}