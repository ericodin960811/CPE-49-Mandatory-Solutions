#include <iostream>
using namespace std;

int main(){
    long long S, D;

    while (cin >> S >> D){
        long long counter = 0;
        long long GroupNum = S;

        while (counter < D){
            counter += GroupNum; 
            GroupNum++;
        }
        
        GroupNum -= 1;

        if (counter > D){
            counter -= GroupNum;
        }

        cout << GroupNum << endl;

    }

    return 0;
}