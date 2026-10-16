#include <iostream>
using namespace std;

int main(){
    int counter = 0;
    int TestCase;
    cin >> TestCase;

    while (TestCase--){
        counter++;

        long long int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        long long int group1 = x1 + y1;
        long long int group2 = x2 + y2;

        long long int AllDist1 = group1 * (group1 + 1) / 2 + (x1 + 1);
        long long int AllDist2 = group2 * (group2 + 1) / 2 + (x2 + 1);

        cout << "Case " << counter << ": " << AllDist2 - AllDist1 << '\n';
    }

    return 0;
}