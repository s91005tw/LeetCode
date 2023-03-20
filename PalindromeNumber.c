
#include <stdio.h>
#include <stdlib.h>
//test

int pow(int x, int y){
    //int Result = y;
    if(y>=1){
        return x * pow(x,y-1);
    }
    else{
        return 1;
    }

}


_Bool isPalindrome(int x){
    int i,j;

    if(x<0){
        return 0;
    }
    else if(x==0){
        return 1;
    }
    else{
        printf("輸入 = %d\n", x);
        for(i=9;i>=0;i--){

            printf("10^i = %d\n", pow(10,i));
            if((x/pow(10,i)) > 1){
                printf("位數 = %d\n", i);
                return 1;
            }
        }

    }

}


int main(){
    _Bool test;

    test = isPalindrome(1211);

    //printf("test = %d", test);
    return test;
}