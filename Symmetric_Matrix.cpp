#include <iostream>
#include <stack>
using namespace std;

int TestCase;
int counter = 1;
char garbage;
string strgarbage;
string temp;

int main(){
    cin >> TestCase;

    while (TestCase--){
        int n;
        stack <string> matrix;
        bool symmetric = true;

        cin >> garbage >> garbage;
        cin >> n;

        if (n % 2 == 0){                        // 偶數
            for (int i=0; i<(n * n) / 2; i++){
                cin >> temp;

                if (temp[0] == '-'){
                    symmetric = false;
                }
                matrix.push(temp);
            }

            for (int i=0; i<(n * n) / 2; i++){
                cin >> temp;
                if (temp != matrix.top()){
                    symmetric = false;
                }
                matrix.pop();    
            }
            
        }else{                                      // 奇數
            for (int i=0; i<(n * n - 1) / 2; i++){
                cin >> temp;
                if (temp[0] == '-'){
                    symmetric = false;
                }
                matrix.push(temp);
                
            }


            cin >> strgarbage;

            if (strgarbage[0] == '-'){
                symmetric = false;
            }

            for (int i=0; i<(n * n - 1) / 2; i++){
                cin >> temp;
                if (temp != matrix.top()){
                    symmetric = false;
                }
                matrix.pop();
            }
        }

        if (symmetric){
            cout << "Test #" << counter << ": Symmetric." << '\n';
        }else{
            cout << "Test #" << counter << ": Non-symmetric." << '\n';
        }

        counter++;
    }

    return 0;
}

// 記得全部都存起來再pop掉，除了奇數中間的，不能錯就break，不然會炸，最後的stack會是空的