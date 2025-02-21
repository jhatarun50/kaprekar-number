#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(int p, int q) {
    bool found = false;
    
    for (int n = p; n <= q; n++) {
        long long square = (long long)n * n;
        string square_str = to_string(square);
        int len = square_str.length();
        
        // Split the square into two parts
        string right_part = square_str.substr(len - to_string(n).length());
        string left_part = square_str.substr(0, len - to_string(n).length());
        
        // Convert parts to integers, treating empty left part as 0
        int right = stoi(right_part);
        int left = left_part.empty() ? 0 : stoi(left_part);
        
        // Check if the sum of the left and right parts equals the original number
        if (left + right == n) {
            cout << n << " ";
            found = true;
        }
    }
    
    if (!found) {
        cout << "INVALID RANGE";
    }
}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
