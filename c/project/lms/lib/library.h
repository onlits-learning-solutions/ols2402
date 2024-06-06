// -------------------------Common ----------------------------------------
#define BOOK_FILE "book.dat"
#define MEMBER_FILE "member.dat"

void printline(int l);

// --------------------- Book Module ---------------------------------------
typedef struct book
{
    int id;
    char title[50];
    char author[50];
    char edition[20];
    char publication[50];
    int pages;
    char isbn[14];
    float price;
} BOOK;

typedef struct node
{
    BOOK data;
    struct node *next;
} NODE;

void bookmenu();
void newbook();
NODE *getbooks();
void displaybooks();
void getbook(int id);

//---------------------- Member Module

typedef struct member
{
    int id;
    char name[50];
    char gender[10];
    char dob[15];
    char address[50];
    char contact[15];
    char email[20];
} MEMBER;

void membermenu();
void newmember();
void getmembers();
void getmember(int id);