#include <stdio.h>

// Define a structure to store time components: hours, minutes, and seconds
struct time {
    int hour;
    int minutes;
    int seconds;
};

int main() {
    // Declare variables of type 'struct time' to hold start, stop, and difference times
    struct time start, stop, difference;

    // Prompt the user to enter the starting time (hours, minutes, and seconds)
    printf("Enter the STARTING Hours, Minutes, and Seconds: ");
    scanf("%d %d %d", &start.hour, &start.minutes, &start.seconds);

    // Prompt the user to enter the stopping time (hours, minutes, and seconds)
    printf("Enter the STOPPING Hours, Minutes, and Seconds: ");
    scanf("%d %d %d", &stop.hour, &stop.minutes, &stop.seconds);

    // Calculate the difference between stop time and start time
    difference.hour = stop.hour - start.hour;
    difference.minutes = stop.minutes - start.minutes;
    difference.seconds = stop.seconds - start.seconds;

    // Check if any of the differences are negative, indicating an invalid time input
    if (difference.hour < 0 || difference.minutes < 0 || difference.seconds < 0) {
        printf("<Invalid Entry> Stop Time Smaller Than Start Time");
    } else {
        // Print the calculated time difference
        printf("Time Difference: %d hours, %d minutes, %d seconds\n",
               difference.hour, difference.minutes, difference.seconds);

        return 0; // Return success
    }
}
