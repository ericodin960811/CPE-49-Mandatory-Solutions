#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int height, a;
    string unit;
    double pi = acos(-1.0);
    
    while (cin >> height >> a >> unit){
        double deg;
        if (unit == "min"){
            deg = a / 60.0;
        }else{
            deg = a;
        }
        
        if (deg > 180.0){
            deg = 360.0 - deg;
        }
        
        cout << fixed << setprecision(6);
        cout << 2 * (height + 6440) * pi * (deg / 360.0) << ' ';
        cout << 2 * (height + 6440) * sin((deg * pi / 180.0) / 2.0) << endl; 
                                        // 只吃弧度，角度不行
    }
    
    return 0;
}