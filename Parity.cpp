#include <iostream>
#include <list>
using namespace std;

int i;
int Max;
long int _binary;

void CalBinary(int binary){

    int ParityAmount = 0;
    list<int> BinaryList;

    while (binary > 0){
        BinaryList.push_front(binary % 2);
        binary = binary / 2;
    }
    cout << "The parity of ";
    for (int bit : BinaryList) {
        if (bit == 1){
            ParityAmount += 1;
        }
        cout << bit;
    }
    cout << " is " << ParityAmount << " (mod 2)." << '\n';
}

int main(){
    while (cin >> i){
        if (i != 0){
            CalBinary(i);
        }else{
            break;
        }
    }

    return 0;
}