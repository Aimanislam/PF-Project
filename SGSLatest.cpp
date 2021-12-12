#include <iostream>
#include <string>
using namespace std;

// FIRST FUNCTION START
// FUNCTION DECLERATION
void menuscreen()
{

	int marks;
	cout << "Enter your marks: " << endl;
	cin >> marks;

	if (marks < 25)
	{
		cout << "Your Grade is F" << endl;
	}
	else if (marks >= 25 && marks < 45)
	{
		cout << "Your Grade is E" << endl;
	}
	else if (marks >= 45 && marks < 50)
	{
		cout << "Your Grade is D" << endl;
	}
	else if (marks >= 50 && marks < 60)
	{
		cout << "Your Grade is C" << endl;
	}
	else if (marks >= 60 && marks < 80)
	{
		cout << "Your Grade is B" << endl;
	}
	else if (marks >= 80 && marks < 100)
	{
		cout << "Your Grade is A" << endl;
	}
	else
	{
		cout << "Invalid marks" << endl;
	}
}

// SECOND FUNCTION START
//Mod by MrrTahoo, 12/10/2021 @ 6:02PM Desc: Always name your functions what they are doing so here its names as CalStudRes which is CalculateStudentResult.
void CalStudRes()
{
	int i, j = 0, mark[5], marks; 
	string name;
	float sum = 0, avg, perc;
	string subNames[5] = {"Maths : ", "Physics : ", "Islamiat : ", "Computer : ", "Urdu : "};
	
	cout << "Enter your name:" << endl;
	cin>>name;
	cin.ignore();
	cout << "Enter  Marks obtained in 5 Subjects: " << endl;

	for (i = 0; i < 5; i++)
	{
		cout << subNames[j];
		cin >> mark[i];
		sum = sum + mark[i];
		j++;
	}
	avg = sum / 5;
	perc = (sum / 500) * 100;

	cout << "Total Marks = " << sum << endl;
	cout << "Average Marks = " << avg << endl;
	cout << "Percentage Marks = " << perc << "%" << endl;
	cout << endl;
}

int main()
{
	int password, student, admin, rollnumber;
	string choice, name;

	cout << "Do you wish to login as an Admin or Student?" << endl;
	cin >> choice;

	// ADMIN LOGIN
	if (choice == "admin")
	{
		cout << "Enter YOur Name :" << endl;
		cin >> name;
		cout << "Enter YOur Password :" << endl;
		cin >> password;
		//Mod by MrrTahoo, 12/10/2021 @ 6:00PM Desc: The call to sub menu should only go when password is correct.
		if (password == 1234)
		{
			CalStudRes();
		}
		else
		{
			cout << "Access Denied. Please Re-enter Password";
		}
	}

	// STUDENT LOGIN
	else if (choice == "student")
	{
		cout << "Enter Your Roll Number :" << endl;
		cin >> rollnumber;
		menuscreen();
	}
	else
	{
		cout << "Invalid" << endl;
	}

	return 0;
}
