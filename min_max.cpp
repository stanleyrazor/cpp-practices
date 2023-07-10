# include <iostream>
using namespace std;

int max(int arr[], int n)
{
    int runmax=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > runmax)
            runmax = arr[i];
    }
    return runmax;
}

int min(int arr[], int n)
{
    int runmin = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < runmin)
            runmin = arr[i];
    }
    return runmin;
}

int main()
{
    int vec[] = {3, 5, 4, 2, 8, 56, 24, 85, 24};
    int len = sizeof(vec) / sizeof(vec[0]);

    int minval = min(vec, len);
    int maxval = max(vec, len);

    cout << "The min is: " << minval << endl;
    cout << "The max is: " << maxval << endl;


    return 0;
}