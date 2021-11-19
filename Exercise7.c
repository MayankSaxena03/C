/*
    You manage a travel agency and you want your n drivers to input their following details:
    1. Name
    2. Driving License No
    3. Route 
    4. Distance Travelled
    Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

    Your program should print details of the drivers in a pretty format.
*/

#include <stdio.h>

struct Driver
{
    char name[30];
    char license_no[30];
    char route[30];
    int distance;
};

int main()
{
    int n;
    struct Driver driver[10];
    printf("Enter number of drivers : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Name of Driver %d : ", i + 1);
        scanf(" %s", &driver[i].name);
        printf("Enter Driving License Number of Driver %d : ", i + 1);
        scanf(" %s", &driver[i].license_no);
        printf("Enter route of Driver %d : ", i + 1);
        scanf(" %s", &driver[i].route);
        printf("Enter Distance Travelled by Driver %d : ", i + 1);
        scanf("%d", &driver[i].distance);
    }

    printf("\n----------------------------------\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Details of Driver %d", i + 1);
        printf("\n\tName : %s", driver[i].name);
        printf("\n\tDriving License Number : %s", driver[i].license_no);
        printf("\n\tRoute : %s", driver[i].route);
        printf("\n\tDistance Tavelled : %d", driver[i].distance);
        printf("\n\n");
    }

    return 0;
}