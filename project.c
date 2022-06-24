// project for cse 106
// Md.Mahmudul Hasan
// id:212902028
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int vote = 0, vote1 = 0, vote2 = 0, vote3 = 0, vote4 = 0;
int hasan, hasib, sakib, asrafull, miraj;
struct vote
{
    int id;
    int birth;
    char name[100];
    struct vote *next;
} *head = NULL;
void login(int birth, int id)
{
    struct vote *newnode;
    newnode = (struct vote *)malloc(sizeof(struct vote));
    printf("enter your name:");
    scanf("%s", &newnode->name);
    newnode->id = id;
    newnode->next = NULL;
    newnode->birth = birth;
    newnode->next = NULL;
    newnode->name;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void delateid()
{
    int idd, agee;
    char namee[100];
    printf("\nENTER YOUR AGE: ");
    scanf("%d", &agee);
    printf("\nENTER YOUR ID: ");
    scanf("%d", &idd);
    printf("\nENTER YOUR NAME: ");
    scanf("%s", &namee);
    if (head == NULL)
    {
        printf("list is empty\n");
    }

    else
    {
        struct vote *temp, *temp1;
        temp = head;
        while ((temp->birth != agee) && (temp->id != idd) && (temp->name != namee))
        {
            temp1 = temp;
            temp = temp->next;
        }
        temp1->next = temp->next;
        free(temp);
    }
}

void c_userid()
{
    char namee[100];
    int idd;
    printf("ENTER YOUR name: ");
    scanf("%S", &namee);
    printf("ENTER YOUR ID: ");
    scanf("%d", &idd);
    if (head == NULL)
    {
        printf("sakib boro vai\n");
    }
    else
    {
        struct vote *temp;
        temp = head;
        while ((temp->id != idd) && (temp->name != namee))
        {
            temp = temp->next;
        }
        printf("\nName=  %s", temp->name);
        printf("\nID= %d", temp->id);
    }
}
void votecount()
{

    printf("\n\n\n\t\t\t\t\t\t\tBIRD\tBOAT\tFISH\tFLOWER\tBALL\n");

    printf("\t\t\t\t\t\t\t--------------------------------------");
    printf("\n\t\t\t\t\t \t\t%d\t %d\t %d\t %d\t %d\n", vote, vote1, vote2, vote3, vote4);
    adminlogin();
}

void result()
{
    int n;

    if (vote > vote1 && vote > vote2 && vote > vote3 && vote && vote4)
    {
        printf("\nBIRD: %d", vote);
        printf("\nHasan: %d", vote);
        printf("\nenter your any key");
        scanf("%d", &n);
        system("cls");
        while (1)
        {

            printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tCongratulations on your well-deserved success.\n");
            system("color 2");
            system("color 3");
            system("color 4");
            system("color 5");
            system("color 6");
            system("cls");
        }
    }
    else if (vote1 > vote2 && vote1 > vote2 && vote1 > vote4)
    {
        printf("\nBOAT: %d", vote1);
        printf("\nHasib: %d", vote1);
        printf("\nenter your any key");
        scanf("%d", &n);
        system("cls");
        while (1)
        {

            printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tCongratulations on your well-deserved success.\n");
            system("color 1");
            system("color 2");
            system("color 3");
            system("color 4");
            system("color 5");
            system("color 6");
            system("cls");
        }
    }
    else if (vote2 > vote3 && vote2 > vote3)
    {
        printf("\nFISH: %d", vote2);
        printf("\nSakib: %d", vote2);
        printf("\nenter your any key");
        scanf("%d", &n);
        system("cls");
        while (1)
        {

            printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations on your well-deserved success.\n");
            system("color 1");
            system("color 2");
            system("color 3");
            system("color 4");
            system("color 5");
            system("color 6");
            system("cls");
        }
    }
    else if (vote3 > vote4)
    {
        printf("\nFLOWER: %d", vote3);
        printf("\nAsraful: %d", vote3);
        printf("\nenter your any key");
        scanf("%d", &n);
        system("cls");
        while (1)
        {

            printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations on your well-deserved success.\n");
            system("color 1");
            system("color 2");
            system("color 3");
            system("color 4");
            system("color 5");
            system("color 6");
            system("cls");
        }
    }
    else
    {
        printf("\nBALL: %d", vote4);
        printf("\nMiraj: %d", vote4);
        printf("\nenter your any key");
        scanf("%d", &n);
        system("cls");
        while (1)
        {

            printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations on your well-deserved success.\n");
            system("color 1");

            system("color 2");

            system("color 3");

            system("color 4");

            system("color 5");
            system("color 6");
            system("cls");
        }
    }
}
void mpname()

{
    hasan = vote;
    hasib = vote1;
    sakib = vote2;
    asrafull = vote3;
    miraj = vote4;
    printf("\n\n\n\t\t\t\t\t\t\tBIRD\tBOAT\tFISH\tFLOWER\tBALL\n");
    printf("\t\t\t\t\t\t\t--------------------------------------\n");
    printf("\t\t\t\t\t\t\tHASAN\tHASIB\tSAKIB\tASRAFUL\tMIRAJ\n");
    printf("\t\t\t\t\t\t\t--------------------------------------");
    printf("\n\t\t\t\t\t \t\t%d\t %d\t %d\t %d\t %d\n", hasan, hasib, sakib, asrafull, miraj);
    adminlogin();
}
void adminlogin()
{

    int choice, ch;
main:
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t    ADMIN PANNEL ");
    printf("\n\t\t\t\t\t\t\t=================================================\n");
    printf("\t\t\t\t\t\t         1.CHECK USER ID\t\t   2.DELATE ID\n\n\t\t\t\t\t\t         3.VOTING INFORMATION\t\t   4.DISPLAY\n");
    printf("\t\t\t\t\t\t\t=================================================\n");
    printf("\n\t\t\t\t\t\t\t\t ENTER YOUR ANY KEY---MAIN MENUE ");

    printf("\n\t\t\t\t\t\t\t\t\tenter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        c_userid();
        goto main;
        break;
    }

    case 2:
    {
        
        delateid();
        goto main;
        break;
    }

    case 3:
    {
    voteing:
        system("cls");
        printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   VOTING RESULT ");
        printf("\n\t\t\t\t\t\t\t=================================================\n");
        printf("\t\t\t\t\t\t\t1.vote icon\t\t\t  2.voter mp name\n\t\t\t\t\t\t\t3.vote count\t\t\t  4.result\n");
        printf("\t\t\t\t\t\t\t=================================================\n");
        printf("\n \t\t\t\t\t\t\t\t ENTER YOUR CHOICE: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            voteiconn();
            goto voteing;
            break;
        case 2:
            mpname();
            sleep("3");
            goto voteing;
            break;
        case 3:
            votecount();
            sleep("3");
            printf(" wait 3 sec..........");
            goto voteing;
            break;
        case 4:

            result();

            break;
        default:
            goto voteing;
            break;
        }
    case 4:
        display();
        goto main;
        break;
    default:
        main();
        break;
    }
    }
}

