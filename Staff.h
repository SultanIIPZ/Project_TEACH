
#ifndef Staff_H 
#define Staff_H 
#pragma once

#include <iostream>
#include <string>
#include "Professor.h" 
#include "AttendanceRecord.h"

using namespace std;
//
//CLASSES
//
class Staff 
{
    private:
        string staffID;
        string name;
        string email;
        string contactNumber;
        int attendanceChecks = 0;
        //displays the number of rooms checked by the staff on the floor and time they are assigned in.//
    public:
        //
        //CONSTRUCTOR//
        //
        Staff(){
        
        }
        //
        //GETTERS
        //
        string getstaffID() {
            return staffID;
        }
        string getName() {
            return name;
        }
        string getEmail() {
            return email;
        }
        string getContactNumber() {
            return contactNumber;
        }
        int getAttendanceChecks() {
            return attendanceChecks;
        }
        //
        //SETTERS
        //
        void setStaffID(string astaffID) {
            staffID = astaffID;
        }
        void setName(string aname) {
            name = aname;
        }
        void setEmail(string aemail) {
            email = aemail;
        }
        void setContactNumber(string aContactNumber) {
            contactNumber = aContactNumber;
        }
        void incAttendanceChecked() {
            attendanceChecks++;
        }
        //
        //Methods
        // 
        //returns a string to show the different times, details, and status of the professors for each day and room [was not used]//
        string ViewRoomSchedule(Professor prof1, Professor prof2, string room, string day) {
            string aroom = room;
            string aday = day;
            string temp;

            if (aroom == "N301")
            {
                if (aday == "Monday")
                {
                    for (int i = 0; i < 2; i++) {
                        temp = prof1.classSchedule.monday[i] + "\n" + prof1.classSchedule.classMon[i] + "\n" + prof1.classSchedule.statusMon[i] + "\n\n\n";
                    }
                }
                else if (aday == "Tuesday")
                {
                    temp = prof2.classSchedule.tuesday[0] + "\n" + prof2.classSchedule.classTue[0] + "\n" + prof2.classSchedule.statusTue[0] + "\n\n\n";
                }
                else if (aday == "Wednesay")
                {
                    for (int i = 0; i < 2; i++) {
                        temp = prof1.classSchedule.wednesday[i] + "\n" + prof1.classSchedule.classWed[i] + "\n" + prof1.classSchedule.statusWed[i] + "\n\n\n";
                    }
                }
                else if (aday == "Thursday")
                {
                    temp = "No class for Room " + aroom + " on " + aday + "\n\n\n";
                }
                else if (aday == "Friday")
                {
                    for (int i = 0; i < 2; i++) {
                        temp = prof1.classSchedule.friday[i] + "\n" + prof1.classSchedule.classFri[i] + "\n" + prof1.classSchedule.statusFri[i] + "\n\n\n";
                    }
                }
                else if (aday == "Saturday")
                {
                    for (int i = 1; i < 3; i++) {
                        temp = prof1.classSchedule.saturday[i] + "\n" + prof1.classSchedule.classSat[i] + "\n" + prof1.classSchedule.statusSat[i] + "\n\n\n";
                    }
                }
            }
            else if (aroom == "N311")
            {
                if (aday == "Monday")
                {
                    temp = prof1.classSchedule.monday[2] + "\n" + prof1.classSchedule.classMon[2] + "\n" + prof1.classSchedule.statusMon[2] + "\n\n\n";
                }
                else if (aday == "Tuesday")
                {
                    temp = "No class for Room" + aroom + "on" + aday;
                }
                else if (aday == "Wednesay")
                {
                    temp = "No class for Room" + aroom + "on" + aday;
                }
                else if (aday == "Thursday")
                {
                    temp = "No class for Room" + aroom + "on" + aday;
                }
                else if (aday == "Friday")
                {
                    temp = prof1.classSchedule.friday[2] + "\n" + prof1.classSchedule.classFri[2] + "\n" + prof1.classSchedule.statusFri[2] + "\n\n\n";
                }
                else if (aday == "Saturday")
                {
                    temp = "No class for Room" + aroom + "on" + aday;
                }
            }
            else if (aroom == "N303")
            {
                if (aday == "Monday")
                {
                    temp = prof2.classSchedule.monday[0] + "\n" + prof2.classSchedule.classMon[0] + "\n" + prof2.classSchedule.statusMon[0] + "\n\n\n";
                }
                else if (aday == "Tuesday")
                {
                    temp = prof1.classSchedule.tuesday[2] + "\n" + prof2.classSchedule.classTue[2] + "\n" + prof2.classSchedule.statusTue[2] + "\n\n\n";
                }
                else if (aday == "Wednesay")
                {
                    temp = prof2.classSchedule.wednesday[0] + "\n" + prof2.classSchedule.classWed[0] + "\n" + prof2.classSchedule.statusWed[0] + "\n\n\n";
                }
                else if (aday == "Thursday")
                {
                    for (int i = 1; i < 3; i++) {
                        temp = prof1.classSchedule.thursday[i] + "\n" + prof1.classSchedule.classThu[i] + "\n" + prof1.classSchedule.statusThu[i] + "\n\n\n";
                    }
                }
                else if (aday == "Friday")
                {
                    temp = prof2.classSchedule.friday[0] + "\n" + prof1.classSchedule.classFri[0] + "\n" + prof1.classSchedule.statusFri[0] + "\n\n\n";
                }
                else if (aday == "Saturday")
                {
                    temp = "No class for Room" + aroom + "on" + aday;
                }
            }
            else if (aroom == "N307")
            {
                if (aday == "Monday")
                {
                    temp = prof2.classSchedule.monday[1] + "\n" + prof2.classSchedule.classMon[1] + "\n" + prof2.classSchedule.statusMon[1] + "\n\n\n";
                }
                else if (aday == "Tuesday")
                {
                    temp = "No class for Room" + aroom + "on" + aday;
                }
                else if (aday == "Wednesay")
                {
                    temp = prof2.classSchedule.wednesday[1] + "\n" + prof2.classSchedule.classWed[1] + "\n" + prof2.classSchedule.statusWed[1] + "\n\n\n";
                }
                else if (aday == "Thursday")
                {
                    temp = "No class for Room" + aroom + "on" + aday;
                }
                else if (aday == "Friday")
                {
                    temp = prof2.classSchedule.friday[1] + "\n" + prof1.classSchedule.classFri[1] + "\n" + prof1.classSchedule.statusFri[1] + "\n\n\n";
                }
                else if (aday == "Saturday")
                {
                    temp = "No class for Room" + aroom + "on" + aday;
                }
            }
            else if (aroom == "N303")
            {
                if (aday == "Monday")
                {
                    temp = prof2.classSchedule.monday[0] + "\n" + prof2.classSchedule.classMon[0] + "\n" + prof2.classSchedule.statusMon[0] + "\n\n\n";
                }
                else if (aday == "Tuesday")
                {
                    temp = prof1.classSchedule.tuesday[2] + "\n" + prof2.classSchedule.classTue[2] + "\n" + prof2.classSchedule.statusTue[2] + "\n\n\n";
                }
                else if (aday == "Wednesay")
                {
                    temp = prof2.classSchedule.wednesday[0] + "\n" + prof2.classSchedule.classWed[0] + "\n" + prof2.classSchedule.statusWed[0] + "\n\n\n";
                }
                else if (aday == "Thursday")
                {
                    for (int i = 1; i < 3; i++) {
                        temp = prof1.classSchedule.thursday[i] + "\n" + prof1.classSchedule.classThu[i] + "\n" + prof1.classSchedule.statusThu[i] + "\n\n\n";
                    }
                }
                else if (aday == "Friday")
                {
                    temp = prof2.classSchedule.friday[0] + "\n" + prof1.classSchedule.classFri[0] + "\n" + prof1.classSchedule.statusFri[0] + "\n\n\n";
                }
                else if (aday == "Saturday")
                {
                    temp = "No class for Room" + aroom + "on" + aday;
                }
            }
            else if (aroom == "N309")
            {
                if (aday == "Monday")
                {
                    temp = "No class for Room" + aroom + "on" + aday;
                }
                else if (aday == "Tuesday")
                {
                    temp = prof1.classSchedule.tuesday[0] + "\n" + prof1.classSchedule.classTue[0] + "\n" + prof1.classSchedule.statusTue[0] + "\n\n\n";
                }
                else if (aday == "Wednesay")
                {
                    temp = "No class for Room" + aroom + "on" + aday;
                }
                else if (aday == "Thursday")
                {
                    temp = prof1.classSchedule.thursday[0] + "\n" + prof1.classSchedule.classThu[0] + "\n" + prof1.classSchedule.statusThu[0] + "\n\n\n";
                }
                else if (aday == "Friday")
                {
                    temp = "No class for Room" + aroom + "on" + aday;
                }
                else if (aday == "Saturday")
                {
                    temp = prof1.classSchedule.saturday[0] + "\n" + prof1.classSchedule.classSat[0] + "\n" + prof1.classSchedule.statusSat[0] + "\n\n\n";
                }
            }
            return temp;
        }

};
//
//FUNCTION DECLARATION
//
void declare(Professor& prof1, Professor& prof2, Staff& staff1) {
    //
    //Professor Horti//
    //
    prof1.setName("Carlos Hortinela");
    prof1.setEmail("CCHortinela@mapua.edu.ph");
    prof1.setProfessorID("123456");
    prof1.setContactNumber("09177905557");

    prof1.classSchedule.monday[0] = "9:00 AM - 10:30 AM\n";
    prof1.classSchedule.monday[1] = "1:30 PM - 3:00 PM\n";
    prof1.classSchedule.monday[2] = "3:00 PM - 4:30 PM\n";

    prof1.classSchedule.tuesday[0] = "9:00 AM - 10:30 AM\n";
    prof1.classSchedule.tuesday[1] = "12:00 PM - 1:30 PM\n";
    prof1.classSchedule.tuesday[2] = "1:30 PM - 3:00 PM\n";

    prof1.classSchedule.wednesday[0] = "9:00 AM - 10:30 AM\n";
    prof1.classSchedule.wednesday[1] = "1:30 PM - 3:00 PM\n";

    prof1.classSchedule.thursday[0] = "9:00 AM - 10:30 AM\n";
    prof1.classSchedule.thursday[1] = "12:00 PM - 1:30 PM\n";
    prof1.classSchedule.thursday[2] = "1:30 PM - 3:00 PM\n";


    prof1.classSchedule.friday[0] = "9:00 AM - 10:30 AM\n";
    prof1.classSchedule.friday[1] = "1:30 PM - 3:00 PM\n";
    prof1.classSchedule.friday[2] = "3:00 PM - 4:30 PM\n";

    prof1.classSchedule.saturday[0] = "9:00 AM - 10:30 AM\n";
    prof1.classSchedule.saturday[1] = "12:00 PM - 1:30 PM\n";
    prof1.classSchedule.saturday[2] = "1:30 PM - 3:00 PM\n";

    //course, room and section//
    prof1.classSchedule.classMon[0] = "Course: CPE111-4 \n Block: E02 \n Room: N301";
    prof1.classSchedule.classMon[1] = "Course: CPE115-4 \n Block: B1 \n Room: N301";
    prof1.classSchedule.classMon[2] = "Course: CPE115-4 \n Block: B2 \n Room: N311";

    prof1.classSchedule.classTue[0] = "Course: CPE111-4 \n Block: E04 \n Room: N309";
    prof1.classSchedule.classTue[1] = "Course: CPE115-4 \n Block: E05 \n Room: N303";
    prof1.classSchedule.classTue[2] = "Course: CPE115-4 \n Block: B3 \n Room: N303";

    prof1.classSchedule.classWed[0] = "Course: CPE111-4 \n Block: E02 \n Room: N301";
    prof1.classSchedule.classWed[1] = "Course: CPE115-4 \n Block: B1 \n Room: N301";

    prof1.classSchedule.classThu[0] = "Course: CPE111-4 \n Block: E04 \n Room: N309";
    prof1.classSchedule.classThu[1] = "Course: CPE115-4 \n Block: E05 \n Room: N303";
    prof1.classSchedule.classThu[2] = "Course: CPE115-4 \n Block: B3 \n Room: N303";


    prof1.classSchedule.classFri[0] = "Course: CPE111-4 \n Block: E02 \n Room: N301";
    prof1.classSchedule.classFri[1] = "Course: CPE115-4 \n Block: B1 \n Room: N301";
    prof1.classSchedule.classFri[2] = "Course: CPE115-4 \n Block: B2 \n Room: N311";

    prof1.classSchedule.classSat[0] = "Course: CPE111-4 \n Block: E04 \n Room: N309";
    prof1.classSchedule.classSat[1] = "Course: CPE111-4 \n Block: E05 \n Room: N301";
    prof1.classSchedule.classSat[2] = "Course: CPE115-4 \n Block: B3 \n Room: N301";

    //Set status to Not Yet Updated//
    fill_n(prof1.classSchedule.statusMon, 3, "Not Yet Updated");
    fill_n(prof1.classSchedule.statusTue, 3, "Not Yet Updated");
    fill_n(prof1.classSchedule.statusWed, 2, "Not Yet Updated");
    fill_n(prof1.classSchedule.statusThu, 3, "Not Yet Updated");
    fill_n(prof1.classSchedule.statusFri, 3, "Not Yet Updated");
    fill_n(prof1.classSchedule.statusSat, 3, "Not Yet Updated");

    //
    //Prof Ivan Von Villamor//
    //
    prof2.setName("Isagani Von Villamor");
    prof2.setEmail("IVVillamor@mapua.edu.ph");
    prof2.setProfessorID("78910");
    prof2.setContactNumber("09174503457");

    prof2.classSchedule.monday[0] = "9:00 AM - 10:30 AM\n";
    prof2.classSchedule.monday[1] = "1:30 PM - 3:00 PM\n";
    prof2.classSchedule.monday[2] = "\n";

    prof2.classSchedule.tuesday[0] = "3:00P PM - 4:30PM\n";
    prof2.classSchedule.tuesday[1] = "\n";
    prof2.classSchedule.tuesday[2] = "\n";

    prof2.classSchedule.wednesday[0] = "9:00 AM - 10:30 AM\n";
    prof2.classSchedule.wednesday[1] = "1:30 PM - 3:00 PM\n";

    prof2.classSchedule.thursday[0] = "\n";
    prof2.classSchedule.thursday[1] = "\n";
    prof2.classSchedule.thursday[2] = "\n";


    prof2.classSchedule.friday[0] = "9:00 AM - 10:30 AM\n";
    prof2.classSchedule.friday[1] = "1:30 PM - 3:00 PM\n";
    prof2.classSchedule.friday[2] = "\n";

    prof2.classSchedule.saturday[0] = "3:00 PM - 4:30 PM\n";
    prof2.classSchedule.saturday[1] = "4:30 PM - 9:00 PM\n";
    prof2.classSchedule.saturday[2] = "\n";

    //course, room and section//
    prof2.classSchedule.classMon[0] = "Course: CPE108-4 \n Block: A1 \n Room: N303";
    prof2.classSchedule.classMon[1] = "Course: ECEA105-4 \n Block: E01 \n Room: N307";
    prof2.classSchedule.classMon[2] = "";

    prof2.classSchedule.classTue[0] = "Course: CPE123-4 \n Block: E01 \n Room: N301"; //
    prof2.classSchedule.classTue[1] = "";
    prof2.classSchedule.classTue[2] = "";

    prof2.classSchedule.classWed[0] = "Course: CPE108-4 \n Block: A1 \n Room: N303";
    prof2.classSchedule.classWed[1] = "Course: ECEA105-4 \n Block: E01 \n Room: N307";

    prof2.classSchedule.classThu[0] = "";
    prof2.classSchedule.classThu[1] = "";
    prof2.classSchedule.classThu[2] = "";

    prof2.classSchedule.classFri[0] = "Course: CPE108-4 \n Block: A1 \n Room: N303";
    prof2.classSchedule.classFri[1] = "Course: ECEA105 \n Block: E01 \n Room: N307";
    prof2.classSchedule.classFri[2] = "";

    prof2.classSchedule.classSat[0] = "Course: CPE199R-4 \n Block: A1 \n Room: N301"; //
    prof2.classSchedule.classSat[1] = "Course: CPE107-4 \n Block: E02 \n Room: N301"; //
    prof2.classSchedule.classSat[2] = "";

    //Set status to Not Yet Updated//
    fill_n(prof2.classSchedule.statusMon, 3, "Not Yet Updated");
    fill_n(prof2.classSchedule.statusTue, 3, "Not Yet Updated");
    fill_n(prof2.classSchedule.statusWed, 2, "Not Yet Updated");
    fill_n(prof2.classSchedule.statusThu, 3, "Not Yet Updated");
    fill_n(prof2.classSchedule.statusFri, 3, "Not Yet Updated");
    fill_n(prof2.classSchedule.statusSat, 3, "Not Yet Updated");
    //
    //Staff: Von
    //
    staff1.setName("Von Andrei Sorongon");
    staff1.setEmail("vassorongon@mymail.mapua.edu.ph");
    staff1.setStaffID("2023101303");
    staff1.setContactNumber("09174503123");
}
#endif

