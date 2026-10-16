#include <iostream>
#include <cmath>
using namespace std;

int cal(int base, int value){
    if (value > 1){                 // 注意
        cout << value / base << ' ';
        value /= base;
        return cal(base, value);
    }else{
        cout << '\n';
        return 0;
    }
}

int main(){
    int _base, _value;

    while (cin >> _value >> _base){
        float ans;

        if (_base > 1){
            ans = log(_value) / log(_base);

            if (ans == floor(ans)){
                cout << _value << ' ';
                cal(_base, _value);
            }else{
                cout << "Boring!" <<'\n';
            }
        }else{
            cout << "Boring!" <<'\n';
        }
    }
    return 0;
}