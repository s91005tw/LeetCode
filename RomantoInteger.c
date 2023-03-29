#include<stdio.h>
#include<stdlib.h>

int romanToInt(char * s){
    int i, j, Result;
    int Digits, Tens, Hundreds, Thousands;

    Result = 0;
    for(i=0; ; i++){
        if(s[i] == '\0' ){
            break;
        }
        printf("%c", s[i]);
    }
    printf("\n");

    for(i=0; ; i++){
        if(s[i] == '\0' ){
            break;
        }
        if(s[i] == 'M'){
            if(i==0){
                Result = Result + 1000;
                printf("Result = %d\n", Result);
            }
            else{
                if(s[i-1] == 'M'){
                    Result = Result + 1000;
                    printf("Result = %d\n", Result);
                }
                else{
                    Result = Result + 1000;

                    if(s[i-1] == 'D'){
                        Result = Result - 500;
                    }
                    else{
                        j = i-1;
                        while(j>=0){
                            if(s[j] == 'C'){
                                Result = Result - 100;
                            }
                            j--;
                        }
                    }

                }
            }
        }
        if(s[i] == 'D'){
            if(i==0){
                Result = Result + 500;
                printf("Result = %d\n", Result);

                j=i+1;
                while(s[j] != '\0'){
                    if(s[j] == 'C'){
                        Result = Result + 100;
                        printf("Result = %d\n", Result);
                    }
                    j++;
                }
            }
            else{
                Result = Result + 500;
                printf("Result = %d\n", Result);
                j = i-1;
                while(j>=0){
                    if(s[j] == 'C'){
                        Result = Result - 100;
                        printf("Result = %d\n", Result);
                    }
                    j--;
                }

                j=i+1;
                while(s[j] != '\0'){
                    if(s[j] == 'C'){
                        Result = Result + 100;
                        printf("Result = %d\n", Result);
                    }
                    j++;
                }
            }
        }
        if(s[i] == 'C'){
            if(i==0){
                Result = Result + 100;
                printf("Result = %d\n", Result);

            }


        }
    }


    return Result;

}


int main(){
    int Numerals;
    char RomanNumerals[] = "CCCD";
    //printf("test\n");

    Numerals = romanToInt(RomanNumerals);

    printf("Numerals = %d\n", Numerals);
    return 0;
}
