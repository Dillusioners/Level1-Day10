#include<stdio.h>
#include<Windows.h>

//Displaying available movies
void display()
{
    printf("#########################\n");
    printf("     CURRENT MOVIES      \n");
    printf("#########################\n");
    printf("1.Super Mario\n2.John Wick\n3.Interstellar\n4.FNAF Movie\nEnter your choice => ");
}

void SuperMario()
{
    //SuperMario movie option 1
    int ticket;
    printf("Welcome to the Super Mario movie sir !!\n");
    printf("What ticket do you want ?\n1.Premium Ticket\n2.Normal Ticket\n");
    scanf("%d",&ticket);
    //Switching over ticket type
    switch(ticket)
    {
        case 1:
            printf("Have your tickets, Your total will be Rs. 450\n");
            break;
        case 2:
            printf("Have your tickets, Your total will be Rs. 250\n");
            break;
        default:
            printf("Get out. No tickets for you!\n");
    }
    
}

void JohnWick()
{
    //Movie 2 john wick
    int ticket;
    printf("Welcome to the John Wick movie sir !!\n");
    printf("What ticket do you want ?\n1.Premium Ticket\n2.Normal Ticket\n");
    scanf("%d",&ticket);
    //again same thing
    switch(ticket)
    {
        case 1:
            printf("Have your tickets, Your total will be Rs. 550\n");
            break;
        case 2:
            printf("Have your tickets, Your total will be Rs. 450\n");
            break;
        default:
            printf("Get out. No tickets for you!\n");
    }
}

void Interstellar()
{
    //Movie 3
    int ticket;
    printf("Welcome to the Interstellar sir !!\n");
    printf("What ticket do you want ?\n1.Premium Ticket\n2.Normal Ticket\n");
    scanf("%d",&ticket);
    switch(ticket)
    {
        case 1:
            printf("Have your tickets, Your total will be Rs. 950\n");
            break;
        case 2:
            printf("Have your tickets, Your total will be Rs. 650\n");
            break;
        default:
            printf("Get out. No tickets for you!\n");
    }
}

void FNAF()
{
    //Movie 4
    int ticket;
    printf("Welcome to the FNAF movie sir !!\n");
    printf("What ticket do you want ?\n1.Premium Ticket\n2.Normal Ticket\n");
    scanf("%d",&ticket);
    switch(ticket)
    {
        case 1:
            printf("Have your tickets, Your total will be Rs. 350\n");
            break;
        case 2:
            printf("Have your tickets, Your total will be Rs. 150\n");
            break;
        default:
            printf("Get out. No tickets for you!\n");
    }
}


int main(int argc, char const *argv[])
{
    int choice;
    display();
    //Asking for users choice
    scanf("%d",&choice);
    switch(choice)
    {
        //Switching over given movie number
        case 1:
            SuperMario();
            break;
        case 2:
            JohnWick();
            break;
        case 3:
            Interstellar();
            break;
        case 4:
            FNAF();
            break;
        //If number not available movie not available
        default:
            printf("Your desired movie isn't airing right now. Come back later!\n");
    }      
    printf("MOVIE STARTS.....\n");
    Sleep(6000);
    printf("MOVIE About to end...\n");
    Sleep(4000);
    printf("MOVIE HAS FINISHED!!!\nGOODBYE!!!\n");
    //Code ends
    return 0;
}
