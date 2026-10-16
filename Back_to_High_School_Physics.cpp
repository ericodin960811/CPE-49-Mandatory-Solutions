#include <iostream>
using namespace std;

int v; // 速度
int t; // 時間
long long int x;

int main(){
    while (cin >> v >> t){
        x = v * t * 2;
        cout << x << endl;
    }

    return 0;
}
