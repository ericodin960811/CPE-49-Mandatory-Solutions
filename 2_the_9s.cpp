#include <iostream>
#include <string>
using namespace std;

int calDegree(int n, int degree){
    int sum = 0;

    if (n > 9){
        while (n > 0){
            sum += n % 10;
            n /= 10;
        }
        degree++;
        return calDegree(sum, degree);
    }

    return degree;
}

int main(){
    string n;

    while (cin >> n && n != "0"){
        int sum = 0;

        for (char c : n){
            sum += c - '0';
        }

        if (sum % 9 == 0){
            cout << n << " is a multiple of 9 and has 9-degree " << calDegree(sum, 1) << "." << endl;
        }else{
            cout << n << " is not a multiple of 9." << endl;
        }
    }

    return 0;
}