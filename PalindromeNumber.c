
#include <stdio.h>
#include <stdlib.h>
//test


_Bool isPalindrome(int x){
    int i,j, Mid, High, Pow, Temp, Left, Right;

    if(x<0){
        return 0;
    }
    else if(x==0){
        return 1;
    }
    else{
        printf("輸入 = %d\n", x);

        for(i=9;i>=0;i--){

            Pow = 1;
            Temp = i;
            while(Temp>0){
                Pow = Pow*10;
                Temp--;
            }
            //printf("Pow = %d\n", Pow);

            High = (x/Pow);
            if(High >= 1){
                printf("output = %d\n", High);
                printf("位數 = %d\n", i+1);

                if((i+1)%2 >= 1){
                    printf("奇數\n");
                    Mid = (i+2)/2;
                    printf("Mid = %d\n", Mid);

                    for(j=1 ; Mid-j > 0 ; j++){

                        Pow = 1;
                        Temp = Mid+j;
                        while(Temp>1){
                            Pow = Pow*10;
                            Temp--;
                        }
                        Left = ((x - ((x/(Pow*10)) * (Pow*10)))/(Pow));

                        Pow = 1;
                        Temp = Mid-j;
                        while(Temp>0){
                            Pow = Pow*10;
                            Temp--;
                        }
                        Right = ((x - ((x/Pow) * Pow))/(Pow/10));

                        if( Left  !=  Right){
                            printf("不符合\n");
                            return 0;
                        }
                    }
                }
                else{
                    printf("偶數\n");
                    Mid = (i+1)/2;
                    printf("Mid = %d\n", Mid);

                    for(j=1 ; Mid+j <= (i+1) ; j++){

                        Pow = 1;
                        Temp = Mid+j;
                        while(Temp>1){
                            Pow = Pow*10;
                            Temp--;
                        }
                        Left = ((x - ((x/Pow) * Pow))/(Pow/10));
                        printf("Left = %d\n", Left);
                        Pow = 1;
                        Temp = Mid-j+1;
                        while(Temp>0){
                            Pow = Pow*10;
                            Temp--;
                        }
                        Right = ((x - ((x/Pow) * Pow))/(Pow/10));
                        printf("Right = %d\n", Right);

                        if( Left  !=  Right){
                            printf("不符合\n");
                            return 0;
                        }
                    }
                }
                printf("符合\n");
                return 1;
            }
        }

    }

}


int main(){
    _Bool test;

    test = isPalindrome(10);
    if(test){
        printf("test = %d", test);
    }
    return test;
}