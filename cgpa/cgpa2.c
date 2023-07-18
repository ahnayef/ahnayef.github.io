#include <stdio.h>
int main()
{
    float tCg[50], lCg[50], totCR[50];
    float tSum = 0, lSum = 0, totCRsum = 0, totCG, cgpa;
    int n1, n2;
    printf("Enter Your Theory Course Number: "); /// Theory course er koyta bolte hobe
    scanf("%d", &n1);

    printf("Enter Your Theory Course Result in Grade Point : "); /// like A+ = 4.00

    for (int i = 0; i < n1; i++)
    {
        scanf("%f", &tCg[i]);
    }

    for (int i = 0; i < n1; i++)
    {

        tSum = tSum + (tCg[i] * 3);
    }

    printf("Enter Your Lab Course Number: ");
    scanf("%d", &n2);

    printf("Enter Your LAB Course Result in Grade Point : ");

    for (int i = 0; i < n2; i++)
    {
        scanf("%f", &lCg[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        lSum = lSum + (lCg[i] * 1.5);
    }

    totCG = tSum + lSum;



    printf("Enter Your  Credit of Course one by one \n for Theory 3.0 & For Lab 1.5  : ");

    int n3 = n1 + n2;

    for (int i = 0; i < n3; i++)
    {
        scanf("%f", &totCR[i]);
    }

    for (int i = 0; i < n3; i++)
    {

        totCRsum = totCRsum + totCR[i];
    }
    cgpa = totCG / totCRsum;
    printf("Your Total CGPA is ::: %.2f", cgpa);
}
