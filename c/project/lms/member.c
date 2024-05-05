#include<stdio.h>
#include "common.c"


#define MEMBER_NAME "member.dat"

typedef struct member
{
    int id;
    char name[20];
    char gender[10];
    char dob[15];
    char address[50];
    char contact[15];
    char email[20];

}MEMBER;

void membermenu()
{
    int exit = 0;
    while(1)
    {
        int ch;
        printf("MEMBER MENU\n");
        printline(20);
        printf("1. New member\n");
        printf("2. Display All member\n");
        printf("3. Display Member by Id\n");
        printf("4. Edit Member\n");
        printf("5. Delete Member\n");
        printline(20);
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch(ch)
        {
         case 0:
              exit = 1;
              break;
         case 1:
              newmember();
              break;
         case 3:
              int id;
              printline(30);
              printf("Enter member id: ");
              scanf("%d", &id);
              getmember(id);
              printline(30);
              break;
          default:
            printf("\n\nInvalid Option!!\n\n");
            break;          

        }
        if(exit == 1)
        break;
    }
}

void newmember()
{
    MEMBER member;
    FILE *fp;
    printf("Enter Id: ");
    scanf("%d%*c",&member.id);
    printf("Enter name: ");
    scanf("%[^\n]%*c", member.name);
    printf("Enter Gender: ");
    scanf("%[^\n]%*c", member.gender);
    printf("Enter DOB: ");
    scanf("%[^\n]%*c", member.dob);
    printf("Enter Address: ");
    scanf("%[^\n]%*c", member.address);
    printf("Enter Contact No. ");
    scanf("%[^\n]%*c", member.contact);
    printf("Enter Email: ");
    scanf("%[^\n]%*c", member.email);
    fp = fopen(MEMBER_NAME, "a");
    fprintf(fp, "%d,%s,%s,%s,%s,%s,%s\n",member.id, member.name, member.gender, member.dob, member.address, member.contact, member.email);
    fclose(fp);
    printf("\n Member record saved!!\n\n");
}
void getmembers()
{
    MEMBER member;
    FILE *fp;
    fp = fopen(MEMBER_NAME, "r");
    printline(150);
    printf("%-10s%-30s%-10s%-10s%-30s%10s%-10s\n","Member Id", "Member Name", "Member Gender", "Member DOB", "Member Adderss", "Member Contact", "Member email");
    printline(150);
    while((fscanf(fp, "%d,%[^,],%[^,],%[^,],%[^,],%[^,],%[^,]\n",&member.id,member.name, member.gender, member.dob, member.address, member.contact, member.email) != EOF));
    {
        
        printf("%-10d%-30s%-10s%-10s%-30s%10s%-10s\n",member.id, member.name, member.gender, member.dob, member.address, member.contact, member.email);
    }
    printline(150);
    fclose(fp);
}
void getmember(int id)
{
    MEMBER member;
    int found = 0;
    FILE *fp;
    fp = fopen(MEMBER_NAME, "r");
    while (( fscanf(fp, "%d,%[^,],%[^,],%[^,],%[^,],%[^,],%[^,]\n",&member.id,member.name, member.gender, member.dob, member.address, member.contact, member.email) != EOF));
    {
        fscanf(fp, "%d,%[^,],%[^,],%[^,],%[^,],%[^,],%[^,]\n",&member.id,member.name, member.gender, member.dob, member.address, member.contact, member.email);
        if (member.id == id)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("Id: %d\n", member.id);
        printf("Name: %s\n", member.name);
        printf("Gender: %s\n", member.gender);
        printf("DOB: %s\n",member.dob);
        printf("Address: %s\n", member.address);
        printf("Contact: %s\n", member.contact);
        printf("Email: %s\n", member.email);
    }
    else
    {
        printf("\n Member not found!!\n\n");
    }
    fclose(fp);
    
}