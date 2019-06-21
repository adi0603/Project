#include <stdio.h>
int main(void) {
    int n = 7;  //giving size of array
    int old[n], new[n],j,i;
    printf("Enter numbers in array\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &old[i]);       //taking inputs in array
    }
    for ( j = 0; j < n; j++)
    {
        int x=0,prod=1;
        while(x<n)
        {
            if(old[x]!=old[j]) {        //checking that the number should not multiply the storing number
                prod *= old[x];
            }
            x++;    //comment
        }
        new[j]=prod;        //storing product in new array
    }
    printf("Old array\n");
    for(int i=0;i<n;i++)        //printing old array
    {
        i!=n-1?(printf("%d,",old[i])):(printf("%d",old[i]));    //number should not end with a ','
    }
    printf("\nNew array\n");
    for(int i=0;i<n;i++)        //printing new array
    {
        i!=n-1?(printf("%d,",new[i])):(printf("%d",new[i]));    ////number should not end with a ','
    }
    return 0;
}