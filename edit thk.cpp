#include<iostream>
#include<conio.h>
#include<fstream>
#include<limits>
#include<string>
#include<cstring>
#include<stdlib.h>

using namespace std;
int rollno,id;
char fname[30],lname[30],address[30];
int size;
int a[1000];
ifstream fin;
ofstream fout;
void add()
{
	system ("color B3");
	ofstream fout; // write
	fout.open("Zari.txt");
	cout<<"\t\tEnter How Many Students Record Yoy Want to Add  :\t";
		while(!(cin >> size))
    {    cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input ! Try again: Enter Only Integer";
	}
	for(int i=0;i<size;i++)
	{
		cout<<"\n\n\t\tEnter First Name :\t";
	    cin.getline(fname,100);
    for (int i=0;i<=fname[i];i++)   //validation for name
    {
        while (!(isalpha(fname[i]))&&(fname[i]!='.')&&(!isspace(fname[i])))
        {
            cin.getline(fname,10);
            ///cout<<"Invalid Input! Enter Valid name :"<<endl;
            
        }//while loop
    }//for loop
	    fout<<fname<<endl;
	    cout<<"\n\t\tEnter Last Name :\t";
    cin>>lname;//.getline(lname,100);
    for (int i=0;i<=lname[i];i++)   //validation for name
    {
        while (!(isalpha(lname[i]))&&(lname[i]!='.')&&(!isspace(lname[i])))
        {
            cin.getline(lname,10);
            //cout<<"Invalid Input! Enter Valid name :"<<endl;
            
        }//while loop
    }//for loop
	    fout<<lname<<endl;
	    cout<<"\n\t\tEnter Roll No :\t";
	    while(!(cin >> rollno))
    {    cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Try again: ";
	}//while condition for integer
	    fout<<rollno<<endl;
	    cout<<"\n\t\tEnter ID :\t";
	    while(!(cin >> id))
    {    cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Try again: ";
	}//while condition for integer
	    fout<<id<<endl;
	    cout<<"\n\t\tEnter Address :\t";
	    cin>>address;
	    fout<<address<<endl;
	}//for loop
	fout.close();
}//add function
void view()
{
	system ("color F4");
	ifstream fin; // read
	fin.open("Zari.txt"); //fin is file handle used in next (instead of complete file name )
	while(true) 
	{
		     fin>>fname;
	         fin>>lname;
		     fin>>rollno;
		     fin>>id;
		     fin>>address;
		if(fin.eof())
		{
			  break;			     
		}
		else
		{
	        cout<<"\t\tName:\t"<<fname<<" "<<lname<<endl;
		
		      cout<<"\t\tRoll No:\t"<<rollno<<endl;
	
	        	cout<<"\t\tID:\t"<<id<<endl;
	
		      cout<<"\t\tAddress:\t"<<address<<endl;
	    }
	
	}//loop

	fin.close();
}
void search()
{
	system ("color 1F");
	int idd;
	cout<<"\t\tEnter Student's ID:\t";
	while(!(cin >> idd))
    {    cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Try again: ";
	}
	ifstream fin;
	fin.open("Zari.txt");
	
	while(!fin.eof())
	{
		fin>>fname;
		fin>>lname;
		fin>>rollno;
		fin>>id;
		fin>>address;
		if(id==idd)
		{
		    cout<<"\n\n\t\tName:\t"<<fname<<" "<<lname<<endl;
		    cout<<"\t\tRoll No:\t"<<rollno<<endl;
		    cout<<"\t\tID:\t"<<id<<endl;
		    cout<<"\t\tAddress:\t"<<address<<endl;
		    
		    cout<<"\n\n\n";
		    cout<<"1.First Name"<<endl;
			cout<<"2.last Name"<<endl;
			cout<<"3.roll no"<<endl;
			cout<<"4.id"<<endl;
			cout<<"5.address"<<endl;
			cout<<"6.Go back to main menu"<<endl;
			int a;
			cout<<"Enter What You want to edit:"<<endl;
			cin>>a;
			/*if(a>6){
				char ch;
		cout<<"Press any key to go back to main menu or press 'q' to exit";
		ch=getch();
			}*/
			fout.open("Zari.txt");
			if(a==1)
			{
				cout<<"Enter First Name";
				cin.getline(fname,100);
    for (int i=0;i<=fname[i];i++)   //validation for name
    {
        while (!(isalpha(fname[i]))&&(fname[i]!='.')&&(!isspace(fname[i])))
        {
            cin.getline(fname,10);
            //cout<<"Invalid Input! Enter Valid name :"<<endl;
            i=0;
        }//while loop
    }//for loop
				cout<<fname<<" "<<lname<<endl;
				cout<<rollno<<endl;
				cout<<id<<endl;
				cout<<address<<endl;
				fout<<endl<<fname<<endl;
				fout<<lname<<endl;
				fout<<rollno<<endl;
				fout<<id<<endl;
				fout<<address<<endl;
			}
			if(a==2)
			{
				cout<<"Enter Last Name";
				cin.getline(lname,100);
    cin.getline(lname,100);
    for (int i=0;i<=lname[i];i++)   //validation for name
    {
        while (!(isalpha(lname[i]))&&(lname[i]!='.')&&(!isspace(lname[i])))
        {
            cin.getline(lname,10);
            //out<<"Invalid Input! Enter Valid name :"<<endl;
            i=0;
        }//while loop
    }//for loop
				cout<<fname<<" "<<lname<<endl;
				cout<<rollno<<endl;
				cout<<id<<endl;
				cout<<address<<endl;
				fout<<endl<<fname<<endl;
				fout<<lname<<endl;
				fout<<rollno<<endl;
				fout<<id<<endl;
				fout<<address<<endl;
			}
			if(a==3)
			{
				cout<<"Enter Roll No";
					while(!(cin >> rollno))
    {    cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Try again: ";
	}
				cout<<fname<<" "<<lname<<endl;
				cout<<rollno<<endl;
				cout<<id<<endl;
				cout<<address<<endl;
				fout<<endl<<fname<<endl;
				fout<<lname<<endl;
				fout<<rollno<<endl;
				fout<<id<<endl;
				fout<<address<<endl;
			}
			if(a==4)
			{
				cout<<"Enter ID";
					while(!(cin >> id))
    {    cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Try again: ";
	}
				cout<<fname<<" "<<lname<<endl;
				cout<<rollno<<endl;
				cout<<id<<endl;
				cout<<address<<endl;
				fout<<endl<<fname<<endl;
				fout<<lname<<endl;
				fout<<rollno<<endl;
				fout<<id<<endl;
				fout<<address<<endl;
			}
			if(a==5)
			{
				cout<<"Enter Address";
				cin>>address;
				cout<<fname<<" "<<lname<<endl;
				cout<<rollno<<endl;
				cout<<id<<endl;
				cout<<address<<endl;
				fout<<endl<<fname<<endl;
				fout<<lname<<endl;
				fout<<rollno<<endl;
				fout<<id<<endl;
				fout<<address<<endl;
			
			}
		
			fout.close();
	    }
		    
		
		
	}
	fin.close();

}

