#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ismin2Max(vector <int> vec){
    for (size_t i=0; i<vec.size()-1; ++i){
        if (vec[i] > vec[i + 1]){
            return 0;
        }
    }

    return 1;
}

int main(){
    int TestCase;
    int amount;
    int temp;

    cin >> TestCase;

    while (TestCase--){
        int counter = 0;
        vector <int> Trains;

        cin >> amount;

        while (amount--){
            cin >> temp;
            Trains.push_back(temp);
        }

        while (ismin2Max(Trains) == 0){
            for (size_t i=0; i<Trains.size()-1; ++i){
                if (Trains[i] > Trains[i + 1]){
                    swap(Trains[i], Trains[i + 1]);
                    counter++;
                }
            }
        }

        cout << "Optimal train swapping takes " << counter << " swaps." << '\n';
    }

    return 0;
}