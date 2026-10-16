#include <iostream>
#include <cmath>
using namespace std;

long long int a;
long long int b;
int SquareNum = 0;

int main(){
    while (cin >> a >> b){
        if (a == 0 && b == 0){
            break;
        }else{
            for (int i=a; i<=b; i++){
                double Sqrt = sqrt(i);
                if (fmod(Sqrt, 1.0) == 0.0){    // <cmath> 中的 fmod 專門判斷是否為整數
                    SquareNum += 1;
                }
            }
            cout << SquareNum << endl;
            SquareNum = 0;
        }
    }

    return 0;
}