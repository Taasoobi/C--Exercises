#include <stdio.h>
#include <stdlib.h>

//function to check max number, returns the max value;
int maxNumber(int arr[], int size){
    int max = arr[0];
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
int* arr;//just a pointer
int inputNmbr;
int ans;


//prompt user
printf("Enter the number of items: ");
scanf("%d", &numberOfItems);


//enter memory into array
arr= (int*)malloc(numberOfItems * sizeof(int));


//memory allocation check
if(arr == NULL){
    printf("\n memory allocation failed");
} else {
    printf("\n memory allocated successfully!");
    printf("\n Here is size: %d", numberOfItems);
}


//enter value for each indices
for (int i = 0; i < numberOfItems; i++)
{
    printf("\n Enter number into array at index %d: ", i);
    scanf("%d", &inputNmbr);
    arr[i]=inputNmbr;
    //printf("%d", arr[i]);
}

//call function
ans = maxNumber(arr, numberOfItems);
//print answer
printf("\n The max number is: %d", ans);

free(arr);
return 0;
}