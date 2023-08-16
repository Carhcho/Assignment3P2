/******************************************

Program Assignment 3

This program Checks for a string to search for matches on a list of names and phone numbers

Author: Cesar Roncancio

Created : 9/19/2021

Revisions : 9/19/2021 I used string::npos to check if the string name is not on the array but if the name is found uing .find(name) then display the items that match with the entered string.
******************************************/
#include <iostream>
#include <string>

using namespace std;

void findName(string names[], string name);

int main() { 
//array of strings... 
string names[11] = { "Renee Javens, 678-1223", "Joe Looney, 586-0097", "Geri Palmer, 223-8787", "Lynn Presnell, 887-1212", "Bill Wolfe, 223-8878", "Sam Wiggins, 486-0998", "Bob Kain, 586-8712", "Tim Haynes, 586-7676", "John Johnson, 223-9037", "Jean James, 678-4939", "Ron Palmer, 486-2783" };
 
string name;

cout<<"Enter the name that you want to search\n";
cin>>name;

findName(names, name);

return 0; 
}

void findName(string names[], string name) {
//this for is to check every item on the names array
	for (int i = 0; i < 11; i++) {
//I used string::npos to check that the string the user enters is found in the array
//so if names[i].find(name) is not string::npos, then name is found in names[i]
		if (names[i].find(name) != string::npos) {
			cout << names[i] << endl;
		}
	}
}