#include <iostream>
#include <iomanip>
using namespace std;

double firstx, firsty, secondx, secondy, thirdx, thirdy, fourthx, fourthy;
double ax, ay, bx, by, cx, cy;

int main(){
    while (cin >> firstx >> firsty >> secondx >> secondy >> thirdx >> thirdy >> fourthx >> fourthy){
        if (firstx == secondx && firsty == secondy){ // 1 = 2
            bx = firstx; by = firsty;
            ax = thirdx; ay = thirdy;
            cx = fourthx; cy = fourthy;
        }else if (firstx == thirdx && firsty == thirdy){ // 1 = 3
            bx = firstx; by = firsty;
            ax = secondx; ay = secondy;
            cx = fourthx; cy = fourthy;
        }else if (firstx == fourthx && firsty == fourthy){ // 1 = 4
            bx = firstx; by = firsty;
            ax = secondx; ay = secondy;
            cx = thirdx; cy = thirdy;
        }else if (secondx == thirdx && secondy == thirdy){ // 2 = 3
            bx = secondx; by = secondy;
            ax = firstx; ay = firsty;
            cx = fourthx; cy = fourthy;
        }else if (secondx == fourthx && secondy == fourthy){ // 2 = 4
            bx = secondx; by = secondy;
            ax = firstx; ay = firsty;
            cx = thirdx; cy = thirdy;
        }else{ // 3 = 4
            bx = thirdx; by = thirdy;
            ax = firstx; ay = firsty;
            cx = secondx; cy = secondy;
        }

        double dx = cx + (ax - bx);
        double dy = cy + (ay - by);

        cout << fixed << setprecision(3) << dx << " " << dy << endl;
    }

    return 0;
}