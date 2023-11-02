#include <math.h>

char find_bin_pattern(int number){
    int i=0;
    int c=10;
    long int decadenum=0;
    int res=0;
    while (number>0){
        decadenum+=number%2*pow(c,i);
        number/=2;
        i+=1;
    }
    while (decadenum>0){
        if (decadenum%1000==101){        
        res+=1;
        decadenum/=100;
        }
        else decadenum/=10;
    }
    return res;
}   