#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<char> result;
    vector<char>::iterator el;
    string::iterator it;

    string str;
    cout << "Enter your string:\n";
    cin >> str;

    for (it = str.begin(); it!=str.end(); ++it)
    {
        result.push_back(*it);
    }

    for (el = result.begin(); el !=result.end(); ++el)
    {
        cout<<*el<<endl;
    }
    return 0;

}