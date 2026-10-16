#include <iostream>
using namespace std;

int main(){
    unsigned int l, r;

    while (cin >> l >> r){
        int c = 0;
        int COcounter = 0;

        if (l != 0 || r != 0){
            while (l > 0 || r > 0){
                if (l % 10 + r % 10 + c >= 10){
                    c = 1;
                    COcounter += 1;
                }else{
                    c = 0;
                }
                l /= 10;
                r /= 10;
            }
        }else {
            return 0;
        }
        if (COcounter == 0){
            cout << "No carry operation." << endl;
        }else if (COcounter == 1){
            cout << "1 carry operation." << endl;
        }else{
            cout << COcounter << " carry operations." << endl;
        }
    }

    return 0;
}