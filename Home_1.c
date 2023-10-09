/**
 * File:        Homework.c
 * Author:      Liisi Bergmann
 * Created:     03.10.2023
 * Last edit:   24.09.2023
 *
 * Description:  
 *              
 */

#include <stdio.h>
#include <math.h>



int main(void) {

    while (1)
    {
        calculate();
        int exit;
        printf("Do you want to exit? 1 - Yes, 0 - No");
        scanf("%d", &exit);
        if (exit == 1)
        {
            break;
        }   
    }
    

    return 0;
}

void calculate(){
    int choice;
    int N;
    double A;
    double YMin;
    double H;
    double x;
    double y;

    printf("Do you want to input default values? Press 1: \n");
    printf("Do you want to use preconfigured set? Press 2: \n");
    scanf("Your choice: %d", &choice);

    switch (choice)
    {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        
        default:
            printf("Incorect choice, try again! ", choice);
            break;
    }

    double x = A;
    int countNumber = 0;
    while (countNumber < 20 && x <= A + N * H)
    {
        if (y >= YMin)
        {
            printf("%.2lf\t%.2lf\n", x, y);
            countNumber ++;
        }
        else
        {
            printf("%.2lf\t puudub \n", x);
        }
        
        x += H;
    }
} 

double function(double x, double y){
    y = ((pow(x, 2) + (20 * x) - 14) / sqrt(x)) - ((1 + x) / x);
    return y;
}
