#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

size_t MaxSize = 0;
string s;
vector <string> Sentences;

int main(){
    while (getline(cin, s)){    // 測試時裝上去 && s != "0"
        Sentences.push_back(s);
        MaxSize = max(MaxSize, s.size());
    }
    for (size_t i=0; i<MaxSize; ++i){
        for (int j=Sentences.size()-1; j>=0; j--){
            if (i < Sentences[j].size()){
                cout << Sentences[j][i];
            }else{
                cout << ' ';
            } 
        }
        cout << '\n';
    }
    return 0;
}