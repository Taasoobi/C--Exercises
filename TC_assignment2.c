#include <stdio.h>
#include <stdlib.h>

struct Distance {
    int feet;
    int inches;
};

int addFeet(int d1ft, int d2ft){
    int totalft = 0;
    totalft = d1ft + d2ft;
    return totalft;
}

int addInches(int d1in, int d2in){
    int totalin = 0;
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
scanf("%d", &d1.inches);

// enter second distance input
printf("\n2nd distance\n");
printf("Input feet: ");
scanf("%d", &d2.feet);
printf("Input inches: ");
scanf("%d", &d2.inches);

// add distances
int resultfeet;
int resultinches;

resultfeet = addFeet(d1.feet, d2.feet);
resultinches = addInches(d1.inches, d2.inches);

// convert inches to feet if greater than or equal to 12
while (resultinches >= 12) {
resultinches = resultinches - 12;
++resultfeet;
}
printf("\nSum of distances = %d\'-%d\"", resultfeet, resultinches);
return 0;
}