#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n;
    float *item;
    printf("\n\n Pointer : Find the largest number by Dynamically Allocating Memory :\n");
    printf("-------------------------------------------------------------------------\n");
    printf(" Input total number of items: ");
    scanf("%d",&n);
    item = (float *)malloc(sizeof(n)); // Memory is allocated for 'n' items
        if(item==NULL){
            printf(" No memory allocated.");
            exit(0);
        } else {
            printf("Here is item value: \n");
            printf(item);
        }
    printf("\n"); // line feed
    // for i=0 to n-1, increment i
    for(int i=0; i<n-1; i++)
    {
        //print "Number i:"

        //Input number (scanf) pointer *item
    }
    // for i=0 to n-1, increment i
    {
    // find max using pointer *item
    }
    printf(" The Largest item is : %.2f \n\n",*item);
    return 0;
}
