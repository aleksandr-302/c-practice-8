#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    vector <int> number;
    string s;
    cout << "Enter your a number with a tochka:\n";
    cin >> s;

    for(int i=0; i < s.size(); i++) number.push_back(s[i]);
    int tochka;
    for(int j=0; j < number.size(); j++){
        if(number[j] == '.') tochka = j;
    }
    double your_double = 0;
    for(int left = 1; left <= tochka; left++){
        your_double+= (number[left - 1] - 48) * pow(10,tochka - left);
    }
    int right = 1;
    while (tochka + right < number.size()){
        your_double+= (number[tochka + right] - 48) * pow(10,- right);
        right++;
    }

    cout << your_double;
    return 0;
}