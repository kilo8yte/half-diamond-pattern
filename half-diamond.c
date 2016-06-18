#include <stdio.h>

int main()
{
    int num=0;
    printf("Enter number: ");
    scanf("%d",&num);
    
    for(int i=1,k=1;i<=num+num-1;i++){
        for(int j=0;j<k;j++){
            printf("*");
        }
        if(i>=num)
            k=--k;
        else
            ++k;
        printf("\n");
    }
    return 0;
}
