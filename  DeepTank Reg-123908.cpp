#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct DeepTankRecord {
    int kraalNumber;
    int totalCattle;
};

void saveRecord(const DeepTankRecord& record) {
    ofstream outFile("deep_tank_records.txt", ios::app); // append mode
    if (outFile) {
        outFile << record.kraalNumber << " " << record.totalCattle << endl;
        outFile.close();
        cout << "Record saved successfully." << endl;
    } else {
        cerr << "Error opening file for writing." << endl;
    }
}

void displayRecords() {
    ifstream inFile("deep_tank_records.txt");
    if (inFile) {
        DeepTankRecord record;
        cout << "Kraal Number\tTotal Cattle" << endl;
        cout << "-------------------------------" << endl;
        while (inFile >> record.kraalNumber >> record.totalCattle) {
            cout << record.kraalNumber << "\t\t" << record.totalCattle << endl;
        }
        inFile.close();
    } else {
        cerr << "Error opening file for reading." << endl;
    }
}

int main() {
    int choice;
    DeepTankRecord record;

    do {
        cout << "\nDeep Tank Management System" << endl;
        cout << "1. Add Record" << endl;
        cout << "2. Display Records" << endl;
        cout << "3. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Kraal Number: ";
                cin >> record.kraalNumber;
                cout << "Enter Total Number of Cattle: ";
                cin >> record.totalCattle;
                saveRecord(record);
                break;
            case 2:
                displayRecords();
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }

    } while (choice != 3);

    return 0;
}