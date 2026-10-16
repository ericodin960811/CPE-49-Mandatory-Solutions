#include <iostream>
using namespace std;

int TestCase;

int main(){
    cin >> TestCase;

    for (int i=1; i<=TestCase; i++){
        int a, b; // a <= b
        int Sum = 0;
        
        cin >> a >> b;

        if (a % 2 ==0){
            a += 1;
        }

        if (b % 2 ==0){
            b -= 1;
        }

        for (int j=a; j<=b; j++){
            Sum += j;
            j += 1;
        }
        cout << "Case " << i << ": " << Sum << '\n';
    }

    return 0;
}