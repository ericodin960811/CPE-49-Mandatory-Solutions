#include <iostream>
#include <vector>
using namespace std;

int t, M, D;      // 0                                           11
vector <int> Days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
vector <string> Weekdays = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};

int main(){
    cin >> t;
    while (t--){
        int days = 0;

        cin >> M >> D;

        for (int i=0; i<M-1; ++i){
            days += Days[i];
        }
        days += D;
        cout << Weekdays[days % 7] << '\n';
    }

    return 0;
}