/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:16:38 by pracksaw          #+#    #+#             */
/*   Updated: 2025/03/11 16:29:19 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <limits>  // for std::numeric_limits
#include <cstdlib> // for system() and exit()
using namespace std;

string fname, lname, phone_num;

void addContact();
void searchContact();
void self_exit();
bool check_digits(string);
bool check_numbers(string);
void clearScreen();
void waitForKeypress();

int main()
{
    short int choice;
    
    while (true) {
        clearScreen();
        cout << "\n\n\n\t\t\tContact Management.";
        cout << "\n\n\t1. Add Contact\n\t2. Search Contact\n\t3. Exit\n\t> ";
        cin >> choice;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n\n\tInvalid Input !";
            cout << "\n\tPress Enter To Continue..";
            waitForKeypress();
            continue;
        }

        switch(choice)
        {
            case 1:
                addContact();
                break;
            case 2:
                searchContact();
                break;
            case 3:
                self_exit();
                break;
            default:
                cout << "\n\n\tInvalid Input !";
                cout << "\n\tPress Enter To Continue..";
                waitForKeypress();
        }
    }
    return 0;
}

void clearScreen()
{
    // Using ANSI escape codes for Linux
    std::cout << "\033[2J\033[1;1H";
}

void waitForKeypress()
{
    cout << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\tPress Enter to continue...";
    cin.get();
}

void self_exit()
{
    clearScreen();
    cout << "\n\n\n\t\tThank You For Using !";
    exit(0);
}

void addContact()
{
    ofstream phone("number.txt", ios::app);
    clearScreen();
    
    cout << "\n\n\tEnter First Name : ";
    cin >> fname;
    cout << "\n\tEnter Last Name : ";
    cin >> lname;
    cout << "\n\tEnter 10-Digit Phone Number : ";
    cin >> phone_num;

    if(check_digits(phone_num) == true)
    {
        if(check_numbers(phone_num) == true)
        {
            if(phone.is_open())
            {
                phone << fname << " " << lname << " " << phone_num << endl;
                cout << "\n\tContact Saved Successfully !";
            }
            else
            {
                cout << "\n\tError Opening File !";
            }
        }
        else
        {
            cout << "\n\tA Phone Number Must Contain Numbers Only !";
        }
    }
    else
    {
        cout << "\n\tA Phone Number Must Contain 10 Digits.";
    }
    
    phone.close();
    cout << "\n\n";
    waitForKeypress();
}

void searchContact()
{
    clearScreen();
    bool found = false;
    ifstream myfile("number.txt");
    string keyword;
    
    cout << "\n\tEnter Name To Search : ";
    cin >> keyword;
    
    while(myfile >> fname >> lname >> phone_num)
    {
        if(keyword == fname || keyword == lname)
        {
            clearScreen();
            cout << "\n\n\n\t\tContact details..";
            cout << "\n\n\tFirst Name : " << fname;
            cout << "\n\tLast Name : " << lname;
            cout << "\n\tPhone Number : " << phone_num;
            found = true;
            break;
        }
    }
    
    if(found == false)
        cout << "\n\tNo Such Contact Found";
    
    myfile.close();
    cout << "\n\n";
    waitForKeypress();
}

bool check_digits(string x)
{
    return (x.length() == 10);
}

bool check_numbers(string x)
{
    for(size_t i = 0; i < x.length(); i++)
    {
        if(!(x[i] >= '0' && x[i] <= '9'))
        {
            return false;
        }
    }
    return true;
}