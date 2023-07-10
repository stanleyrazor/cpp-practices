# include "uniform.h"
# include <iostream>
# include <cmath>

using namespace std;

int main()
{
    double arr[50];
    for (int i=0; i < 50; i++)
    {
        arr[i] = unif(.4, .5);
    }

    for (auto &i: arr)
    {
        cout << i << "     ";
    }
    cout << endl;
    return 0;
}