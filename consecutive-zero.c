#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    char ch;
    FILE *fp;
    if(argc < 2) 
        return 1;

    fp = fopen(argv[1], "r");
    if(fp == NULL) return 1;

    long maxcnt =0, curcnt =0;
    while((ch = fgetc(fp)) != EOF) {
        if(ch == '0') {
            curcnt++;
        } else {
            if(maxcnt < curcnt) {
                maxcnt = curcnt;
            }
            curcnt=0;
        }
    }
    //last check (for this case: the number ends with maximum zeros)
    if(curcnt > maxcnt)
        maxcnt = curcnt;

    printf("%ld\n", maxcnt);
    return 0;
}

