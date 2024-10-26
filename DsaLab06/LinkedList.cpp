#include "LinkedList.h"
#include<string>
int main() {
    LinkedList list;
    char choice;
    string input;
    int data;

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Insert at Head (Stack)" << endl;
        cout << "2. Delete from Head (Stack)" << endl;
        cout << "3. Insert at Tail (Queue)" << endl;
        cout << "4. Delete from Tail (Queue)" << endl;
        cout << "5. Insert based on Priority (Priority Queue)" << endl;
        cout << "6. Delete Highest Priority Node (Priority Queue)" << endl;
        cout << "7. Display List" << endl;
        cout << "8. Exit" << endl;

        cout << "Choose an option (1-8): ";
        cin >> choice;

        if (choice < '1' || choice > '8') {
            cout << "Invalid option! Please choose again." << endl;
            continue;
        }
        if (choice == '1') {
            while (true) {
                cout << "Enter data: ";
                cin >> input;
                if (list.isInteger(input)) {
                    data = stoi(input);
                    list.insertAtHead(data);
                    break;
                }
                else {
                    cout << "Please enter a valid integer." << endl;
                }
            }
        }
        else if (choice == '2') {
            list.deleteAtHead();
        }
        else if (choice == '3') {
            while (true) {
                cout << "Enter data: ";
                cin >> input;
                if (list.isInteger(input)) {
                    data = stoi(input);
                    list.insertAtTail(data);
                    break;
                }
                else {
                    cout << "Please enter a valid integer." << endl;
                }
            }
        }
        else if (choice == '4') {
            list.deleteFromTail();
        }
        else if (choice == '5') {
            while (true) {
                cout << "Enter data: ";
                cin >> input;
                if (list.isInteger(input)) {
                    data = stoi(input);
                    list.insertAtMid(data);
                    break;
                }
                else {
                    cout << "Please enter a valid integer." << endl;
                }
            }
        }
        else if (choice == '6') {
            list.deleteHighestPriority();
        }
        else if (choice == '7') {
            list.displayLinkedList();
        }
        else if (choice == '8') {
            cout << "Exiting...." << endl;
            break;
        }
    }

    return 0;
}
