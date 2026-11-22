#include <iostream>
#include <string>
using namespace std;
void showWelcomeMessage();
void runStudent();
void runOrganizer();
void runAdmin();


int main()
{
    int choice;
    showWelcomeMessage();

    do {
        cout << "How are you?" << endl;
        cout << "1. Student\n2. Organizer\n3. Admin\n0. Exit\n" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
               runStudent();  
               break;
            case 2: 
               runOrganizer(); 
               break;
            case 3: 
               runAdmin();     
               break;
            case 0: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 0);
}
 
void showWelcomeMessage(){
    cout <<"======================================"<< endl;
    cout <<"        Welcome to CampusPulse        "<< endl;
    cout <<"======================================"<< endl;
}
void runStudent()   { cout << "Student menu: coming soon.\n"; }
void runOrganizer() { cout << "Organizer menu: coming soon.\n"; }
void runAdmin()     { cout << "Admin menu: coming soon.\n"; }