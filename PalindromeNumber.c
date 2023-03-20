
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
    int i,j, Mid;

    if(x<0){
        return 0;
    }
    else if(x==0){
        return 1;
    }
    else{
        printf("輸入 = %d\n", x);

        for(i=8;i>=0;i--){
            //printf("10^%d = %d\n", i,pow(10,i));
            if((x/pow(10,i)) >= 1){
                printf("output = %d\n", (x/pow(10,i)));
                printf("位數 = %d\n", i+1);

                if((i+1)%2 >= 1){
                    printf("奇數\n");
                    Mid = (i+2)/2;
                    printf("Mid = %d\n", Mid);

                    for(j=1 ; Mid-j > 0 ; j++){
                        printf("\nj = %d\n", j);
                        //printf("Mid-j = %d\n", Mid-j);
                        printf("Mid+j = %d\n", Mid+j);
                        printf("pow(10,Mid) = %d\n", pow(10,Mid+j));
                        printf("x/pow(10,Mid+j) = %d\n", x/pow(10,Mid+j));

                        printf("x/pow(10,Mid+j+1) * pow(10,Mid+j)= %d\n", (x/pow(10,Mid+j)) * pow(10,Mid+j));
                        printf("x - (x/pow(10,Mid+j)) * pow(10,Mid+j) = %d\n", x - (x/pow(10,Mid+j)) * pow(10,Mid+j) );

                        printf("最高位 = %d\n", (x - (x/pow(10,Mid+j)) * pow(10,Mid+j))/pow(10,Mid+j-1) );


                    }
                }
                else{
                    printf("偶數\n");
                    Mid = (i+1)/2;

                    for(j=1 ; ((i+1)-j) > 0 ; j++){
                        //if(){
                            return 0;
                        //}
                    }
                }
                return 1;
            }
        }

    }

}


int main(){
    _Bool test;

    test = isPalindrome(54321);
    if(test){
        printf("test = %d", test);
    }
    return test;
}