# include <iostream>
using namespace std;

int main()
{
    int x[] = {2, 4, 1, 6, 3, 7, 9, 3, 6};
    
    //ranged for loop
    for (auto &i : x)
    {
        cout << i << "      ";
    }
}