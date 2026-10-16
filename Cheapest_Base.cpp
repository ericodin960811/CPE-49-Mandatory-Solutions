#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t, n, query;
    cin >> t;

    for (int testcase = 1; testcase <= t; ++testcase){
        if (testcase > 1) cout << endl;
        cout << "Case " << testcase << ":" << endl;

        int Cost[36];

        for (int i = 0; i < 36; ++i){
            cin >> Cost[i];
        }

        cin >> n;

        while (n--){
            cin >> query;
            cout << "Cheapest base(s) for number " << query << ": ";

            int cheapest = 2000000000;
            int Total[37];

            for (int base = 2; base <= 36; ++base){
                int total = 0;
                int q = query;

                if (q == 0){
                    total = Cost[0];
                }else{
                    while (q > 0){
                        int rem = q % base;
                        q /= base;
                        total += Cost[rem];
                    }
                }
                Total[base] = total;
                cheapest = min(cheapest, total);
            }

            bool first = true;

            for (int base = 2; base <= 36; ++base){
                if (cheapest == Total[base] && first){
                    cout << base;
                    first = false;
                }else if (cheapest == Total[base]){
                    cout << " " << base;
                }
            }
            cout << endl;
        }
    }

    return 0;
}