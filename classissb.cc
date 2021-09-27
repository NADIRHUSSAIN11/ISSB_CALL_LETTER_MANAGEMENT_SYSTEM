#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <windows.h>
using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////

class issb //BASE CLASS DECLARATION
{
public:
virtual void getdata()=0;
virtual void showdata()=0;
};

///////////////////////////////////////////////////////////////////////////////////////////////////


class call: public issb // DERIVED CLASS DELARATION
{
public:                // HERE MY DATA MEMBERS ARE PUBLIC
    string nic_number; // THESE ARE DATA MEMBERS AND I DELEARED MY DATA MEMBERS HERE ......
    string name;
    string fathers_name;
    string asrc;
    string issb;
    string from;
    string to;
    string city;
    string course;
    
///////////////////////////////////////////////////////////////////////////////////////////////////

    void loading()//SIMPLE LOADING FUNCTION
    {

        cout << "\n\n\n\n\n\n\n\n\n\n"<< endl;
        cout << "\t\t\t\t LOADING....... ";
        cout << "\n"<<endl;
        char x = 219;
        cout << x;
        for (int i = 0; i < 45; i++)
        {
            cout << x << "/";
            if (i < 10)
                Sleep(300);
            if (i >= 10 && i <= 20)
                Sleep(150);
            if (i > 20)
                Sleep(75);
        }
        system("cls");
        cout << "\n\n"<< endl;
    }
    
/////////////////////////////////////////////////////////////////////////////////////////////////////

    void loading1()//SIMPLE LOADING FUNCTION FOR ADMINISTRATION
    {

        cout << "\n\n\n\n\n\n\n\n\n\n"<< endl;
        cout << "\t\t\t\t LOADING ADMINISTRATION PORTAL....... ";
        cout << "\n"<<endl;
        char x = 219;
        cout << x;
        for (int i = 0; i < 45; i++)
        {
            cout << x << "/";
            if (i < 10)
                Sleep(300);
            if (i >= 10 && i <= 20)
                Sleep(150);
            if (i > 20)
                Sleep(75);
        }
        system("cls");
        cout << "\n\n"<< endl;
    }
    
/////////////////////////////////////////////////////////////////////////////////////////////////////

