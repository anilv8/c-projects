#include <stdio.h>

int main(void){
    int n;
    printf("Enter how many numbers are in the sequence:\n");
    scanf("%d",&n);
    int A[n];
    if(n>1 && n<41){
        for(int j=1;j<n;j++){
            for(int i=0;i<n;i++){
                A[i] = i + 1;
                printf("%d ",A[i]);
            }
            printf("\n");
        }
    return 0;
    }
    else
        return 0;

}
