
#include <stdio.h>

#define TOTAL_SEATS 10

int main() {
    int seats[TOTAL_SEATS] = {0}; 
    int choice, seatNo, i;

    printf("=== Ticket Booking System ===\n");
    printf("Total seats available: %d\n", TOTAL_SEATS);

    do {
        printf("\n----- Menu -----\n");
        printf("1. Show seat status\n");
        printf("2. Book a seat\n");
        printf("3. Cancel a booking\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Seat status:\n");
                for (i = 0; i < TOTAL_SEATS; i++) {
                    printf("Seat %d: %s\n", i + 1, seats[i] ? "Booked" : "Available");
                }
                break;
            case 2:
                printf("Enter seat number to book (1-%d): ", TOTAL_SEATS);
                scanf("%d", &seatNo);
                if (seatNo >= 1 && seatNo <= TOTAL_SEATS) {
                    if (seats[seatNo - 1] == 0) {
                        seats[seatNo - 1] = 1;
                        printf("Seat %d booked successfully.\n", seatNo);
                    } else {
                        printf("Seat %d is already booked.\n", seatNo);
                    }
                } else {
                    printf("Invalid seat number.\n");
                }
                break;
            case 3:
                printf("Enter seat number to cancel (1-%d): ", TOTAL_SEATS);
                scanf("%d", &seatNo);
                if (seatNo >= 1 && seatNo <= TOTAL_SEATS) {
                    if (seats[seatNo - 1] == 1) {
                        seats[seatNo - 1] = 0;
                        printf("Booking for seat %d cancelled.\n", seatNo);
                    } else {
                        printf("Seat %d was not booked.\n", seatNo);
                    }
                } else {
                    printf("Invalid seat number.\n");
                }
                break;
            case 4:
                printf("Exiting ticket booking system.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
