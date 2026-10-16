#include <iostream>
using namespace std;

long long int n;

int main(){
    while (cin >> n && n != 0){
        while (n >= 10){
            int sum = 0;
            
            while (n > 0){
                sum += n % 10;
                n /= 10;
            }
            n = sum;
        }
        cout << n << '\n';
    }
    return 0;
}