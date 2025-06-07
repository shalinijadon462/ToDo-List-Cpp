#include <iostream>
using namespace std;

int main() {
    string tasks[10];
    int task_count = 0;
    int option;

    while (true) {
        cout << "\n--- TO DO LIST ---" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Last Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option: ";
        cin >> option;

        cin.ignore(); // flush input

        if (option == 1) {
            if (task_count >= 10) {
                cout << "Task list is full." << endl;
            } else {
                cout << "Enter your task: ";
                getline(cin, tasks[task_count]);
                task_count++;
            }
        } else if (option == 2) {
            cout << "\nYour Tasks:" << endl;
            for (int i = 0; i < task_count; i++) {
                cout << i + 1 << ". " << tasks[i] << endl;
            }
        } else if (option == 3) {
            if (task_count > 0) {
                task_count--;
                cout << "Last task deleted." << endl;
            } else {
                cout << "No tasks to delete." << endl;
            }
        } else if (option == 4) {
            cout << "Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid option. Try again." << endl;
        }
    }

    return 0;
} 