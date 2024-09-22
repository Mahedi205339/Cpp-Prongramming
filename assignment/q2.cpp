#include<iostream>

// Question 2

using namespace std;
class Book {
private:
    string title,author;
    int pages;
public:
    void assignBook(string name,string athr,int pgs){
        title=name;
        author=athr;
        pages=pgs;
    }
    void displayBook(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: " <<author<<endl;
        cout<<"Pages: "<<pages<<endl;
        cout<<endl;
    }
    friend void compareBook(const Book *book1, const Book *book2);
};
void compareBook(const Book *book1, const Book *book2){
    if(book1->pages>book2->pages)
    {
        cout<<"\""<<book1->title<<"\""<<"has more pages."<<endl;
    }
    else if(book2->pages>book1->pages)
    {
        cout<<"\""<<book2->title<<"\""<<"has more pages."<<endl;
    }
}
int main() {
    Book book1,book2;
    book1.assignBook("Clean Code", "Robert C. Martin", 464);
    book2.assignBook("Refactoring", "Martin Fowler", 448);
    book1.displayBook();
    book2.displayBook();
    compareBook(&book1,&book2);
    return 0;
}
