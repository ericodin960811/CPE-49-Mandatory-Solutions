#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N;

    while (cin >> N){
        N = floor(N * 1.5);
        cout << N << '\n';
    }

    return 0;
}