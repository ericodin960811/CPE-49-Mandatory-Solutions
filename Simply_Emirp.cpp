#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPrime(int n){
    bool prime = true;
    
    for (int i=2; i<=sqrt(n); ++i){
        if (n % i == 0){
            prime = false;
            break;
        }
    }
    if (prime){
        return true;    
    }else return false;
}

int main(){
    int n;
    while (cin >> n){
        cout << n;
        
        if (isPrime(n)){
            string s = to_string(n);
            reverse(s.begin(), s.end());
            int rev = stoi(s);
            
            if (n == rev){
                cout << " is prime." << endl;
            }else if (isPrime(rev)){
                cout << " is emirp." << endl;
            }else{
                cout << " is prime." << endl;
            }
        }else{
            cout << " is not prime." << endl;
        }
    }
    
    return 0;
}