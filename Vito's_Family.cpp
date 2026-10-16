#include <iostream>
#include <vector>
#include <algorithm>     //sort
#include <cmath>        //abs()
using namespace std;

vector <int> sVec;

int Mid(int r){
    //    0開始位置     3筆  
    int MedianIndex = (r - 1) / 2;
    int Median = sVec[MedianIndex];

    return Median;
}

int main(){
    int t; cin >> t;
    int r;
    int s;

    while (t--){
        cin >> r;
        sVec.clear();

        while (r--){
            cin >> s;
            sVec.push_back(s);
        }
        //Mid(r)要減掉每一位取abs，並將全部相加(不能用r，因為他會--變動)
        long long int distance = 0;

        sort(sVec.begin(), sVec.end()); //單一Mid()職責，不要放裡面

        for (int val: sVec){
            distance += abs(Mid(sVec.size()) - val);
        }
        cout << distance << endl;
    }

    return 0;
}