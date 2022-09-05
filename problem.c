#include <stdio.h>

int main(void) {

    int t;
    scanf("%d", &t);
    
    int x,n,worthOfEachCase;
    
    while(t--){
    scanf("%d%d", &x,&n);
    worthOfEachCase = (x/10);
    printf("%d \n", worthOfEachCase*n);
        }
	return 0;
}

