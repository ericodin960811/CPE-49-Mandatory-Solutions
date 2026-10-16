#include <iostream>
#include <cmath> // pow
#include <algorithm> // max
#include <numeric> // 內建的 gcd 不行用
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int Counter = 1;

    int TestCase;
    cin >> TestCase;

    while (TestCase--){
        string StrNum1, StrNum2;
        int Num1 = 0;
        int Num2 = 0;

        cin >> StrNum1 >> StrNum2;

        // Num1
        int RevCounter1 = 0;
        for (int i=StrNum1.size()-1; i>=0; --i){
            Num1 += pow(2, i) * (StrNum1[RevCounter1] - '0');
            RevCounter1++;
        }

        // Num2
        int RevCounter2 = 0;
        for (int i=StrNum2.size()-1; i>=0; --i){
            Num2 += pow(2, i) * (StrNum2[RevCounter2] - '0');
            RevCounter2++;
        }

        // Common Factor *using gcd
        if (gcd(Num1, Num2) > 1){
            cout << "Pair #" << Counter << ": All you need is love!" << '\n';
        }else{
            cout << "Pair #" << Counter << ": Love is not all you need!" << '\n';
        }

        Counter++;
    }
    return 0;
}