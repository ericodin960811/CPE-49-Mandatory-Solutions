#include <iostream>
#include <string>
using namespace std;

int fib[38];

string toFib(int n){
    string res = "";
    bool started = false;

    for (int i = 37; i >= 0; i--){
        if (fib[i] <= n && !started){
            started = true;
        }
        if (fib[i] <= n && started){
            res += '1';
            n -= fib[i];
        }else if (fib[i] > n && started){
            res += '0';
        }
    }

    return res;
}

int main(){
    fib[0] = 1;
    fib[1] = 2;

    for (int i = 2; i <= 37; ++i){
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    int n, num;
    cin >> n;

    while (n --){
        cin >> num;
        cout << num << " = " <<  toFib(num) << " (fib)" << endl;
    }

    return 0;
}