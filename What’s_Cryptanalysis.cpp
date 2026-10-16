#include <iostream>
#include <string>
#include <cctype>   // isalpha(c), toupper(c)
#include <map>
#include <algorithm>
using namespace std;

int n;
map <char, int> CharMap;

int main(){
    string text;

    cin >> n;
    cin.ignore(1, '\n');

    while (n--){
        getline(cin, text);
        for (char c : text){
            if (isalpha(c)){
                c = toupper(c);
                CharMap[c]++;
            }
        }
    }

    int MaxCount = 0;
    for (auto times : CharMap){
        MaxCount = max(times.second, MaxCount);
    }

    for (int max=MaxCount; max>=0; --max){
        for (auto big : CharMap){
            if (max == big.second){
                cout << big.first << ' ' << big.second << '\n';
            }
        }
    }

    return 0;
}