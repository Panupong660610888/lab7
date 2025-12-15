#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    string student_id;
    string movieName;
    string date;
    string ans;
    int gear;
    
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name <<" is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    getline(cin,student_id);
    
    gear = ((student_id[0] - '0') * 10 + (student_id[1] - '0')) - 12;
    
    cout << "Fahsai: I think you may be GEAR "<< gear <<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin,movieName);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,date);
    cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching " << movieName << " with you.\n";
    cout << name << ": ";
    getline(cin,ans);
    cout << "Fahsai: 555+ see you " << date << ". Bye Bye \\(^ ^)/";

    return 0; 
    
}