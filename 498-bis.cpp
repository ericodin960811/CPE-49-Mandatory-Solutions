#include <iostream>
#include <string>
#include <sstream> // for parsing the constants line
#include <vector>
using namespace std;

int main(){
    int x;

    while (cin >> x){               // while (true) + cin >> x 會炸re，
        string StrConstants;
        vector <int> ConstVec;

        cin.ignore(1, '\n');

        getline(cin, StrConstants);
        stringstream ss(StrConstants);
        int constant;

        while (ss >> constant){
            ConstVec.push_back(constant);
        }

        ConstVec.pop_back();
            
        int PowConstant = ConstVec.size();
        int sum = 0;

        for (size_t i=0; i<ConstVec.size(); ++i){
            ConstVec[i] = ConstVec[i] * PowConstant;
            sum = sum * x + ConstVec[i];
            PowConstant--;
        }

        cout << sum << endl;
    }
    
    return 0;
}