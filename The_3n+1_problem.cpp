#include <iostream>
using namespace std;

int alg(int n){         //function "alg"
    int t = 1;

    while(n != 1){
        t = t + 1;

        if (n % 2 == 1){        //奇數
            n = n * 3 + 1;
        }
        else{                   //偶數
            n = n / 2;
        }
    }
    return t;
}

int main(){             //i到j while(i >> j >>?)
    int i, j;

    while (cin >> i >> j) {
        int Max = 1;
    
        cout << i << ' ' << j << ' ';

        if (i > j){
            int box = i;    //交換
            i = j;
            j = box;
        }

        for (int k = i; k <= j; k++){
            alg(k);

            if (alg(k) > Max){
                Max = alg(k);
            }
        }
        cout << Max << endl;
    }
    return 0;
}