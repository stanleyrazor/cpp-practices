
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size = 20, counter = 0;
    double val = 3.14;

    // different ways of initiaizing vectors
    vector<int> v2{1, 2, 3, 4, 5, 6};
    vector<int> v3 = {1, 2, 3, 4, 5};

    vector<double> v1(size, val);
    for (const double &num : v1)
    {
        if (counter % 5 == 0)
        {
            cout << "\n";
        }
        cout << num << "\t";
        counter += 1;
    }
    return 0;
}