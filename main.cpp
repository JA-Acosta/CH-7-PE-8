// JAAR
// 05/23/2023
// C++ Primer Plus 6th Ed
// CH 7 Program Ex 8
// Version 1.3

// Updates:
// +gitHub remote repository
// +gitclone and pushclone


// Future goals:
// create a function that will identify the season with the least and greatest
// expense
	// !can add this to the structure.


// Potential Use cases/errors:

// ------------------------------ Prompt---------------------------------------
// Records the seasonal expenses inputted by the user and displays them back
// to the user.
// ------------------------------ Prompt---------------------------------------

// Headers:
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

// Global Constants and Structures:
const int NUMBER_OF_SEASONS = 4;
const char* SEASON_NAMES[4] = {"Spring", "Summer", "Fall", "Winter"};
struct expenses {
	double seasonal_Expense[NUMBER_OF_SEASONS]{};
	double total_Expenses = 0;
	double average_Expense = 0;
};

// Prototypes:
void fill_Expense_List(expenses* annual);
void show_Seasonal_Expense(const expenses* annual);
int main()
{
	expenses annual;
	cout << "Please input the seasonal expense for this year." << endl;
	fill_Expense_List(&annual);
	show_Seasonal_Expense(&annual);
}


// TODO: Update function so it verifies that a double was inputted.
// Prompts the user to input the expenditure for each season and update the
// total annual expenditure.
// !assume the user will input a double each time;
// Param: double* expense
void fill_Expense_List(expenses* annual)
{
	for (int i = 0; i < NUMBER_OF_SEASONS; i++)
	{
		cout << "\tEnter " << SEASON_NAMES[i] << " expenses: ";
		cin >> annual->seasonal_Expense[i];
		annual->total_Expenses += annual->seasonal_Expense[i];
	}
	annual->average_Expense = annual->total_Expenses / NUMBER_OF_SEASONS;
}


// Takes a list of expenses and prints them out to the console for the user.
// Param: double expense[]
void show_Seasonal_Expense(const expenses* annual)
{
	cout << "EXPENSES\n";
	for (int i = 0; i < NUMBER_OF_SEASONS; i++)
	{
		cout << SEASON_NAMES[i] << ": $" << annual->seasonal_Expense[i]
		<< "\n";
	}
	cout << "Total: $" << annual->total_Expenses << "\n";
	cout << "Average: $" << annual->average_Expense << "\n";
}