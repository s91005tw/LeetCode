#include<stdio.h>
#include<stdlib.h>

int romanToInt(char * s){
    int i;

    for(i=0; ; i++){
        if(s[i] == '\0' ){
            break;
        }
        printf("%c", s[i]);
    }
    printf("\n");

    return 1;

}


int main(){
    int Numerals;
    char RomanNumerals[] = "vix";
    printf("test\n");
    //RomanNumerals[] = "vix";

    Numerals = romanToInt(RomanNumerals);

    printf("Numerals = %d\n", Numerals);
    return 0;
}
