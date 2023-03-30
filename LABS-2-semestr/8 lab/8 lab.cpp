#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Team {
    string name;
    string city;
    int playerAmount;
    int points;
};

Team teams[1000];
int numTeams = 0;

void writeResultToFile() {
    ofstream outFile("teams.txt");
    for (int i = 0; i < numTeams; i++) {
        outFile << teams[i].name << " " << teams[i].city << " " << teams[i].playerAmount << " " << teams[i].points << endl;
    }
    outFile.close();

}

void replaceFile() {
    ifstream inFile("teams.txt");
    ofstream outFile("new_teams.txt");

    while (!inFile.eof()) {
        Team t;
        inFile >> t.name >> t.city >> t.playerAmount >> t.points;
        if (t.points >= numTeams) {
            outFile << t.name << " " << t.city << " " << t.playerAmount << " " << t.points << endl;
        }
    }

    inFile.close();
    outFile.close();
    remove("teams.txt");
    rename("new_teams.txt", "teams.txt");
}

void addNewTeams() {
    int amount;
    cout << "Enter amount of teams: ";
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {
        Team t;
        cout << "Enter name of team: ";
        cin >> t.name;
        cout << "Enter city of team: ";
        cin >> t.city;
        cout << "Enter amount of team's players: ";
        cin >> t.playerAmount;
        cout << "Enter amount of team's points: ";
        cin >> t.points;
        teams[numTeams++] = t;
    }
    writeResultToFile();
}


void deleteTeams() {
    int minPoints;
    cout << "Enter minimum points: ";
    cin >> minPoints;

    for (int i = 0; i < numTeams; i++) {
        if (teams[i].points < minPoints) {
            for (int j = i; j < numTeams - 1; j++) {
                teams[j] = teams[j + 1];
            }
            numTeams--;
            i--;
        }
    }
    writeResultToFile();
}


void enterTeamData() {
    cout << "Enter amount of teams: ";
    cin >> numTeams;
    for (int i = 0; i < numTeams; i++) {
        cout << "Enter name of team: ";
        cin >> teams[i].name;
        cout << "Enter city of team: ";
        cin >> teams[i].city;
        cout << "Enter amount of team's players: ";
        cin >> teams[i].playerAmount;
        cout << "Enter amount of team's points: ";
        cin >> teams[i].points;
    }
    writeResultToFile();
}


int main() {
    enterTeamData();
    cout << "Initial amount of teams: " << numTeams << endl;
    deleteTeams();
    cout << "Amount of teams after deleting: " << numTeams << endl;
    addNewTeams();
    cout << "Updated amount of teams: " << numTeams << endl;

    writeResultToFile();
    replaceFile();
    return 0;
}