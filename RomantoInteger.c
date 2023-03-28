#include<stdio.h>
#include<stdlib.h>

int romanToInt(char * s){
    int i;

    for(i=0; i<4; i++){
        printf("%c", s);
    }
    printf("\n");

    return 1;

}


int main(){
    int Numerals;
    char *RomanNumerals;
    printf("test\n");
    RomanNumerals = 'vix';

    Numerals = romanToInt(RomanNumerals);

    printf("Numerals = %d\n", Numerals);
    return 0;
}
