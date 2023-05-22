// JAAR
// 05/19/2023
// C++ Primer Plus 6th Ed
// CH 7 Program Ex 8
// Version 1

// Updates:


// Future goals:
// create a function that will identify the season with the least, greatest, and
// average expenditure.


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

// Prototypes:
void fill_Expense_List(double*);
void show_Seasonal_Expense(double[]);
int main()
{
	cout << "Please input the seasonal expense for this year." << endl;
	double seasonal_Expenses[NUMBER_OF_SEASONS];
	fill_Expense_List(seasonal_Expenses);
	show_Seasonal_Expense(seasonal_Expenses);
}


// TODO: Update function so it verifies that a double was inputted.
// Prompts the user to input the expenditure for each season.
// !assume the user will input a double each time;
// Param: double* expense
void fill_Expense_List(double* expense)
{
	for (int i = 0; i < NUMBER_OF_SEASONS; i++)
	{
		cout << "\tEnter " << SEASON_NAMES[i] << " expenses: ";
		cin >> expense[i];
	}
}


// Takes a list of expenses and prints them out to the console for the user.
// Param: double expense[]
void show_Seasonal_Expense(double expense[])
{
	cout << "EXPENSES\n";
	double total_Expense = 0;
	for (int i = 0; i < NUMBER_OF_SEASONS; i++)
	{
		cout << SEASON_NAMES[i] << ": $" << expense[i]
		<< endl;
		total_Expense += expense[i];
	}
	cout << "Total: $" << total_Expense;

}