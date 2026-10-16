#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int divisor; 

int main(){
    int TestCase, num;
    vector <int> Nums;

    while (cin >> TestCase >> divisor){
        int t = TestCase;
        
        while (t--){
            cin >> num;
            Nums.push_back(num);
        }

        cout << TestCase << ' ' << divisor << '\n';

        sort (Nums.begin(), Nums.end(), [](int a, int b) {
            // 1. 主要依據：餘數 (Modulo)
            int mod_a = a % divisor;
            int mod_b = b % divisor;
            
            if (mod_a != mod_b) {
                return mod_a < mod_b; // 餘數小的排前面 (遞增)
            }
            
            // 2. 次要依據：奇偶性
            bool is_odd_a = a % 2 != 0;
            bool is_odd_b = b % 2 != 0;

            if (is_odd_a != is_odd_b) {
                return is_odd_a; // 奇數 (true) 排在偶數 (false) 前面
            }
            
            // 3. 第三依據：處理都是奇數或都是偶數的情況
            
            if (is_odd_a) { 
                // 都是奇數：較大者排前面 (遞減)
                return a > b; 
            } else { 
                // 都是偶數：較小者排前面 (遞增)
                return a < b;
            }
        });

        for (size_t i=0; i<Nums.size(); ++i){
            cout << Nums[i] << '\n';
        }
    }

    return 0;
}