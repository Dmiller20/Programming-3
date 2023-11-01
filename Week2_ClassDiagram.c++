#include <iostream>
#include <string>

class Document
{
 public:

    std::string getDate()
    {
        
        return this->date;
    }
  
   std::string getAuthors()
    {

       return this->authors;
    }

    void setDate(std::string _date)
    {

        this->date = _date;
    }

    void setAuthors(std::string _authors)
    {

        this->authors = _authors;
    }

 private:
    std::string authors;
    std::string date;

};

class Book : public Document
{

 public:
    void setTitle(std::string _title)
    {

        this->title = _title;
    }

    std::string getTitle()
    {

        return this->title;
    }

 private:
    std::string title;
};


class Email : public Document
{
 public:
    void setSubject(std::string _subject)
    {

        this->subject = _subject;
    }

    std::string getSubject()
    {

        return this->subject;
    }

    void setTo(std::string _to)
    {

        this->to = _to;
    }

    std::string getTo()
    {

        return this->to;
    }

 private:
    std::string subject;
    std::string to;

};


int main()
{
    Document document;

    document.setAuthors("Dylan Miller");
    document.setDate("November 1");
    std::cout << "The author is: " << document.getAuthors() << std::endl;
    std::cout << "Published on: " << document.getDate() << std::endl;

    Book book;
    book.setAuthors("Dylan Miller");
    book.setTitle("Book Name");

    std::cout << "Book: " << book.getAuthors() << std::endl;
    std::cout << "Book Name: " << book.getTitle() << std::endl;

    Email email;
    email.setDate("November 1");
    email.setSubject("Email about something");

    std::cout << "Email Date: " << email.getDate() << std::endl;
    std::cout << "Email Subject: " << email.getSubject() << std::endl;


    return 0;
}
