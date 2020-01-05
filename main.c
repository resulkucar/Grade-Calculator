#include <stdio.h>
#include <stdlib.h>

/*
 * This is a average and letter grade calculator written by Resul Ucar
 * You can compile on a linux machine using (gcc gradecalc.c -o gradecalculator)
 * After compiling you can run the program by using (./gradecalculator)
 * IMPORTANT: make sure you have gcc installed before compiling
 * You can use (sudo apt install gcc) to install it and then run the command above
 * If you would like to make life easier when coding in C, I suggest you use JetBrain's CLion IDE, you can download CLion and the GNU compiler here: https://sourceforge.net/projects/mingw/ and https://www.jetbrains.com/clion/download/#section=windows
 */

//letter function receives the average from the grade function and gives back a letter grade to the user and returns the choice of the user to the main function
int letter(float average) {
    int cont =1;
    int no=2;
    int choice;

    if (average >= 90)
    {
        printf("grade is :A ");

    } else if (average >= 80)
    {
        printf("grade is :B");

    } else if (average >= 70)
    {
        printf("grade is :C");

    } else if (average >= 60)
    {
        printf("grade is :D");
    } else
    {
        printf("grade is :F");
    }

    printf("\nWould you like to calculate another grade? 1 = yes and 2 = no\n");
    scanf("%d", &choice);

    if (choice == cont)
    {
        return cont;
    } else if (choice == no)
    {
        return no;
    } else {
        exit(0);
    }
}

//grade function calculates the average of all grades entered and returns average as a decimal
float grade(int n) {
    float values[n];
    float sum = 0;
    int ctr = 1;

    for (int i = 0; i < n; ++i)
    {
        printf("Enter your grade for class %d :", ctr);
        scanf("%f", &values[i]);
        sum += values[i];
        ctr++;
    }
    float average = sum / n;
    printf("Your average is :%.2f\nAnd your letter ", average);
    return average;
}

//main function welcomes user, receives the number of classes user wants to input and loops until the user is finished with the program
int main() {
    int z = 1;

    while (z ==1 ) {
        int n;
        printf("Welcome to the grade calculator\n");
        printf("Please enter the number of classes you have\n");
        scanf("%d", &n);
        float average = grade(n);
        int x = letter(average);
        if ( x == 1)
        {
            z = 1;
        }
        else
        {
            exit(0);
        }
    }
}

