#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    string s1, s2;

    while (getline(cin, s1) && getline(cin, s2)){
        map <char, int> S1;
        map <char, int> S2;

        for (char c : s1){
            S1[c]++;
        }

        for (char c : s2){
            S2[c]++;
        }

        for (auto a : S1){
            int min_times = 0;

            if (S2[a.first] > 0){
                min_times = min(a.second, S2[a.first]);
            }
            for (int i = 0; i < min_times; ++i){
                cout << a.first;
            }
        }
        cout << endl;
    }

    return 0;
}