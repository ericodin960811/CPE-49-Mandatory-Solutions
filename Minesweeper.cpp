#include <iostream>
#include <string>
#include <cstring> // memset
using namespace std;

int main(){
    int row, col;
    int map[105][105];
    int counter = 1;
    
    while (cin >> row >> col && (row && col)){
        memset(map, 0, sizeof(map));
        cin.ignore();
        string str;
        
        for (int i=1; i<=row; ++i){
            getline(cin, str);
            for (int j=1; j<=col; ++j){
                if (str[j - 1] == '*'){
                    map[i][j] -= 100;
                    
                    map[i - 1][j - 1] += 1;
                    map[i][j - 1] += 1;
                    map[i + 1][j - 1] += 1;
                    map[i - 1][j] += 1;
                    map[i + 1][j] += 1;
                    map[i - 1][j + 1] += 1;
                    map[i][j + 1] += 1;
                    map[i + 1][j + 1] += 1;
                }             
            }
        }
        if (counter > 1) cout << endl;
        cout << "Field #" << counter << ":" << endl;
        for (int i=1; i<=row; ++i){
            for (int j=1; j<=col; ++j){
                if (map[i][j] >= 0){
                    cout << map[i][j];
                }else{
                    cout << '*';
                }
            }
            cout << endl;
        }
        
        counter++;
    }
    
    
    return 0;
}