void del()
{
	system ("color 4A");
	string data[100];
	string id, line;
  cout << "Please Enter the id of record you want to delete: ";
  cin >> id;
  ifstream myfile;
  ofstream temp;
  myfile.open("Zari.txt");
  temp.open("temp.txt");
  int k=0;
  while(!myfile.eof()){
  	myfile>>data[k];
  k++;	
  }
  for(int i=0;i<=k;i=i+5){
  	if(data[i+3]!=id){
  		temp<<data[i]<<endl<<data[i+1]<<endl<<data[i+2]<<endl<<data[i+3]<<endl<<data[i+4];
	  }
  //	cout<<data[i]<<endl<<data[i+1]<<endl<<data[i+2]<<endl<<data[i+3]<<endl<<data[i+4];
  }
  
  cout << "The record with the name " << id << " has been deleted if it exsisted" << endl;
  myfile.close();
  temp.close();
  remove("Zari.txt");
  rename("temp.txt", "Zari.txt");
}
bool isloggedin()
{

string username, password="", un, pw;
cout<<"\n\n\n\t\t\t\t*************************";
cout<<"\n\n\n\t\t\t\t******Enetr Login Details";
cout<<"\n\n\n\t\t\t\t*************************";
cout<<endl;
cout<<"******Enter username******"<<endl;

cin>>username;

cout<<"******Enter password******"<<endl;
char ch;
ch=_getch();
while(ch!=13 && ch!=8){
	password.push_back(ch);
	cout<<"*";

	ch= _getch();
}
  
  ifstream read("hello.txt");
  getline(read, un);
  getline(read, pw);
  
  if(un== username&&pw==password)
  {
  	
  	return true;
  	
  }
  else
  {
  	
  	return false;
  }
  }
  


