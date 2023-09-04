#include <string>
#include <iostream>
using namespace std;

void exit();
void add_book();
void book_info();
void author_name();
void book_name();
void total();
void book_id();

class Library {
  public:                                   //public class members
    int id_no;
    string book_name;
    string author_name;
    int price;
    string flag;                            //Yes\NO option for flag
}L[100];                                    //Array to store entered data
int cont;

int main (){

    cout<<"\n\tLibrary Management System"<<endl;
    while (100)
    {
        cout<<"______________________________________"<<endl;
        cout<<"1. Add a new book"<<endl;
        cout<<"2. Display Book information"<<endl;
        cout<<"3. Search Book from a specified author"<<endl;
        cout<<"4. Search the title of specified book"<<endl;        
        cout<<"5. List of the count of books in the Library"<<endl;
        cout<<"6. Search with Book ID"<<endl;
        cout<<"7.Exit"<<endl;
        cout<<"______________________________________"<<endl;
        cout<<"Enter the option.no: ";
        int a;
        cin>>a;
        cout<<endl;
        switch (a)
        {
        case 1:
            add_book();
            break;
        case 2:
            book_info();
            break;
        case 3:
            author_name();
            break;
        case 4:
            book_name();
            break;
        case 5:
            total();
            break;
        case 6:
            book_id();
            break;
        case 7:
            cout<<"Thank you for using our Program \nYou have exited";
            exit (0);
            
            break;    
        default:
            cout<<"Invalid number input\n";
            break;
        }
    }
    return 0;
}
void add_book(){
    cout<<"\tAdding a new Book"<<endl<<endl;
    cout<<"Enter the name of a book: ";
    cin>>L[cont].book_name;
    cout<<"\nEnter the name of the Author: ";
    cin>>L[cont].author_name;
    cout<<"\nEnter id.no: ";
    cin>>L[cont].id_no;
    cout<<"\nEnter the price: $";
    cin>>L[cont].price;
    cout<<"Book issued (Y/N): ";
    cin>>L[cont].flag;
    cin.ignore();
    cont++;
    cout<<"\n\tNew book Inserted Successfully!!";
}

void book_info(){
    cout<<"\tDisplay Book Information"<<endl<<endl;
    for(int i=0; i<cont; i++)
    {
        cout<<"\nbook Id.no: "<<L[i].id_no<<endl;
        cout<<"book Name: "<<L[i].book_name<<endl;
        cout<<"book Author: "<<L[i].author_name<<endl;
        cout<<"book Price: "<<"$"<<L[i].price<<endl;
        cout<<"Issuance: "<<L[i].flag<<endl;
        cout<<"----------------------------------"<<endl;
    }
}
    
void author_name(){
    cout<<"\tDisplay Book Information with Author's Name"<<endl<<endl;
    string a;
    cout<<"Enter Author's Name: ";
    cin>>a;
    for(int i=0; i<cont; i++){
        if (a==L[i].author_name)
        {
            cout<<"\n\nbook Id.no: "<<L[i].id_no<<endl;
            cout<<"book Name: "<<L[i].book_name<<endl;
            cout<<"book Author: "<<L[i].author_name<<endl;
            cout<<"book Price: "<<"$"<<L[i].price<<endl;
            cout<<"Issuance: "<<L[i].flag<<endl;
            cout<<"----------------------------------"<<endl;
        }
        
    }
}

void book_name(){
    cout<<"\tDisplay a specific Book Information"<<endl<<endl;
    string a;
    cout<<"Enter Author's Name: ";
    cin>>a;
    for(int i=0; i<cont; i++){
        if (a==L[i].book_name)
        {
            cout<<"\n\nbook Id.no: "<<L[i].id_no<<endl;
            cout<<"book Name: "<<L[i].book_name<<endl;
            cout<<"book Author: "<<L[i].author_name<<endl;
            cout<<"book Price: "<<"$"<<L[i].price<<endl;
            cout<<"Issuance: "<<L[i].flag<<endl;
            cout<<"----------------------------------"<<endl;
        }
        
    }
}

void total(){
    cout<<cont;
}

void book_id(){
    cout<<"\tDisplay Book Information with book id"<<endl<<endl;
    int a;
    cout<<"Enter Book's id: ";
    cin>>a;
    for(int i=0; i<cont; i++){
        if (a==L[i].id_no)
        {
            cout<<"\n\nbook Id.no: "<<L[i].id_no<<endl;
            cout<<"book Name: "<<L[i].book_name<<endl;
            cout<<"book Author: "<<L[i].author_name<<endl;
            cout<<"book Price: "<<"$"<<L[i].price<<endl;
            cout<<"Issuance: "<<L[i].flag<<endl;
            cout<<"----------------------------------"<<endl;
        }
        
    }
}