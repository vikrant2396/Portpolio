# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

int main(){

    //Simple interset program
    int principal, rate, time, interest;

    printf("Enter the principal: ");
    scanf("%d", &principal);

    printf("Enter the rate: ");
    scanf("%d", &rate);

    printf("Enter the time: ");
    scanf("%d", &time);

    interest = (principal * rate * time) / 100;
    printf("The Simple interest is %d", interest);

    return 0;

}
