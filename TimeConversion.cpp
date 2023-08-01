#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string t;
    // Take AM/PM
    string AmPm = s.substr(s.size() - 2, s.size() - 1); 
    
    if(AmPm == "AM") {
        if(s.substr(0, 2) == "12") {
            t = "00" + s.substr(2, 6);
        } else {
            t = s.substr(0, 8);
        }
    } else {
        if(s.substr(0, 2) == "12") {
            t = s.substr(0, 8);
        } else {
            int hour = stoi(s.substr(0, 2)) + 12;
            t = to_string(hour) + s.substr(2, 6);
        }
    }
    return t;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
