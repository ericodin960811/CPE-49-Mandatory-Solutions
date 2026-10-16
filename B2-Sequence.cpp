#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int TestCase;
    int temp;
    int counter = 1;

    while (cin >> TestCase){
        int LoopCounter = 0;
        bool B2 = true;
        vector <int> Vec;
        map <int, int> Map;

        for (int i=0; i<TestCase; ++i){
            cin >> temp;
            Vec.push_back(temp);
        }

        for (int i=0; i<TestCase; ++i){
            for (int j=LoopCounter; j<TestCase; j++){
                Map[Vec[i] + Vec[j]]++;
            }
            LoopCounter++;
        }

        for (auto t : Map){
            if (t.second != 1){
                cout << "Case #" << counter << ": It is not a B2-Sequence." << '\n';
                B2 = false;
                break;
            }
        }
        if (B2){
            cout << "Case #" << counter << ": It is a B2-Sequence." << '\n';
        }

        counter++;
    }

    return 0;
}