// A structure (struct) is a user-defined data type that allows you to combine different types of variables into a single unit.
#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    float marks;
    char name[50];
};

// struct books                {
//     char title[100];
//     char author[100];
//     int book_id;
// };

// int main(){
//     struct books book1;
//     book1.book_id = 1;
//     strcpy(book1.title, "The Great Gatsby");
//     strcpy(book1.author, "F. Scott Fitzgerald");
    
//     printf("Book ID: %d\n", book1.book_id);
//     printf("Title: %s\n", book1.title);
//     printf("Author: %s\n", book1.author);
//     return 0;
// }