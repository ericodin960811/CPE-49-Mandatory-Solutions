#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    bool found = false;
    
    while (getline(cin, line)){
        for (char c : line){
            if (c == '"'){
                if (found){
                    found = false;
                    cout << "''";
                }else{
                    found = true;
                    cout << "``";
                }
            }else{
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}
