#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    
    string str;
    map <string, int> contries;
    
    while (t--){
        cin >> str;
        contries[str]++;
        getline(cin, str);
    }
    
    for (auto c : contries){
        cout << c.first << ' ' << c.second << endl;
    }
    
    return 0;
}