#include <stdio.h>
#include <time.h>
struct DateOfBirth {
    int day;
    int month;
    int year;
};

int calculateAge(struct DateOfBirth dob) {
    time_t now;
    struct tm *local_time;
    time(&now);
    local_time = localtime(&now);

    int currentYear = local_time->tm_year + 1900;
    int currentMonth = local_time->tm_mon + 1;
    int currentDay = local_time->tm_mday;

    int age = currentYear - dob.year;
    if (currentMonth < dob.month || (currentMonth == dob.month && currentDay < dob.day)) {
        age--;
    }

    return age;
}

int main() {
    struct DateOfBirth personDOB;
    printf("Enter the date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &personDOB.day, &personDOB.month, &personDOB.year);
    int age = calculateAge(personDOB);
    printf("The person's age is: %d\n", age);

    return 0;
}
