#include <iostream>
#include <string>
#include "func.h"
using namespace std;
int main(){
    int k, n;
    cin >> k >> n;
    bool neg = false;
    if(n < 0){
        neg = true;
        n =  itc_abs(n);
        n = (1 << k) - n;
    }
    string bin = itc_bin_num(n);
    if(neg){
        bin = itc_nuli(bin, k);
    }
    cout << bin << endl;
}
