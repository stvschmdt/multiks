#include "forecast.h"
using std::string;


//Client class methods
Client::Client(string name, string manager){
    accName = name;
    accManager = manager;
}

double Client::ytdHours() const{
    return totalYTDHours_C;
}

double Client::wkHours() const{
    return totalWKHours_C;
}
double Client::dHours() const{
    return totalDHours_C;
}

string Client::getName() const{
    return accName;
}

int Client::setHours(){
    return 0;
}


//Timecard class methods
Timecard::Timecard(){

}

int Timecard::getCurrentWeek() const{ 
    return week;
}

int Timecard::getDay(){
    return day;
}
double Timecard::getWorkingHours() const{
    return workingHours;
}
int Timecard::getProjectID() const{
    return projectID;
}
int Timecard::setCurrWeek(int n){
    week = n;
    return 0;
}

int Timecard::setDay(int n){
    day =n;
    return 0;
}

int Timecard::newProjectID(int n){
    projectID = n;
    return 0;
}

int Timecard::resetProjectID(int n){
    projectID = n;
    return 0;
}

double Timecard::setWorkingHours(double n){
    workingHours = n;
    return workingHours;
}


//Employee class methods
Employee::Employee(string nm){
    name = nm;
}

std::string Employee::getEmpName() const{
    return name;
}

int Employee::getEmpID() const{
    return empID;
}

int Employee::getTitleNum() const{
    return titleNum;
}

int Employee::getDepartmentNum() const{
    return departmentNum;
}

int Employee::getNumAccounts() const{
    return numAccounts;
}

int Employee::setEmpName(std::string nm){
    name = nm;
    return 0;
}

int Employee::setEmpTitle(std::string nm){
    title = nm;
    return 0;
}

int Employee::setEmpDepartment(std::string nm){
    department = nm;
    return 0;
}

//Project methods
Project::Project(struct tm * start, struct tm *end){
}

int Project::getProjName() const{
    return 0;
}

int Project::getProjStart() const{
    return 0;

}

int Project::getProjEnd() const{
    return 0;

}

int Project::getAccountManager() const{
    return 0;

}

int Project::getJobID() const{
    return 0;

}

int Project::setProjName(std::string nm){
    projName = nm;
    return 0;
}

int Project::setProjStart(){
    return 0;

}

int Project::setProjEnd(){
    return 0;

}
int Project::setProjAcccountManager(string nm){
    return 0;
}

int Project::setJobID(int n){
    jobID = n;
    return 0;
}


int main(){
    Client xyz ("xyzcorp", "joe");
    Employee finn ("finn");
    std::cout << "\n" << xyz.getName() << "\n";
    std::cout << "\n" << finn.getEmpName() << "\n";
    return 0;
}
