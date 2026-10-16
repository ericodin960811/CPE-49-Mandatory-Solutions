#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    string input;

    while(getline(cin, input)){ // 會有空格
        map <int, int> Ascii;

        for (size_t i=0; i<input.size(); ++i){
            Ascii[input[i]]++; // 自動改成ascii存
        }

        // 次數小到大
        int MaxTimes = 0;

        for (auto val : Ascii){
            MaxTimes = max(MaxTimes, val.second);
        }

        for (int i=1; i<=MaxTimes; ++i){
            for (auto it = Ascii.rbegin(); it != Ascii.rend(); ++it){ // iterator, reverse begin
                                                                    // 不能反過來用end, begin，也不能用>, <，只能用!
                int AsciiVal = it->first;  // ASCII 值 (Key)
                int times = it->second;     // 次數 (Value)
                
                if (times == i){
                    // 只有當次數匹配 i 時才輸出
                    cout << AsciiVal << ' ' << times << '\n';
                }
            }
        }
    }

    return 0;
}