#include <stdio.h>

struct country {
    char state_name[100]; // Changed to a character array to hold the state name
    int number_of_districts;
    int total_population;
};

int main() {
    struct country s1;

    printf("Enter the name of the state: ");
    scanf("%s", s1.state_name); // No need for & with array name

    printf("Enter the number of districts: ");
    scanf("%d", &s1.number_of_districts);

    printf("Enter the total population: ");
    scanf("%d", &s1.total_population);

    printf("State name: %s\n", s1.state_name);
    printf("Number of districts: %d\n", s1.number_of_districts);
    printf("Total population: %d\n", s1.total_population);

    return 0;
}