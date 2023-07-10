# include <iostream>
using namespace std;

int main()
{
    int x[] = {22, 4, 5, 6, 34, 9, 61, 45, 34 ,89, 357,
                20, 34, 64};
    
    int min = x[0], max = x[0];

    //looping - ranged
    for (auto &i : x)
    {
        min = (min > i) ? i : min;
        max = (max < i) ? i : max; 
    }
    cout << "Minimum: " << min << " | Maximum: " << max << endl;
    return 0;
}