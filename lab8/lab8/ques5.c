#include <stdio.h>
enum Weekday { MON = 1, TUE, WED, THU, FRI, SAT, SUN };
int main() {
    int dayNumber;
    enum Weekday day;
 printf("Enter a number (1-7): ");
  scanf("%d", &dayNumber);
    if (dayNumber < 1 || dayNumber > 7) {
        printf("Invalid input! Please enter a number between 1 and 7.\n");
        return 0;
    }
    day = (enum Weekday)dayNumber;
    printf("Day: ");
    switch (day) {
        case MON: printf("Monday\n"); break;
        case TUE: printf("Tuesday\n"); break;
        case WED: printf("Wednesday\n"); break;
        case THU: printf("Thursday\n"); break;
        case FRI: printf("Friday\n"); break;
        case SAT: printf("Saturday\n"); break;
        case SUN: printf("Sunday\n"); break;
    }
    if (day == SAT || day == SUN)
        printf("It's a Weekend!\n");
    else
        printf("It's a Weekday.\n");

    return 0;
}