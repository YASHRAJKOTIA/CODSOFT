#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Task structure
struct Task {
    string description;
    bool completed;
};

// Function prototypes
void addTask(vector<Task> &tasks, const string &description);
void viewTasks(const vector<Task> &tasks);
void markTaskCompleted(vector<Task> &tasks, int index);
void removeTask(vector<Task> &tasks, int index);

int main() {
    vector<Task> tasks;
    int choice;

    cout << "Welcome to the To-Do List Manager!\n";

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    string description;
                    cout << "Enter task description: ";
                    cin.ignore(); // Ignore the newline character in the input buffer
                    getline(cin, description);
                    addTask(tasks, description);
                    break;
                }
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                {
                    int index;
                    cout << "Enter the index of the task to mark as completed: ";
                    cin >> index;
                    markTaskCompleted(tasks, index);
                    break;
                }
            case 4:
                {
                    int index;
                    cout << "Enter the index of the task to remove: ";
                    cin >> index;
                    removeTask(tasks, index);
                    break;
                }
            case 5:
                cout << "Exiting the To-Do List Manager. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}

void addTask(vector<Task> &tasks, const string &description) {
    Task newTask;
    newTask.description = description;
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "Task added successfully.\n";
}

void viewTasks(const vector<Task> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks to display.\n";
    } else {
        cout << "Tasks:\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". ";
            cout << (tasks[i].completed ? "[Completed] " : "[Pending] ");
            cout << tasks[i].description << endl;
        }
    }
}

void markTaskCompleted(vector<Task> &tasks, int index) {
    if (index >= 1 && index <= tasks.size()) {
        tasks[index - 1].completed = true;
        cout << "Task marked as completed.\n";
    } else {
        cout << "Invalid index. Please enter a valid index.\n";
    }
}

void removeTask(vector<Task> &tasks, int index) {
    if (index >= 1 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task removed successfully.\n";
    } else {
        cout << "Invalid index. Please enter a valid index.\n";
    }
}
