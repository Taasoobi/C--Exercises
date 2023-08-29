#include <stdio.h>
#include <stdlib.h>

//function to check max number, returns the max value;
float maxNumber(float arr[], int size){
    float max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }   
    }
    return max;
}


int main(){
int numberOfItems;
float *arr = NULL;//just a pointer
float inputNmbr;
float ans;


//prompt user
printf("Enter the number of items: (integer) ");
scanf("%d", &numberOfItems);
printf("---------------------------------");

//enter memory into array
arr= (float*)malloc(numberOfItems * sizeof(float));

//memory allocation check
if(arr == NULL){
    printf("\n memory allocation failed");
    exit(0);
} else {
    printf("\n memory allocated successfully!");
    printf("\n Dynamic array size is: %d", numberOfItems);
}
printf("\n -----------------------------------");

//enter value for each indices
for (int i = 0; i < numberOfItems; i++)
{
    printf("\n Enter value into array at index %d: ", i);
    scanf("%f", &arr[i]);
    //arr[i]=inputNmbr;
    printf("\n Value at index %d is: ", i);
    printf("%.2f", arr[i]);
    printf("\n");
}
printf("\n -----------------------------------");

//call function
ans = maxNumber(arr, numberOfItems);
//print answer
printf("\n The largest number is: %.2f", ans);

free(arr);
return 0;
}