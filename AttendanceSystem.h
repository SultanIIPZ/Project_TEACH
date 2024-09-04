#pragma once
#ifndef AttendanceSystem_H 

#define AttendanceSystem_H 



#include <string> 
#include "Professor.h" 
#include "Staff.h" 
using namespace std;



class AttendanceSystem {

private:

    string staffRecords = "";
    string classSchedule;
public:
    //
    //CONSTRUCTOR//
    //
    AttendanceSystem() {
    }
    //returns a string tha contains the professors' number pf presents, lates, and absents//
    string generateAttendanceReport(Professor prof1, Professor prof2) {
        string temporary = "                                                                     Present                                Late                           Absent\n" +
            prof1.getName() + "                                              " + prof1.getPresent() + "                                     " + prof1.getLate() + "                                     " + prof1.getAbsent() + "\n" +
            prof2.getName() + "                                      " + prof2.getPresent() + "                                     " + prof2.getLate() + "                                     " + prof2.getAbsent() + "\n";
        
        classSchedule = temporary;
        return temporary;
    }
    //returns the sum of all the staff records//
    string generateStaffReport() {
        return staffRecords;
    }
    //updates the staff records by adding the different attendance reports into one string [staffRecords]//
    void addAttendanceReports(string aAttendanceReport, int aUpdateNum) {
        string updateNumStr = to_string(aUpdateNum);
        staffRecords += "Update Number: " + updateNumStr + "\n" + aAttendanceReport + "\n";    
    }
};
#endif 