int main()
{
	system("color 2B");
	int choice ;
	cout<<"\t\t\t\t\n\n"<<endl;
	cout<<"\t\t\t\t___________________________________________________________"<<endl;
	cout<<endl;
	cout<<"\t\t\t\t************Welcome To Student Database Program************";
	cout<<endl;
	cout<<"\t\t\t\t___________________________________________________________";
	cout<<endl;
	cout << "\n\t\t\t\t  Project:   Programming Fundamentals";
		cout << "\n\t\t\t\t  Semester:  1st";
		cout << "\n\t\t\t\t  Section :  C";
		cout << "\n\t\t\t\t  Names:     Hamza Khalid";
		cout << "\n\t\t\t\t             Zaryab Qayyum";
		cout << "\n\t\t\t\t             Shoaib Latif  ";
		cout << "\n\t\t\t\t             Shoaib Irshad";
		cout << "\n\t\t\t\t             Anees Rehman";
		cout << "\n\t\t\t\t  ```````````````````````````````````````````````" << endl;
		cout << "\t\t\t                 Supervised By: Zafar Mahmood" << endl;
		cout << "\t\t\t\t   ````````````````````````````````````````````````" << endl<<endl<<endl;
		cout<<"\n\t\t\t\t                |                           ";
		cout<<"\n\t\t\t\tPress Enter( <--- ) to Open the Program\n";
	cin.get();
	do
			{
	system("cls");
	system("color 70");
	log_in:
		here:
			
	cout<<"\n\n\n\t\t\t\t*************************************************\n";
	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
	cout<<"\t\t\t\t*\t 1 : ******REGISTER*******\t\t*"<<endl;
  	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
  	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
  	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
	cout<<"\t\t\t\t*\t 2 : *******login*******\t\t*"<<endl;
  	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
  	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
  	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
	cout<<"\t\t\t\t*\t\t\t\t\t\t*"<<endl;
    cout<<"\t\t\t\t*************************************************\n";
	cout<<"***ENTER YOUR CHOICE*** : \t\t*\n";
		while(!(cin >> choice))
    {    cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input ! Try again: Enter Only Integer ";
	}
	if(choice>2 || choice<=0)
	{
		cout<<"Please enter a valid choice."<<endl;
		system("Pause");
	}
	}
    while(choice>2 || choice<=0);
	system("CLS");
	if (choice == 1)
	{
	system("color 3F");
char name[100];
string pass ="";
   char ch;
   //cout<<"\n\n\n\t\t\t\t*************************************************\n";
cout<<"\n\n\n\t\t\t\t*************Registration****************\n";
cout<<"\n\n\n\t\t\t  *****Enter your username*****\n";
cin.getline(name,100);
    for (int i=0;i<=name[i];i++)   //validation for name
    {
        while (!(isalpha(name[i]))&&(name[i]!='.')&&(!isspace(name[i])))
        {
            cin.getline(name,100);
            //cout<<"Invalid Input! Enter Valid name :"<<endl;
            
        }//while loop
    }//for loop
cout<<"\n\n\n\t\t\t  *****Select your password*****\n";
//cout<<"\n\n\n\t\t\t\t*************************************************\n";
ch = _getch();          // validation for Password in asterik
   while(ch != 13 && ch !=8)//character 13 is enter & 8 is backspace
   {
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }//while loop

cout<<"You have successfuly Registered\n"<<endl;
system("pause");
ofstream file;
file.open("hello.txt");

file <<name <<endl<<pass;
system("cls");
goto log_in;
file.close();

}
else if (choice == 2)
{
system("color 9F");
bool status = isloggedin();

if (!status){

cout<<"**SORRY**" <<endl;
cout<<"You made mistake "<<endl<<"Try again\n";
goto log_in;
system ("pause");

}
if (choice>=3)
{
	goto here;
}
else 
{ 
cout<<endl;
cout<<endl;
cout<<endl;
cout<< "\t\t\t\t **WELCOME** "<<endl;
cout<< "\t\t\t\tYou successfully LogedIn"<<endl;
system ("pause");

}
}
	
system("cls");	
	
	system("color E5");
	int a;
	main_screen:
	cout<<"\t\t\t\t___________________________________________________________"<<endl;
	cout<<endl;
	cout<<"\t\t\t\t***************Student Database Program********************";
	cout<<endl;
	cout<<"\t\t\t\t___________________________________________________________";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t1.Add Record"<<endl;
	cout<<"\t\t\t2.View Record"<<endl;
	cout<<"\t\t\t3.Search && Modify Record"<<endl;
	cout<<"\t\t\t4.Delete Record"<<endl;
	cout<<"\t\t\t5.Exit"<<endl<<endl<<endl;
	cout<<"\t\t\tEnter Your Choice:\t";
cn:
		while(!(cin >> a))
    {    cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input ! Try again: Enter Only Integer ";
	}
if (a>5){
cout<<"\t\t\t Invalid Input Enter Choice again : \t";
goto cn;	
}
	
	system("cls");
	if(a==1)
	{
		add();
		
		
		char ch;
		cout<<"Press any key to go back to main menu or press 'q' to exit";
		ch=getch();
		if(ch=='q')
		{
		}
		else
		{
			system("cls");
			goto main_screen;
		}
	}
	if(a==2)
	{
		view();
		
		
		char ch;
		cout<<"Press any key to go back to main menu or press 'q' to exit";
		ch=getch();
		if(ch=='q')
		{
		}
		else
		{
			system("cls");
			goto main_screen;
		}
	}
	if(a==3)
	{
		
		search();
		
		
		char ch;
		cout<<"Press any key to go back to main menu or press 'q' to exit";
		ch=getch();
		if(ch=='q')
		{
		}
		else
		{
			system("cls");
			goto main_screen;
		}
	}
	if (a==4){
		del();
		
		char ch;
		cout<<"Press any key to go back to main menu or press 'q' to exit";
		ch=getch();
		if(ch=='q')
		{
		}
		else
		{
			system("cls");
			goto main_screen;
		}
	}
	
	if(a==5)
	{	system("color F4");
		cout<<"\t\t\t\t\n\n"<<endl;
	cout<<"\t\t\t\t___________________________________________________________"<<endl;
     cout<<"\t\t\t\t************see you in Future************"<<endl;
	cout<<"\t\t\t\t************Eat..sleep..code..repeat************"<<endl;
	cout<<"\t\t\t\t************Bye...Bye!************"<<endl;
	cout<<"\t\t\t\t************Program is Terminating************"<<endl;
	cout<<"\t\t\t\t___________________________________________________________";
	cout<<endl;
	
	
	}
	
	
}
