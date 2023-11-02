#include <math.h>

char find_bin_pattern(int number){
    int i=0;
    int c=10;
    long int x=0;
    int res=0;
    while (number>0){
        x+=number%2*pow(c,i);
        number/=2;
        i++;
    }
    while (x>0){
        if (x%1000==101){        
        res+=1;
        x/=100;
        }
        else x/=10;
    }
    return res;
}