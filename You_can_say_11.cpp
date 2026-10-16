#include <iostream>
#include <string>
using namespace std;

int main(){
    string N;

    while (cin >> N && N != "0"){
        int odd = 0;
        int even = 0;

        for (size_t i=0; i<N.size(); ++i){
            if (i % 2 == 0){
                // odd
                odd += N[i] - '0';
            }else{
                // even
                even += N[i] - '0';
            }
        }

        if ((odd - even) % 11 == 0){
            cout << N << " is a multiple of 11." << '\n';
        }else{
            cout << N << " is not a multiple of 11." << '\n';
        }

    }

    return 0;
}