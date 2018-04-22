#include <stdio.h>
#define IN 0 /*表示这个字符是字母*/
#define OUT 1 /*表示这个字符不是字母*/
int main(void){
    int nc,nw,nl,c,state;
    nc = nw = nl = 0;
    state = OUT;
    while ((c = getchar()) != ']'){
        nc++; //字符数自增
        //如果遇到换行, 行数加一
        if (c == '\n'){
            nl++;
        }
        //当前一个字符不是字母, 当前字符是字母的时候, 单词数自增1
        if( (c >= 65 && c<=90) || (c>=97 && c<=122)){
            putchar(c);
            if (state == OUT){
                state = IN;
                nw++;
            }
        }
        else {
            printf("\n");
            state = OUT;
        }
    }
    printf("nc: %d, nw: %d, nl: %d\n", nc, nw, nl);
}