    void loading2()//SIMPLE LOADING FUNCTION FOR USER
    {

        cout << "\n\n\n\n\n\n\n\n\n\n"<< endl;
        cout << "\t\t\t\tLOADING USER'S PORTAL....... ";
        cout << "\n"<<endl;
        char x = 219;
        cout << x;
        for (int i = 0; i < 45; i++)
        {
            cout << x << "/";
            if (i < 10)
                Sleep(300);
            if (i >= 10 && i <= 20)
                Sleep(150);
            if (i > 20)
                Sleep(75);
        }
        system("cls");
        cout << "\n\n"<< endl;
    }
    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void userportal() //FUNCTION FOR USER SCREEN
    {
        cout << "\n\n";
        cout << "****************************************************************************************" << endl;
        cout << "************************************( USER'S PORTAL  )**********************************" << endl;
        cout << "****************************************************************************************" << endl;
        cout << "\n\n";
    }
    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void welcome() // FUNCTION FOR WELCOME SCREEN
    {
        cout << "\n\n";
        cout << "*****************************************************************************************" << endl;
        cout << "*********************************  W E L L   C O M E    *********************************" << endl;
        cout << "*********************************     T O   I S S B     *********************************" << endl;
        cout << "*********************************  M A N A G E M E N T  *********************************" << endl;
        cout << "*********************************      S Y S T E M      *********************************" << endl;
        cout << "*****************************************************************************************" << endl;
        cout << "\n\n";
    }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void note() // THIS IS MEMBER FUNCTION WHICH I USED FOR HEADER NOTE
    {

        cout << "****************************************************************************************" << endl;
        cout << "***********************************( ISSB CALL LETTER )*********************************" << endl;
        cout << "****************************************************************************************" << endl;
    }
    
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void ENDnote() // THIS IS MEMBER FUNCTION WHICH I USED FOR END NOTE
    {

        cout << "****************************************************************************************" << endl;
        cout << "*************( CONGRATLATIONS FOR YOUR NOMINATION IN ISSB , ALL THE BEST )**************" << endl;
        cout << "****************************************************************************************" << endl;
    }
    
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void getdata() // FUNCTION FOR ADMINISTRATION INPUT
    {
        cout << "****************************************************************************************" << endl;
        cout << "******************************( ADMINISTRARTION'S PORTAL  )*****************************" << endl;
        cout << "****************************************************************************************" << endl;
        cout << "\n\n\n";
        cout << "****************************************************************************************" << endl;

        cout << "PLEASE ENTER CANDIDATE'S CNIC NUMBER:" << endl;
        getline(cin, nic_number);
        cout << endl;
        cout << "****************************************************************************************" << endl;
        cout << "PLEASE ENTER CANDIDATE'S NAME IN FULL:" << endl;
        getline(cin, name);
        cout << endl;
        cout << "****************************************************************************************" << endl;
        cout << "PLEASE ENTER CANDIDATE'S FATHER NAME:" << endl;
        getline(cin, fathers_name);
        cout << endl;
        cout << "****************************************************************************************" << endl;
        cout << "PLEASE ENTER CANDIDATE'S ASRC:" << endl;
        getline(cin, asrc);
        cout << endl;
        cout << "****************************************************************************************" << endl;
        cout << "PLEASE ENTER CANDIDATE'S ISSB CENTRE:" << endl;
        getline(cin, issb);
        cout << endl;
        cout << "****************************************************************************************" << endl;
        cout << "PLEASE ENTER CANDIDATE'S ISSB DATE FROM:" << endl;
        getline(cin, from);
        cout << endl;
        cout << "****************************************************************************************" << endl;
        cout << "PLEASE ENTER CANDIDATE'S ISSB DATE TO:" << endl;
        getline(cin, to);
        cout << endl;
        cout << "****************************************************************************************" << endl;
        cout << "PLEASE ENTER CANDIDATE'S CITY:" << endl;
        getline(cin, city);
        cout << endl;
        cout << "****************************************************************************************" << endl;
        cout << "PLEASE ENTER CANDIDATE'S COURSE:" << endl;
        getline(cin, course);
        cout << endl;
        cout << "****************************************************************************************" << endl;
        system("cls");
    }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void showdata() // THIS IS MEMBER FUNCTION WHICH I USED FOR PRINTING MY DATA MEMBERS
    {
        cout << "________________________________________________________________________________________" << endl;
        cout << "NIC NUMBER \t:" << nic_number << endl;
        cout << "________________________________________________________________________________________" << endl;
        cout << "NAME \t\t:" << name << endl;
        cout << "________________________________________________________________________________________" << endl;
        cout << "FATHER'S NAME\t:" << fathers_name << endl;
        cout << "________________________________________________________________________________________" << endl;
        cout << "ASRC \t\t:" << asrc << endl;
        cout << "________________________________________________________________________________________" << endl;
        cout << "ISSB \t\t:" << issb << endl;
        cout << "________________________________________________________________________________________" << endl;
        cout << "FROM \t\t:" << from << endl;
        cout << "________________________________________________________________________________________" << endl;
        cout << "TO \t\t:" << to << endl;
        cout << "________________________________________________________________________________________" << endl;
        cout << "CITY \t\t:" << city << endl;
        cout << "________________________________________________________________________________________" << endl;
        cout << "COURSE \t\t:" << course << endl;
        cout << "________________________________________________________________________________________" << endl;
        cout << "\n\n";
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    system("color 02");// COMMAND FOR BACKGROUND AND FONT COLOR
    
    call nadir; 	// THIS IS MY DECLARED OBJECT OF CLASS ISBB

    nadir.loading();	//CALLING LOADING FUNCTION
    
    nadir.welcome();	// CALLING WELL COME FUNCTION
    
    nadir.loading1();	// CALLING LOADING FUNCTION FOR ADMINISTRATION
    
    nadir.getdata();	//CALLING GET DATA FUNCTION

    string RNO; 	// VARIABLE DECLARATION FOR IDENTITYY
    
	nadir.loading();  //CALLING LOADING FUNCTION
	
    nadir.userportal(); // HEADER FOR USER'S PORTAL

    cout << "PLEASE ENTER YOUR NIC NUMBER FOR YOUR CALL STATUS :"; // INPUT FOR ROLL NUMBER

    getline(cin, RNO);

    if (RNO == nadir.nic_number) // HERE I USE IF FOR SECURITY PURPOSE ONLY THE CANDIDATE CAN CHECK HIS CALL LETTER
    {
        nadir.loading2();//CALLING FUNCTION FOR USER LOADING
        
        cout << endl;
        
        cout << endl;
        
        nadir.note(); //CALLING FUNCTION FOR HEADER
        
        cout << endl;
        
        nadir.showdata(); //CALLING SHOW DATA FUNCTION
        
        nadir.ENDnote(); //CALLING FUNCTION FOR END NOTE
        
        cout << endl;
        
        cout << endl;

        int EXIT;

        cout << "PRESS ENTER TO EXIT";
        
        cin >> EXIT;
    }

    else // CONDITION IF USER'S DATA NOT FOUND
    {
    	nadir.loading();  //CALLING LOADING FUNCTION
    	cout << "***************************************************************" << endl;
        cout << "**********( RECORD NOT FOUND PLEASE COME BACK LATER )**********";
		cout << "***************************************************************" << endl;
    }

    return 0;
}
