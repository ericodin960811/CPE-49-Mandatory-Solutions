#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

vector <int> Nums;
vector <int> Differences;

int main() {
    int size;
    int counter;
    bool jolly;

    while (cin >> size){
        Nums.clear();
        Differences.clear();
        
        while (size--){
            int temp;
            counter = 1;
            jolly = true;

            cin >> temp;
            Nums.push_back(temp);
        }
        for (size_t i=0; i<Nums.size()-1; ++i){
            Differences.push_back(abs(Nums[i] - Nums[i + 1]));
        }
        sort(Differences.begin(), Differences.end());
        for (auto i : Differences){
            if (i == counter){
                counter++;
            }else {
                cout << "Not jolly" << '\n';
                jolly = false;
                break;
            }
        }
        if (jolly){
            cout << "Jolly" << '\n';
        }
    }
    return 0;
}