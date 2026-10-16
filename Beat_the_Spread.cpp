#include <iostream>
using namespace std;

int main(){
    int t, sum, diff;
    cin >> t;
    int pt1, pt2;
    
    while (t--){
        cin >> sum >> diff;
        
        if (sum >= diff && (sum + diff) % 2 == 0){
            pt1 = (sum + diff) / 2;
            pt2 = sum - pt1;
            cout << pt1 << ' ' << pt2 << endl;
        }else{
            cout << "impossible" << endl;
        }
    }
    
    return 0;
}