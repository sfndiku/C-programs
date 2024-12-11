#include <stdio.h>
#define C_SIZE (100)

void main(){
    union addr{
        char Name[C_SIZE];
        char House[C_SIZE];
        char City[C_SIZE];
        char State[C_SIZE];
        char Pin[C_SIZE];
    }h1;

    printf("Enter the Name: ");
    scanf("%s",h1.Name);
    printf("The Name is %s\n\n",h1.Name);

    printf("Enter the House Name: ");
    scanf("%s",h1.House);
    printf("The House Name is %s\n\n",h1.House);

    printf("Enter the City Name: ");
    scanf("%s",h1.City);
    printf("The City Name is %s\n\n",h1.City);

    printf("Enter the State Name: ");
    scanf("%s",h1.State);
    printf("The State Name is %s\n\n",h1.State);

    printf("Enter the Pin Code: ");
    scanf("%s",h1.Pin);
    printf("The Pin code is %s\n",h1.Pin);

}