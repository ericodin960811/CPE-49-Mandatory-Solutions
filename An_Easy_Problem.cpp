#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    // 使用 long long 防止極長字串加總溢位
    long long sum;
    int maxN;

    while (cin >> str) {
        sum = 0;
        maxN = 1; // 最小進位從 2 開始，所以 maxN 至少要是 1

        for (char c : str) {
            int v = -1;
            if (c >= '0' && c <= '9') v = c - '0';
            else if (c >= 'A' && c <= 'Z') v = c - 'A' + 10;
            else if (c >= 'a' && c <= 'z') v = c - 'a' + 36;
            
            if (v != -1) {
                sum += v;
                if (v > maxN) maxN = v; // 記得要找「最大值」
            }
        }

        bool found = false;
        // 進位 i 必須大於數字中的任何一個位數，所以從 maxN + 1 開始
        for (int i = maxN + 1; i <= 62; ++i) {
            if (sum % (i - 1) == 0) {
                cout << i << endl;
                found = true;
                break;
            }
        }
        
        if (!found) cout << "such number is impossible!" << endl;
    }
    return 0;
}
// 難