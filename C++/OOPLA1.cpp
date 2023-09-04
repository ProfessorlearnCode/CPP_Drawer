#include <iostream>
using namespace std;

class software_prod {
private:
    string name;
    string version;

public:
    void inputInfo(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Version: ";
        cin>>version;
    }

    void displayInfo() {
        cout << "\nName is " << name << endl;
        cout << "Version is " << version << endl;
    }
};

class Financesoftware_prod : public software_prod {
private:
    int numUsers;

public:
    void inputInfo(){
        software_prod::inputInfo();
        cout<<"Enter the number of users: ";
        cin>>numUsers;
    }
   
    void displayInfo() {
        software_prod::displayInfo();
        cout << "Number of Users: " << numUsers << endl;
    }
};

class Healthcaresoftware_prod : public software_prod {
private:
    int patientRecords;

public:
    void inputInfo(){
        software_prod::inputInfo();
        cout<<"Enter the number of Patient Record: ";
        cin>>patientRecords;
    }
   
    void displayInfo() {
        software_prod::displayInfo();
        cout << "Patient Records: " << patientRecords << endl;
    }
};

class Educationsoftware_prod : public software_prod {
private:
    int numStudents;

public:
    void inputInfo(){
        software_prod::inputInfo();
        cout<<"Enter the number of Student: ";
        cin>>numStudents;
    }
  
    void displayInfo() {
        
        software_prod::displayInfo();
        cout << "Number of Students: " << numStudents << endl;
    }
};

int main() {
    Financesoftware_prod f;
    f.inputInfo();
    cout<<endl;

    
    Healthcaresoftware_prod h;
    h.inputInfo();
    cout << endl;

  
    Educationsoftware_prod e;
    e.inputInfo();
    cout << endl;
    
    f.displayInfo();
    h.displayInfo();
    e.displayInfo();
   
    return 0;
}
