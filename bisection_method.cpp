# include <iostream>
using namespace std;

int power(double n, int pow)
{
    double ans = 1.0;
    for (int i = 0; i < pow; i++)
    {
        ans *= n;
    }
    return ans;
}

// The function of interest
double f(double num)
{
    return power(num, 2) + 2*num - 8;
}

// absolute value of a number
double absolute(double num) {
    return (num < 0) ? num*-1 : num;
}

int main()
{
    // the params
    double temp, a=1.0, b=5.0, m, eps = .000001;

    // function: x^3 - 17 = 0
    cout << "a: " << a << " | b: " << b << " | m: " << m << endl;

    do {
        m = (a + b) / 2;
        b = (f(a)*f(b) < 0) ? m : b;
        a = (f(a)*f(b) < 0) ? a : m;

        /* if (f(a)*f(b) < 0)
        {
            b = m;            
        }
        else
        {
            a = m;
        } */
        
        cout << "a: " << a << " | b: " << b << " | m: " << m << endl;

        
    }
    while (absolute(a-b) > eps);
    


}