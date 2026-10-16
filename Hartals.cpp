#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t, n, p, h;
    cin >> t;
    
    while (t--){
        cin >> n >> p;

        vector <int> Days(n);
        for (int i = 0; i < n; ++i){
            Days[i] = 0;
        }

        while (p--){
            cin >> h;
            for (int i = 0; i < n; ++i){
                if ((i + 1) % h == 0){
                    Days[i] = 1;
                }
            }
        }

        int counter = 0;
        for (int i = 0; i < n; ++i){
            if (Days[i] == 1 && i % 7 != 5 && i % 7 != 6){
                counter++;
            }
        }
        cout << counter << endl;
    }

    return 0;
}