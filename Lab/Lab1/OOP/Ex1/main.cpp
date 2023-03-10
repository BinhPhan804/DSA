#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

class Book
{
private:
    char* title;
    char* authors;
    int publishingYear;

public:
    Book()
    {
        title = NULL;
        authors = NULL;
        publishingYear = 0;
    }

    Book(const char* title, const char* authors, int publishingYear)
    {
        this->title = (char*) title;
    }

    Book(const Book &book)
    {
        strcpy(this->title, book.title);
        strcpy(this->authors, book.authors);
        this->publishingYear = book.publishingYear;
    }
    
    // void setTitle(const char* title)
    // {
    //     strcpy(this->title, title);
    // }

    // void setAuthors(const char* authors)
    // {
    //     strcpy(this->authors, authors);
    // }

    // void setPublishingYear(int publishingYear)
    // {
    //     this->publishingYear = publishingYear;
    // }

    // char* getTitle() const
    // {
    //     return title;
    // }

    // char* getAuthors() const
    // {
    //     return authors;
    // }

    // int getPublishingYear() const
    // {
    //     return publishingYear;
    // }

    ~Book()
    {
        delete title;
        delete authors;
    }

    void printBook(){
        printf("%s\n%s\n%d", this->title, this->authors, this->publishingYear);
    }

    friend bool checkAuthor(Book book, const char* author)
    {
        char* res = strstr(book.authors, author);
        if (res == NULL)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

// class Printer
// {
// public:
//     static void printBook(const Book book)
//     {
        
//     }
// };

int main()
{
    Book book1("Giai tich 1","Nguyen Dinh Huy, Nguyen Thi Xuan Anh",2000);
    book1.printBook();
}