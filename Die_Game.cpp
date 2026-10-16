#include <iostream>
#include <string>
using namespace std;

int north, top, south, bottom, west, east, temp;

int roll(string p){
    if (p == "north"){
        temp = top;
        top = south;
        south = bottom;
        bottom = north;
        north = temp;
    }else if (p == "east"){
        temp = top;
        top = west;
        west = bottom;
        bottom = east;
        east = temp;
    }else if (p == "west"){
        temp = top;
        top = east;
        east = bottom;
        bottom = west;
        west = temp;
    }else if (p == "south"){
        temp = top;
        top = north;
        north = bottom;
        bottom = south;
        south = temp;
    }

    return top;
}

int main(){
    int TestCase;
    string process;

    while (cin >> TestCase && TestCase){
        north = 2;
        top = 1;
        south = 5;
        bottom = 6;
        west = 3;
        east = 4;

        while (TestCase--){
            cin >> process;
            roll(process);
        }
        cout << top << '\n';
    }

    return 0;
}

//    2
// 3 [1] 4
//    5
//    6