void voteiconn()
{
    printf("\n\n\n\n\t\t\t\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t\t\t\tBIRD\tBOAT\tFISH\tFLOWER\tBALL\n");
    printf("\t\t\t\t\t\t\t-----------------------------------\n");
    adminlogin();
}
void display()
{
    if (head == NULL)
    {

        printf("empty");
    }
    else
    {
        int n = 1;
        struct vote *temp = head;
        while (temp->next != NULL)
        {
            printf("%d: ", n);
            n++;
            printf("id= %d\t", temp->id);
            printf("age= %d\t ", temp->birth);
            printf("name= %s\n ", temp->name);
            temp = temp->next;
        }

        printf("%d: ", n);
        printf("id= %d\t", temp->id);
        printf("age= %d\t ", temp->birth);
        printf("name= %s\n ", temp->name);
    }
}
void userlogin()
{
    int n, count = 0;
    char s[20];
    printf("enter registration id: ");
    scanf("%d", &n);
    printf("enter your registrator name: ");
    scanf("%s", &s);
    if (head == NULL)
    {
        printf("no id found");
    }
    else
    {
        struct vote *temp = head;
        while ((temp->id != n) && (temp->name != s))
        {

            temp = temp->next;
        }
        voteicon();
    }
}

void voteicon()
{
    int choice;
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t---------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t1.BIRD\t\t  2.BOAT\t\t  \n\t\t\t\t\t\t\t\t\t3.FISH\t\t  4.FLOWER\n\t\t\t\t\t\t\t\t\t\t  5.BALL\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------\n");
    printf("\tENTER YOUR VOTE: ");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        vote++;

        break;
    case 2:
        vote1++;

        break;
    case 3:
        vote2++;

        break;

    case 4:
        vote3++;
        
        break;

    case 5:

        vote4++;

        break;
    }
}

void main()
{
    int f;
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t=================================================\n");
    printf("\t\t\t\t\t\t\t========= Green University Of Bangladesh ========\n");
    system("color 2");

    printf("\t\t\t\t\t\t\t=================================================\n");

    printf("\n\t\t\t\t\t\t\t\t     PLEASE ENTER ANY KEY\n\n\n\n\n\n\n\n\n\n\n");
    scanf("%d", &f);
    system("cls");
    int choice, id, age, idd, pass;
    char name[100];

main:

    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t====== Welcome to Electronic Voting System ======\n");
    printf("\t\t\t\t\t\t\t=================================================\n");
    printf("\t\t\t\t\t\t         1.admin login\t\t\t   2.user login\n\n\t\t\t\t\t\t         3.registration\t\t\t   4.Exit\n");
    printf("\t\t\t\t\t\t\t=================================================\n");
    printf("\n\t\t\t\t\t\t\t             ENTER YOUR CHOICE: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t   ADMIN LOGIN");
        printf("\n\t\t\t\t\t\t\t=================================================");
        printf("\n\t\t\t\t\t\t\t        enter your id: ");
        scanf("%d", &idd);
        printf("\t\t\t\t\t\t\t        enter your pass: ");
        scanf("%d", &pass);
        printf("\n\t\t\t\t\t\t\t=================================================");
        if (idd == 212902028 && pass == 2028)
        {
            system("cls");
            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t  SUCCESSFULLY LOGIN ");
            scanf("%d", &f);
            system("cls");
            adminlogin();
            goto main;
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t        YOUT PASS OR ID IS WRONG\n\n");
            printf("\t\t\t\t\t\t\t\t        PLEASE WAIT 3 SEC......");
            sleep(3);
            system("cls");
        }
        goto main;
        break;
    case 2:
        userlogin();
        goto main;
        break;
    case 3:
        printf("enter your age:");
        scanf("%d", &age);
        if (age >= 18)
        {
            printf("enter your id");
            scanf("%d", &id);
            login(age, id);
        }
        else
        {
            printf("\t\t\t\t\t\t\t\t        YOUR ARE NOT OLD YET\n");
            printf("wait 3 sec...?");
            sleep(3);
        }
        system("cls");
        goto main;
        break;

    case 4:
        exit(0);
        goto main;
        break;
    }
}
