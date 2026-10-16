#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    string dic = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    
    while (getline(cin, str)){
        for (char c : str){
            bool found = false;
            
            for (int i=0; i<dic.size(); ++i){
                if (dic[i] == c){
                    cout << dic[i - 2];
                    found = true;
                    break;
                }
            }
            if (!found) cout << c;
        }
        cout << endl;
    }
    
    return 0;    
}