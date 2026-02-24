#include <iostream>
#include <string>
#include <stdlib.h>

#define MAXIMUM_SIZE 5
#define MAX_AUTHOR 5

using namespace std;

struct Book{
    int id;
    int publishedYear;
    float price;
    string isbn;
    string title;

    int authorCount;
    string author[MAX_AUTHOR];


};

void insertBookInfo(Book books[], int size, int countStep){
     for(int i = 0; i < size; i++){
        cout << "Book ID: ";
        cin >> books[i].id;

        cout << "Book ISBN: ";
        cin >> books[i].isbn;


        cin.ignore();
        cout << "Book Title: ";
        // cin >> books[i].title;
        getline(cin, books[i].title);

        cout << "Published year: ";
        cin >> books[i].publishedYear;

        cout << "Price: ";
        cin >> books[i].price;

        cout << "Number of Author: ";
        cin >> books[i].authorCount;
        cin.ignore(); // what is cin.ingore() :  ingored unessesary type of input from the back
        for(int j = 0; j < books[i].authorCount; j++){
            cout << "Author name: ";
            getline(cin, books[i].author[j]); //what is getline : allow  user input with space;
            // getline can be input with space: manut manut -> manut manut
        }
        break;
    }
}



void displayBookBy_isbn(Book books[],int size, string isbn, int countStep){
    //inp -> copyInfo-> tyisbn -> loopInfo -> compare -> dis

    for(int i=0; i < size; i++){
        if(isbn == books[i].isbn){
            cout << "Title: " << books[i].title << endl;
            cout << "Id: " << books[i].id << endl;
            cout << "ISBN: " << books[i].isbn << endl;

            for(int j=0; j<books[i].authorCount; j++){
                cout << "Author: " << books[i].author[j] << endl;
            }
            cout << "Published: " << books[i].publishedYear << endl;
            cout << "Price: " << books[i].price << "$ " << endl;
        }
    }
}

void displayAllBook(Book books[], int size){
    for(int i = 1; i < size; i++){
        cout << "Title: " << books[i].title << endl;
        cout << "Id: " << books[i].id << endl;

        cout << "ISBN: " << books[i].isbn << endl;
        for(int j=0; j<books[i].authorCount; j++){
            cout << "Author: " << books[i].author[j] << endl;
        }
        cout << "Published: " << books[i].publishedYear << endl;
        cout << "Price: " << books[i].price << "$ " << endl;
        
    
    }
}

int main(){
    Book books[MAXIMUM_SIZE];
    int countStep = 0;
    while (1)
    {
        cout << "(1) -> Add Books Information " << endl;
        cout << "(2) -> Add Diplay Book by ISBN " << endl;
        cout << "(3) -> Add Diplay All Book " << endl;
        cout << "(0) -> Exit " << endl;

        int feature;
        cin >> feature;

        if(feature == 1){
            insertBookInfo(books, MAXIMUM_SIZE,countStep);
            countStep+=1;
        }else if(feature == 2){
            string isbn;
            cout << "ISBN: ";
            cin >> isbn;
            displayBookBy_isbn(books, MAXIMUM_SIZE, isbn,countStep);
        }else if(feature == 3){
            displayAllBook(books,countStep);
        }else if(feature == 0){
            break;
        }   
    }
    
    return 0;
}

// debug

//1. new input will replace the old input when we add another book info, so that mean we can only have 1 book info
//2. if author number is greater than 1, it'll display author more than 1 times. i want only one author to display. Ex: Author: SEAN Manutnithya, Pruce Banner
//4. diplay all book info is also wrong of the debug number 1. , we have countStep for counting the information which we input.
//3. didn't handle any invalid input yet.