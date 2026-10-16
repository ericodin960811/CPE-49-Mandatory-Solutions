#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t, n;
    
    while (cin >> t){
        vector <int> Vec;
        
        for (int i=0; i<t; ++i){
            cin >> n;
            Vec.push_back(n);
        }
        
        sort(Vec.begin(), Vec.end());
        
        int m1 = Vec[(t - 1) / 2]; // 厲害，就不用判斷奇偶數。
        int m2 = Vec[t / 2];

        int counter = 0;
        for (int i = 0; i < t; ++i) {
            if (Vec[i] >= m1 && Vec[i] <= m2) {
                counter++;
            }
        }

        int p = m2 - m1 + 1;

        cout << m1 << " " << counter << " " << p << "\n";
    }
    
    return 0;
}