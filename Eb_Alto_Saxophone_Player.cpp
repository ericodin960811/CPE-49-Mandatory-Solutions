#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(){
    map <char, vector<int>> fingerings = {
    {'c', {0, 1, 1, 1, 0, 0, 1, 1, 1, 1}},
    {'d', {0, 1, 1, 1, 0, 0, 1, 1, 1, 0}},
    {'e', {0, 1, 1, 1, 0, 0, 1, 1, 0, 0}},
    {'f', {0, 1, 1, 1, 0, 0, 1, 0, 0, 0}},
    {'g', {0, 1, 1, 1, 0, 0, 0, 0, 0, 0}},
    {'a', {0, 1, 1, 0, 0, 0, 0, 0, 0, 0}},
    {'b', {0, 1, 0, 0, 0, 0, 0, 0, 0, 0}},

    {'C', {0, 0, 1, 0, 0, 0, 0, 0, 0, 0}},
    {'D', {1, 1, 1, 1, 0, 0, 1, 1, 1, 0}},
    {'E', {1, 1, 1, 1, 0, 0, 1, 1, 0, 0}},
    {'F', {1, 1, 1, 1, 0, 0, 1, 0, 0, 0}},
    {'G', {1, 1, 1, 1, 0, 0, 0, 0, 0, 0}},
    {'A', {1, 1, 1, 0, 0, 0, 0, 0, 0, 0}},
    {'B', {1, 1, 0, 0, 0, 0, 0, 0, 0, 0}}
};
    
    int TestCase;
    cin >> TestCase;
    cin.ignore();

    while (TestCase--){
        vector <int> counter = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        vector <int> now =  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        string notes;
        getline (cin, notes);

        for (size_t i=0; i<notes.size(); ++i){
            for (int j=0; j<10; ++j){
                if (now[j] == 0 && fingerings[notes[i]][j] == 1){
                    counter[j]++;
                }
            }
            now = fingerings[notes[i]];
        }

        for (int i=0; i<10; ++i){
            cout << counter[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}