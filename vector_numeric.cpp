# include <iostream>
# include <vector>
# include <numeric>

using namespace std;

int main()
{
    int n, start_at;
    cout << "Vector length -> ";
    cin >> n;
    cout << endl;

    cout << "Starting element -> ";
    cin >> start_at;
    cout << endl;

    int num[n];
    iota(num, num + n, start_at);


    for (auto &i : num) {
        cout << i << "     ";
    }
    cout << endl;
}