#include <stdio.h>

int LeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && LeapYear(year)) {
        return 29;
    } else {
        return daysInMonth[month - 1];
    }
}

void calculateAge(int d1, int m1, int y1, int d2, int m2, int y2, int d3, int m3, int y3) {

    if (d1 > d2)
        {
         d2 = d2 + getDaysInMonth(m2, y2);
         m2 = m2 - 1;
        }
      if (m1 > m2)
      {
         y2 = y2 - 1;
         m2  = m2 + 12;
      }
        y3=y2-y1;
        m3=m2-m1;
        d3=d2-d1;
        printf("\n\nYour Age: %d years, %d months, %d days\n\n", y3,m3,d3);
    }



int main() {
    int d1, d2, m1, m2, y1, y2, d3,m3,y3;

    printf("Enter your birth date (DD MM YYYY): ");
    scanf("%d %d %d", &d1, &m1, &y1);


    printf("Enter the current date (DD MM YYYY): ");
    scanf("%d %d %d", &d2, &m2, &y2);

    calculateAge(d1, m1, y1, d2, m2, y2, d3, m3, y3);

    return 0;
}
