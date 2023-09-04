#include<iostream>
#include<conio.h>
using namespace std;

class Library{
    private:
        struct Node
        {
            int id;
            string book_name, author_name, publisher;
            Node *next_add;
        };

    public:
        Node *head = NULL;
        void menu();
        void insert();    
};
void Library::menu(){
    p:
    system("cls");
    int choice;
    cout<<"\n\n\t\t-----------------------------------";
    cout<<"\n\n\t\t-----Library Managament System-----";
    cout<<"\n\n\t\t-----------------------------------";
    cout<<"\n 1. Insert a New record";
    cout<<"\n 2. Search Record";
    cout<<"\n 3. Update Record";
    cout<<"\n 4. Delete Record";
    cout<<"\n 5. Show all Records";
    cout<<"\n 6. Exit";
    cout<<"\n\nInput Selection";
    cin>>choice;

    switch (choice)
    {
    case 1:
        insert;
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
        /* code */
        break;
    default:
        cout<<"Invalid Number Input";
        break;
    }

}

int main(){
    Library obj;
    obj.menu();
    return 0;
}