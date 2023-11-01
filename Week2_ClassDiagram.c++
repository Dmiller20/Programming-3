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


int main()
{
    Document document;

    document.setAuthors("Dylan Miller");
    document.setDate("November 1");
    std::cout << "The author is: " << document.getAuthors() << std::endl;
    std::cout << "Published on: " << document.getDate() << std::endl;


    return 0;
}

