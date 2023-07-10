
# include <iostream>
# include "random/uniform.h"
# include <numeric>

using namespace std;

// squaring a number: useful for computing error value
double sqv(double errvec[], int n) 
{
    double sqvec;
    for (int i=0; i < n; i++)
    {
        sqvec += (errvec[i]*errvec[i]);
    }
    return sqvec;
}

// computes the sum of numbers i a vector
double arr_total(double vec[], int n)
{
    double s=0;
    for (int i=0; i < n; i++)
    //for (auto &i : vec)
    {
        s += vec[i];
    }
    return s;
}

int main()
{
    int n;
    cout << "Dataset size <- ";
    cin >> n;
    cout << endl;

    // simulating y = 2 + 3x
    double x[n], y[n];
    iota(x, x+n, 1);

    //random noise
    double err[n];
    for (int i=0; i<n; i++)
    {
        err[i] = unif();
        y[i] = 6 - 1*x[i] + err[i];
    }

    for (int i=0; i<n; i++)
    {
        cout << x[i] << "   ";
        cout << y[i] << "   ";
        cout << err[i] << "   " << endl;        
    }

    cout << "--------------------------" << endl;
    // solving using gradient descent

    double dbo, db1, b0=.0, b1=.0;
    double diff = 10, eta=.001, eps=.001, qval=10;
    double b0_summand[n], b1_summand[n];

    do
    {
        cout << "bo : " << b0 << "       |       " 
        << "b1 : " << b1 << "       |       " << 
        diff << endl;
        
        // storing current b1, and error value
        double temp_b1 = b1;
        double temp_qval = qval;

        for (int i=1; i < n; i++)
        {
            b0_summand[i] = y[i] - b0 - b1*x[i];
            b1_summand[i] = x[i] * (y[i] - b0 - b1*x[i]);
        }

        dbo = -2 * arr_total(b0_summand, n);
        db1 = -2 * arr_total(b1_summand, n);

        b0 -= (eta * dbo);
        b1 -= (eta * db1);

        // keeping track of the errors magnitude
        double qval = sqv(b0_summand, n);
        diff = temp_qval - qval;
        if (diff < 0) diff *= -1;
    }
    while (diff > eps);










    
}