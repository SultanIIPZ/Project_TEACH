#pragma once
#ifndef AttendanceRecord_H 
#define AttendanceRecord_H 

#include <iostream>
#include <string> 
#include "Professor.h"
#include <algorithm>
#include "Staff.h"

using namespace std;


class AttendanceRecord {
    private:
        string professorID;
        string room;
        string time;
        string status;
        string staffID;
        string day;
    public:
        //
        //CONSTRUCTORS
        //
        AttendanceRecord(){
    
        }
        AttendanceRecord(string aTime, string aProfessorID, string aStatus, string aStaffID, string aDay, string aRoom){
            time = aTime;
            professorID = aProfessorID;
            status = aStatus;
            staffID = aStaffID;
            day = aDay;
            room = aRoom;
        }
        //
        //METHODS
        //
        //returns a string that contains a professor's time per day//
        string getTime(Professor prof1, string day){
            string ScheduleForTheDay = "";
            std::transform(day.begin(), day.end(), day.begin(), ::toupper);

            if (day == "MONDAY") {
                for (int i = 0; i < 3; i++) {
                    ScheduleForTheDay += prof1.classSchedule.monday[i] + "\n\n\n";
                }
            } 
            else if (day == "TUESDAY") { 
                for (int i = 0; i < 3; i++) {
                    ScheduleForTheDay += prof1.classSchedule.tuesday[i] + "\n\n\n";
                }
            }
            else if (day == "WEDNESDAY") {
                for (int i = 0; i < 2; i++) {
                    ScheduleForTheDay += prof1.classSchedule.wednesday[i] + "\n\n\n";
                }
            }
            else if (day == "THURSDAY") {
                for (int i = 0; i < 3; i++) {
                    ScheduleForTheDay += prof1.classSchedule.thursday[i] + "\n\n\n";
                }
            }
            else if (day == "FRIDAY") {
                for (int i = 0; i < 3; i++) {
                    ScheduleForTheDay += prof1.classSchedule.friday[i] + "\n\n\n";
                }
            }
            else if (day == "SATURDAY") {
                for (int i = 0; i < 3; i++) {
                    ScheduleForTheDay += prof1.classSchedule.saturday[i] + "\n\n\n";
                }
            }
            else {
                ScheduleForTheDay = "Cannot be Found.";
            }

            return ScheduleForTheDay;
        }
        //returns a string that contains the contain the time, and status of the professor per day//
        string getDetails(Professor prof1, string day) {
            string DetailsForTheDay = "";
            transform(day.begin(), day.end(), day.begin(), ::toupper); //caps lock every letter//

            if (day == "MONDAY") {
                for (int i = 0; i < 3; i++) {
                    DetailsForTheDay += "Time: " + prof1.classSchedule.monday[i]
                                          + prof1.classSchedule.classMon[i] + "\n" 
                                          + "Status: " + prof1.classSchedule.statusMon[i] + "\n\n\n";
                }
            }
            else if (day == "TUESDAY") {
                for (int i = 0; i < 3; i++) {
                    DetailsForTheDay += "Time: " + prof1.classSchedule.tuesday[i]
                        + prof1.classSchedule.classTue[i] + "\n"
                        + "Status: " + prof1.classSchedule.statusTue[i] + "\n\n\n";
                }
            }
            else if (day == "WEDNESDAY") {
                for (int i = 0; i < 2; i++) {
                    DetailsForTheDay += "Time: " + prof1.classSchedule.wednesday[i]
                        + prof1.classSchedule.classWed[i] + "\n"
                        + "Status: " + prof1.classSchedule.statusWed[i] + "\n\n\n";
                }
            }
            else if (day == "THURSDAY") {
                for (int i = 0; i < 3; i++) {
                    DetailsForTheDay += "Time: " + prof1.classSchedule.thursday[i]
                        + prof1.classSchedule.classThu[i] + "\n"
                        + "Status: " + prof1.classSchedule.statusThu[i] + "\n\n\n";
                }
            }
            else if (day == "FRIDAY") {
                for (int i = 0; i < 3; i++) {
                    DetailsForTheDay += "Time: " + prof1.classSchedule.friday[i]
                        + prof1.classSchedule.classFri[i] + "\n"
                        + "Status: " + prof1.classSchedule.statusFri[i] + "\n\n\n";
                }
            }
            else if (day == "SATURDAY") {
                for (int i = 0; i < 3; i++) {
                    DetailsForTheDay += "Time: " + prof1.classSchedule.saturday[i]
                        + prof1.classSchedule.classSat[i] + "\n"
                        + "Status: " + prof1.classSchedule.statusSat[i] + "\n\n\n";
                }
            }
            else {
                DetailsForTheDay = "Cannot be Found.";
            }

            return DetailsForTheDay;
        }
        //returns a string that contains the prof ID, staff ID, day, room, time, and status of the attendance report//
        string printAttendanceReport() {
            string TemporaryAttendanceReport = "Prof ID: " + professorID + "\n" +
                "Staff ID: " + staffID + "\n" +
                "Day: " + day + "\n" +
                "Room: " + room + "\n" +
                "Time: " + time +
                "Status: " + status + "\n";
            return TemporaryAttendanceReport;
        }
        void updateStatus(string aStatus) {
            status = aStatus;
        }
};



#endif 