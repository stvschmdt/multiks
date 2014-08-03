#ifndef FORECAST_H_
#define FORECAST_H_

#include <ctime>
#include <iostream>
using std::string;

class Client{
    private:
	std::string accName = "Null";
	std::string accManager = "Null";
	double totalDHours_C;
	double totalWKHours_C;
	double totalYTDHours_C;
	double conHours;
    public:
	Client(std::string name, std::string manager); 
	double ytdHours() const;
	double wkHours() const;
	double dHours() const;
	int setHours();
	std::string getName() const;
};

class Timecard{
    private:
	int week;
	int day;
	double projectID;
	int employeeID;
	int timecardID;
	double workingHours;
    public:
	Timecard();
	int getCurrentWeek() const;
	int getDay();
	double getWorkingHours() const;
	int getProjectID() const;
	int setCurrWeek(int n);
	int setDay(int n);
	int newProjectID(int n);
	int resetProjectID(int n);
	double setWorkingHours(double n);
};

class Project{
    private:
	string projName = "NULL";
	struct tm *projStart;
	struct tm *projEnd;
	double accountManagerID;
	double jobID;
    public:
	Project(struct tm * start, struct tm * end);
	int getProjName() const;
	int getProjStart() const; //holder
	int getProjEnd() const; // same, making these time structs
	int getAccountManager() const;
	int getJobID() const;
	int setProjName(string nm);
	int setProjStart();
	int setProjEnd();
	int setProjAcccountManager(string nm);
	int setJobID(int n);

};

class Employee{
    private:
	int empID;
	string name = "NULL";
	string title = "NULL";
	int titleNum;
	string department = "NULL";
	int departmentNum;
	int numAccounts;
    public:
	Employee(string nm);
	string getEmpName() const;
	int getEmpID() const;
	int getTitleNum() const;
	int getDepartmentNum() const;
	int getNumAccounts() const;
	int setEmpName(string newName);
	int setEmpTitle(string newTitle);
	int setEmpDepartment(string newDept);
};


#endif
