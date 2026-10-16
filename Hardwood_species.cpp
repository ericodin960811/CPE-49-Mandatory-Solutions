#include <iostream>
#include <string>
#include <iomanip>
#include <map>
using namespace std;

int main(){
    int t;
    string tree;
    
    cin >> t;
    cin.ignore();
    cin.ignore();
    while (t--){ // 先判斷再減一
        map <string, int> Trees;
        int counter = 0;
        
        while (getline(cin, tree) && tree != ""){
            Trees[tree]++;
            counter++;
        }
        
        for (auto a : Trees){
            cout << fixed << setprecision(4) << a.first << ' ' << a.second * 100.0 / counter  << endl;
        }
        
        if (t > 0){
            cout << endl; // 最後一行不空行
        }
    }
    
    return 0;
}