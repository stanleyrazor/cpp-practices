# include <iostream>
using namespace std;

// The recursive function for factorial
int factoRial(int n)
{
    if (n == 0)
        return 1;
    else
     return n * factoRial(n-1);
}

// The main function
int main()
{
    int n;
    cout << "Input n: " ;
    cin >> n;
    cout << endl;

    int f;
    f = factoRial(n);
    cout << "Factorial of " << n << " is: " << f << endl;
    return 0;
}