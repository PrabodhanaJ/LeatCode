#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
        // unordered_map<string, int> mp = {
        //     {"I", 1}, 
        //     {"V", 5}, 
        //     {"X", 10},
        //     {"L", 50},
        //     {"C", 100},
        //     {"D", 500},
        //     {"M", 1000},
        //     };

        // int size = s.length();
        // int value =0;

        // for (int i =0; i < size; i++){
        //     if ( mp[string(1, s[i])] >= mp[string(1, s[i+1])] ){
        //         value += mp[string(1, s[i])];
        //     }else {
        //         value -=mp[string(1, s[i])];
        //     }
        // }
        // return value;
        int value[256] = {0};
    value['I'] = 1;
    value['V'] = 5;
    value['X'] = 10;
    value['L'] = 50;
    value['C'] = 100;
    value['D'] = 500;
    value['M'] = 1000;

    int total = 0;

    for (int i = 0; i < s.size(); i++) {
        if (i + 1 < s.size() && value[s[i]] < value[s[i+1]]) {
            total -= value[s[i]];
        } else {
            total += value[s[i]];
        }
    }

    return total;
    }

int main() {
    string romanNumeral = "MCMXCIV";
    int integerValue = romanToInt(romanNumeral);
    cout << "The integer value of the Roman numeral " << romanNumeral << " is: " << integerValue << endl;
    return 0;
}
