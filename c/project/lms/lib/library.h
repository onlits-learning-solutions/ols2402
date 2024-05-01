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

void bookmenu();
void newbook();
void getbooks();
void getbook(int id);

//---------------------- Member Module
void membermenu();
void newmember();
void getmembers();
void getmember(int id);