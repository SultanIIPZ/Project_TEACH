
#pragma once
#ifndef Professor_H
#define Professor_H

#include <iostream>
#include <string>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
//
//STRUCTURE//
//
struct schedule{
    //for time//
    string monday[3];
    string tuesday[3];
    string wednesday[2];
    string thursday[3];
    string friday[3];
    string saturday[3];
    //for subject, room number, and block//
    string classMon[3];
    string classTue[3];
    string classWed[2];
    string classThu[3];
    string classFri[3];
    string classSat[3];
    //for status: present, absent, late, online, early dismissal//
    string statusMon[3];
    string statusTue[3];
    string statusWed[2];
    string statusThu[3];
    string statusFri[3];
    string statusSat[3];
};
//
//CLASSES//
//
class Professor 
{
    private:
        string professorID;
        string name = ""; 
        string contactNumber;
        string email;
        int late = 0;
        int absent = 0;
        int present = 0;
    public:
        schedule classSchedule;
        //
        //CONSTRUCTORS//
        //
        //constructor with no parameters// 
        Professor(){
        }
        //constructor with parameters [name, professorID, contactInfo]// 
        Professor(string n, string p, string c){
            name = n;
            professorID = p;
            contactNumber = c;
        }
        //
        //GETTERS//
        //
        string getLate() {
            return to_string(late);
        }
        string getAbsent() {
            return to_string(absent);
        }
        string getPresent() {
            return to_string(present);
        }
        string getName() {
            return name;
        }
        string getEmail() {
            return email;
        }
        string getID() {
            return professorID;
        }
        string getContactNumber() {
            return contactNumber;
        }
        int getClassDetails() {
            return 0;
        }
        //
        //SETTERS//
        //
        void setName(string n) {
            name = n;
        }
        void setEmail(string e) {
            email = e;
        }
        void setContactNumber(string c) {
            contactNumber = c;
        }
        void setProfessorID(string p) {
            professorID = p;
        }
        //
        //*METHODS*//
        //
        void viewSchedule(){
            int sizeWed = 2, sizeOther = 3;
            
            //Monday column//
            for(int i = 0; i < sizeOther; i++){
                cout << classSchedule.monday[i] << endl;
            }
            
            //Tuesday column//
            for(int i = 0; i < sizeOther; i++){
                cout << classSchedule.tuesday[i] << endl;
            }
            
            //Wednesday column//        
            for(int i = 0; i < sizeWed; i++){
                cout << classSchedule.wednesday[i] << endl;
            }
            
            //Thursday column//
            for(int i = 0; i < sizeOther; i++){
                cout << classSchedule.thursday[i] << endl;
            }
            
            //Friday column//
            for(int i = 0; i < sizeOther; i++){
                cout << classSchedule.friday[i] << endl;
            }
            
            //Saturday column//
            for(int i = 0; i < sizeOther; i++){
                cout << classSchedule.saturday[i] << endl;
            }  
        }
        //method that sets the contact number and email based on the arguments passed to the two parameters// 
        void updateContactInfo(string aContactNum, string aEmail){
            contactNumber = aContactNum;
            email = aEmail;
        }
        //returns a string that contains the professor's name, ID, Room, Time, Status//
        string getSpecificDetails(Professor prof, string room, string time, string status){
            string temporary;

            temporary = "Name: " + prof.getName() + "\n\n" +
                "ID: " + prof.getID() + "\n\n" +
                "Room:  " + room + "\n\n" +
                "Time: " + time + "\n"
                "Status: " + status + "\n\n";

            return temporary;
        }
        //updates the status of the professor by inputing the address of the array that holds the status of the professor for that time and day//
        void updateStatus(string aNewStatus, string aOldStatus, string* StatusAddress){
            *StatusAddress = aNewStatus;
            
            if (aOldStatus == "Not Yet Updated") {
                if (aNewStatus == "PRESENT" || aNewStatus == "EARLY DISMISSAL" || aNewStatus == "ONLINE") {
                    present++;
                }
                else if (aNewStatus == "LATE") {
                    late++;
                }
                else if (aNewStatus == "ABSENT") {
                    absent++;
                }
            }
            else {
                if ((aOldStatus == "PRESENT" || aOldStatus == "ONLINE" || aOldStatus == "EARLY DISMISSAL") && aNewStatus == "LATE") {
                    present--;
                    late++;
                }
                else if ((aOldStatus == "PRESENT" || aOldStatus == "ONLINE" || aOldStatus == "EARLY DISMISSAL") && aNewStatus == "ABSENT") {
                    present--;
                    absent++;
                }
                else if (aOldStatus == "LATE" && aNewStatus == "ABSENT") {
                    late--;
                    absent++;
                }
                else if (aOldStatus == "ABSENT" && aNewStatus == "LATE") {
                    absent--;
                    late++;
                }
                else if (aOldStatus == "LATE" && (aNewStatus == "PRESENT" || aNewStatus == "EARLY DISMISSAL" || aNewStatus == "ONLINE")) {
                    late--;
                    present++;
                }
                else if (aOldStatus == "ABSENT" && (aNewStatus == "PRESENT" || aNewStatus == "EARLY DISMISSAL" || aNewStatus == "ONLINE")) {
                    absent--;
                    present++;
                }

            }

        }       
};

#endif 

