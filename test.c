#include <stdio.h>
#include <stdlib.h>
int main(){
    int numberOfItems;
    int* arr;//just a pointer
    int inputNmbr;
printf("Enter the number of items: ");
scanf("%d", &numberOfItems);

//enter memory into array
arr= (int*)malloc(numberOfItems * sizeof(int));

if(arr == NULL){
    printf("\n memory allocation failed");
} else {
    printf("\n memory allocated successfully!");
    printf("\n Here is size: %d", numberOfItems);
}

for (int i = 0; i < numberOfItems; i++)
{
    printf("\n Enter number into array at index %d: ", i);
    scanf("%d", &inputNmbr);
    arr[i]=inputNmbr;
    printf("%d", arr[i]);
}

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


int ans;
ans = maxNumber(arr, numberOfItems);

printf("\n The max number is: %d", ans);


free(arr);
return 0;
}