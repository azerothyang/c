//
// Created by 111 on 2018/4/23.
//
#include <stdio.h>
#include <math.h>

double power(double , int);
int main(){
    double res;
    res = power(2.8, 5);
    printf("%f\n", res);
}

/**
 *
 * @param base
 * @param n
 * @return
 */
double power(double base, int n){
    double res = 1.0;
    int i;
    if(n == 0){
        return 1; //任何非零数的0次方为1
    }
    else if (n > 1){
        for (i = 0; i < n; ++i) {
            res *= base;
        }
        return res;
    } else {
        for (i = 0; i < (-n); ++i) {
            res *= base;
        }
        return 1.0/res;
    }
}
