#include <iostream>
#include <bitset> // binary
using namespace std;

int main(){
    int TestCase;
    cin >> TestCase;

    while(TestCase--){
        int N;
        int HexCounter = 0;
        int BnrCounter = 0;
        string StringHex, StringBnr;

        cin >> N;
        string StrN = to_string(N);

        // binary
        StringBnr = bitset<100>(N).to_string();

        for (char b : StringBnr){
            if (b == '1'){
                BnrCounter++;
            }
        }
        cout << BnrCounter << ' ';

        // heximal
        for (size_t i=0; i<StrN.size(); ++i){  // 沒減會直接當作ascii的編碼，因為它是char
            StringHex = bitset<100>(StrN[i] - '0').to_string();
            for (char h : StringHex){
                if (h == '1'){
                    HexCounter++;
                }
            }
        }
        cout << HexCounter << '\n';
    }

    return 0;
}