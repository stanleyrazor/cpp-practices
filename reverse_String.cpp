# include <iostream>
# include <string>

using namespace std;

string rev_str(string s)
{
    string rs = "";
    int len = s.length();

    for (int i = len-1; i >= 0; i--)
    {
        rs += s[i];
    }
    return rs;
}

int main()
{
    string original_name = "Hello world";
    string rev_name = rev_str(original_name);

    cout << original_name << " | " << rev_name << endl;

    return 0;
}