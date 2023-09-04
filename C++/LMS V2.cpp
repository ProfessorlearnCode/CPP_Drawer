#include<iostream>
#include<fstream>
#include<iomanip>
#include<string.h>
using namespace std;

class Library{
    private:
        int id;
        char name[100];
        char author[100];
        char catagory[100];
        int price;
        int pages;
    public:
        int get_id(){
            return id;
        }
        char* getname(){
            return name;
        }
        char* getauthor(){
            return author;
        }
        char* getcatagory(){
            return catagory;
        }
        int* getprice(){
            return price;
        }
    Library(){
        id=0;
        string(name,**);
        string(author,**);
        string(catagory,**);
        pages=0;
        price=0;
    }
    void getbook();
    void showbook();
    void listview();
    void header();
}l;
void Library::menu()
{
    system("cls");
    int choice;
    cout<<"\n\n\t\t-----------------------------------";
    cout<<"\n\n\t\t     Library Managament System     ";
    cout<<"\n\n\t\t-----------------------------------";
    cout<<"\n 1. Insert a New record";
    cout<<"\n 2. Search Record";
    cout<<"\n 3. Update Record";
    cout<<"\n 4. Delete Record";
    cout<<"\n 5. Show all Records";
    cout<<"\n 6. Exit";
    cout<<"\n\nInput Selection: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        /* code */
        break;
    case 6:
        exit(0);
        break;
    default:
        cout<<"Invalid Number Input";
        break;
    }

}


int main(){

    return 0;
}