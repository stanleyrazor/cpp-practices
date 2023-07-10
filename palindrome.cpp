# include <iostream>
# include <string>

using namespace std;

string rev_str(string s)
{
    string rev = "";
    int n = s.length();

    for (int i = n-1; i >= 0; i--)
    {
        rev += s[i];
    }
    return rev;
}

int pal_check(string word)
{
    if (word == rev_str(word))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int main()
{
    string l = "";
    cout << "Enter a word: ";
    cin >> l;
    cout << endl;

    if(pal_check(l) == 1)
        cout << l << " is a palindrome!" << endl;
    else
        cout << l << " is NOT a palindrome!" << endl;
    
}