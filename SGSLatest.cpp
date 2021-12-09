#include <iostream>
using namespace std;

// FIRST FUNCTION START
// FUNCTION DECLERATION 
void menuscreen()
{

   int marks;
	cout << "Enter your marks: " << endl;
	cin >> marks;
	
	if (marks < 25){
		cout << "Your Grade is F" << endl;
	}
	else if(marks >=25 && marks <45){
		cout << "Your Grade is E" << endl;
	}
	else if(marks >=45 && marks <50){
		cout << "Your Grade is D" << endl;
	}
	else if(marks >=50 && marks <60){
		cout << "Your Grade is C" << endl;
	}
	else if(marks >=60 && marks <80){
		cout << "Your Grade is B" << endl;
	}
	else if(marks >=80 && marks <100){
		cout << "Your Grade is A" << endl;
	}
	else{
		cout << "Invalid marks" << endl;
	}
}

// SECOND FUNCTION START
 void submenu()
   {
    int i, mark[5],marks,name;
    float sum=0, avg, perc, total,num1,num2,num3,num4,num5;

    cout<<"Enter  Marks obtained in 5 Subjects: " <<endl;
	// cin >> marks;
	// cout << "Enter your marks of Math's subject: " <<endl;
	// cin >> marks;
    // cout << "Enter your marks of Chemistry's subject: " <<endl;
    //  cin >> marks;
	//  cout << "Enter your marks of Computer Science's subject: " <<endl;
	//  cin >> marks;
	//  cout << "Enter your marks of Urdu's subject: " <<endl;
	//  cin >> marks;
	//  cout << "Enter your marks of Islamiat's subject: " <<endl;
	//  cin >> marks;
    for(i=0; i<5; i++)
    {
        cin>>mark[i];
        sum = sum+mark[i];
    }
    avg = sum/5;
    perc = (sum/500)*100;
	total = (num1+num2+num3+num4+num5);
	cout<<endl;
	cout<<"Enter your name:" <<endl;
	cin >> name;
    cout<<"Enter your Total Marks=" <<marks <<endl;
    cout<<"Average Marks = "<<avg <<endl;
    cout<<"Percentage Marks = "<<perc<<"%" <<endl;
    cout<<endl;
   }

  int main(){
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
	}

	// STUDENT LOGIN
	else if (choice == "student")
	{
		cout << "Enter Your Roll Number :" << endl;
		cin >> rollnumber;
		cout << "Enter Your password :" << endl;
		cin >> password;
		// FUNCTION CALLING
		menuscreen();
	}
	else
	{
		cout << "Invalid" <<endl;
	}

	// FUNCTION CALLING
	 submenu();
   

	return 0;
}
