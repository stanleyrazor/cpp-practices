# include <iostream>
# include <numeric>
using namespace std;

// the square function
double sq(double n) {return n*n;}

int main()
{
    //consider summing the series 1/j2 from j = 1 to n 
    // for some integer n.

    int j;
    float a1, a2;
    cout << "Input limit number <- ";
    cin >> j;
    cout << endl;

    // first method using indexed loop
    for (int i=1; i <= j; i++)
    {
        a1 += 1./sq(i);
    }

    cout << a1 << endl;

    // 2nd method using ranged loop and iota method
    int vec[j];
    iota(vec, vec+j, 1);

    for (auto &i : vec)
    {
        a2 += 1./sq(i);
    }
    cout << a2 << endl;
}