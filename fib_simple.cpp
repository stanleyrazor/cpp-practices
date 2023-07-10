#include <iostream>
using namespace std;

int main()
{
    int len;
    cout << "Whats the length of the fibonacci sequence: ";
    cin >> len;
    cout << endl;

    int farr[len];
    farr[0] = 0;
    farr[1] = 1;

    for (int i = 2; i <= (len-1); i++)
    {
        farr[i] = farr[i-1] + farr[i-2];
    }

    cout << "Here's the sequence: " << endl;

    for (int i = 0; i < len; i++)
    {
        cout << farr[i] << "    ";
    }
    cout << endl;
    return 0;

}