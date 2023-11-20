#include <iostream>
#include <string>
#include "func.h"
using namespace std;
string itc_nuli(string bin, int len){
    while (bin.length() < len){
        bin = "0" + bin;
    }
    return bin;
}


int itc_abs(int num){
    int b;
    b = abs(num);
    return b;
}


string itc_bin_num(int number){
    string bin;
    while (number > 0){
        bin = to_string(number % 2) + bin;
        number /= 2;
    }
    return bin;
}
