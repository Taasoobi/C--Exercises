#include <stdio.h>
#include <stdlib.h>
int main(){
    int numberOfItems;
    int* arr;//just a pointer
printf("Enter the number of items: ");
scanf("%d", &numberOfItems);

//enter memory into array
arr= (int*)malloc(numberOfItems * sizeof(int));

if(arr == NULL){
    printf("\n memory allocation failed");
} else {
    printf("\n memory allocated successfully!");
    printf("\n Here is size: %d", numberOfItems);
    //printf("\n Here is arr: ");
    //printf(arr);
}

/*
for(int i=0; i<numberOfItems-1; i++){
    arr[i]=3;
    printf("item in arr[%d] ", i);
    printf("is: ");
    //printf(arr[i]);
}
*/
for (int i = 0; i < numberOfItems; i++)
{
    arr[i]=3;
    printf("%d", arr[i]);
}


free(arr);
return 0;
}