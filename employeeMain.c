#include "employee.h"

int main (void) {
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char* nameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char* phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);
    

    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    //search by number
    PtrToEmployee matchPtr;
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);
    if (matchPtr != NULL)
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID is NOT found in the record\n");

    //search by name
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Dorris Perl");
    if (matchPtr != NULL)
        printf("Employee Dorris Perl is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Dorris Perl is NOT founf in the record\n");

    //search by phone
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "213-555-1212");
    if (matchPtr != NULL)
        printf("Employee's phone number 213-555-1212 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee's phone number 213-555-1212 is NOT found in the record\n");

    //search by salary
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 1000.3);
    if (matchPtr != NULL)
        printf("Employee's salary 1000.3 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee's salary 1000.3 is NOT found in the record\n");
    
}