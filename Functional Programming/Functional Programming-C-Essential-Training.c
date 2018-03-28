#include <stdio.h>

///Functional Programming

//Function prototypes definitions
void assessRoomCapacities(void);
void estimateWaitingVisitors(void);
void processData(void);
void generateReport(void);

//Global variables - values are known throughout the program.
int room1,room2,room3;
int visitors1,visitors2,visitors3;
int totalAvailableSeats, totalWaitingVisitors;

int main(void){
    assessRoomCapacities();
    estimateWaitingVisitors();
    processData();
    generateReport();

    initializeAccount();
    getBalance();
    //Perform first transaction
    askCustomer();
    updateAccount(amount);
    getBalance();
    //Perform second transaction
    askCustomer();
    updateAccount(amount);
    addGift(5.0);
    getBalance();
    //Perform third transaction
    askCustomer();
    updateAccount(amount);
    addGift(2.0);
    getBalance();
    thankYou();

    return 0;
}

//Functions are defined below

void assessRoomCapacities(){
    //Asks the user to provide the number of empty seats in each room
    printf("Enter seats left in room 1:");
    scanf("%d",&room1);
    printf("Enter seats left in room 2:");
    scanf("%d",&room2);
    printf("Enter seats left in room 3:");
    scanf("%d",&room3);

}

void estimateWaitingVisitors(){
    //Asks the user to provide the number of visitors waiting for each room
    printf("Enter the number of visitors waiting for room 1:");
    scanf("%d",&visitors1);
    printf("Enter the number of visitors waiting for room2:");
    scanf("%d",&visitors2);
    printf("Enter the number of visitors waiting for room3:");
    scanf("%d",&visitors3);
}

void processData(){
    totalAvailableSeats = room1 + room2 + room3;
    totalWaitingVisitors = visitors1 + visitors2 + visitors3;
}

void generateReport(){
    printf("Overall there are still seats available (1=Yes, 0=No): %d\n)",(totalAvailableSeats>totalWaitingVisitors));
    printf("Room 1 can accept more visitors(1=Yes,0=No): %d\n",(room1>visitors1));
    printf("Room 2 can accept more visitors(1=Yes,0=No): %d\n",(room2>visitors2));
    printf("Room 3 can accept more visitors(1=Yes,0=No): %d\n",(room3>visitors3));
    printf("On average, there are %.2f visitors waiting per room\n",((float)totalWaitingVisitors/3));
}

void initializeAccount(void){

}
