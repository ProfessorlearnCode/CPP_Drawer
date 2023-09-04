#include<iostream>
using namespace std;

class Animal {
private:
    string name;
    int age;
public:
    void input() {
        cout << "Enter the name of the animal: ";
        cin >> name;
        cout << "Enter the age of the animal: ";
        cin >> age;
    }
    void output() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Herbivore : public Animal {
private:
    string diettype;
public:
    void inputInfo() {
        cout << "Herbivore Class" << endl;
        Animal::input();
       
    }
    void diet_type_in(){
        cout << "Type of diet: ";
        cin >> diettype;  
    }
    void outputinfo() {
        cout << "----------------------" << endl;
        cout << "Herbivore Class" << endl;
        Animal::output();
        
    }
    
    void diet_type_out(){  
        cout << "Diet Type: " << diettype << endl;
    }
};

class Carnivore : public Animal {
private:
    string huntingskill;
public:
    void inputInfo() {
        cout << "Carnivore Class" << endl;
        Animal::input();   
    }
    void hunting_skill_in(){
        cout << "Hunting skill: ";
        cin >> huntingskill;
    }
    void outputinfo() {
        cout << "----------------------" << endl;
        cout << "Carnivore Class" << endl;
        Animal::output();
        
    }
    void hunting_skill_out(){
        cout << "Hunting Skill: " << huntingskill << endl;
    }
};

class Omnivore : public Herbivore, public Carnivore {
private:
    string foodprefrence, name;
    int age;
public:
    void inputOmni() {
        cout << "Omnivore Class" << endl;
        cout<<"Name: ";
        cin>>name;
        cout<<"Age: ";
        cin>>age;
        Herbivore::diet_type_in();
        Carnivore::hunting_skill_in();
        cout << "Preference of food: ";
        cin >> foodprefrence;
    }
    void outputOmni() {
        cout << "----------------------" << endl;
        cout << "Omnivore Class" << endl;
        Herbivore::diet_type_out();
        Carnivore::hunting_skill_out();
        cout << "Food Preference: " << foodprefrence << endl;
        cout<<"----------------------------"<<endl;
    }
};

int main() {
    Herbivore h;
    Carnivore c;
    Omnivore o;
    h.inputInfo();
    h.diet_type_in();
    c.inputInfo();
    c.hunting_skill_in();
    o.inputOmni();
    h.outputinfo();
    h.diet_type_out();
    c.outputinfo();
    c.hunting_skill_out();
    o.outputOmni();
    return 0;
}
