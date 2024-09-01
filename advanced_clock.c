#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

void clearScreen() {
    // Clear the terminal screen
    printf("\033[H\033[J");
}

void printWelcomeMessage() {
    printf("======================================\n");
    printf("      Welcome to the Digital Clock    \n");
    printf("======================================\n\n");
    printf("Press Ctrl+C to exit the program.\n\n");
}

void displayClock() {
    while (1) {
        // Get the current time
        time_t now;
        time(&now);
        
        // Convert it to local time
        struct tm *local = localtime(&now);

        // Determine AM or PM
        char *am_pm = local->tm_hour >= 12 ? "PM" : "AM";

        // Convert to 12-hour format
        int hour = local->tm_hour % 12;
        if (hour == 0) hour = 12; // Handle midnight and noon
        
        // Clear the screen for a clean update
        clearScreen();
        
        // Print the welcome message
        printWelcomeMessage();
        
        // Print the date and time in a formatted way
        printf("Current Date and Time:\n");
        printf("======================================\n");
        printf("  Date: %02d-%02d-%04d\n", 
               local->tm_mday, local->tm_mon + 1, local->tm_year + 1900);
        printf("  Time: %02d:%02d:%02d %s\n", 
               hour, local->tm_min, local->tm_sec, am_pm);
        printf("======================================\n");
        
        // Sleep for 1 second
        sleep(1);
    }
}

int main() {
    // Call the function to display the clock
    displayClock();
    
    return 0;
}
