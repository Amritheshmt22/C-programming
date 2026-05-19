//------create a structure of books, book title , author name, price and edition.------ 
//------assign values to the members and display them. ------
//------write a program to read and print 2 book details using structure.------
#include <stdio.h>
#include <string.h>

struct books {
    char title[100];
    char author[100];
    float price;
    int edition;
};

int main(){
    struct books book1;
    book1.price = 100.0;
    book1.edition = 1;
    strcpy(book1.title, "The Great Gatsby");
    strcpy(book1.author, "F. Scott Fitzgerald");
    
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Price: %.2f\n", book1.price);
    printf("Edition: %d\n\n", book1.edition);


    struct books book2;
    book2.price = 200.0;
    book2.edition = 2;
    strcpy(book2.title, "Atomic Habits"); // fixed typo from Habbits
    strcpy(book2.author, "James Clear");
    
    printf("Title: %s\n", book2.title);
    printf("Author: %s\n", book2.author);
    printf("Price: %.2f\n", book2.price);
    printf("Edition: %d\n", book2.edition);
    
    return 0;
}
