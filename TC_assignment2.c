#include <stdio.h>
#include <stdlib.h>

struct Distance {
    int feet;
    float inches;
};

int addFeet(int d1ft, int d2ft){
    int totalft = 0;
    totalft = d1ft + d2ft;
    return totalft;
}

float addInches(float d1in, float d2in){
    float totalin = 0;
    totalin = d1in + d2in;
    return totalin;
}

int main() {
//create 2 Distance structs
struct Distance d1;
struct Distance d2;

// enter first distance input
printf("1st distance\n");
printf("Input feet: ");
scanf("%d", &d1.feet);
printf("Input inches: ");
scanf("%f", &d1.inches);

// enter second distance input
printf("\n2nd distance\n");
printf("Input feet: ");
scanf("%d", &d2.feet);
printf("Input inches: ");
scanf("%f", &d2.inches);

// add distances
int resultfeet;
float resultinches;

resultfeet = addFeet(d1.feet, d2.feet);
resultinches = addInches(d1.inches, d2.inches);

// convert inches to feet if greater than or equal to 12
while (resultinches >= 12.0) {
resultinches = resultinches - 12.0;
++resultfeet;
}
printf("\nSum of distances = %d\'-%.1f\"", resultfeet, resultinches);
return 0;
}