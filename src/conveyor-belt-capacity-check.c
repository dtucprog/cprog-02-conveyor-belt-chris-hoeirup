#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    /// YOUR CODE HERE
    scanf("%d", &motorCount);
    printf(" Enter how many motors are used: %d", motorCount);
    
    scanf("%d\n", &totalPackageWeight);
    printf("\n Enter total package weight %d\n", totalPackageWeight);
    
    int capacity = motorCount * MOTOR_CAPACITY;


    if (capacity >= totalPackageWeight ){
        printf ("Yes! The conveyor belt can carry the packages.");
    }
    else{
        printf("No. The conveyor belt cannot carry the packages.");
    }

}
