#include<stdio.h>
#include<stdlib.h>

struct StudentDatabase  // student database structure
{
    int rollno;
    float marks;
    char name[20];
    struct StudentDatabase *next;
};

typedef struct StudentDatabase studentDatabase;

///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will create a single record always at begining of student database
* args: Address of head pointer
* ret : Nothing
*/
void addStudentRecordBegin(studentDatabase **);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will create a single record always at the end of student database
* args: Address of head-pointer
* ret : Nothing
*/
void addStudentRecordEnd(studentDatabase **);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will create a singlr record based on rollno (ascending order) of student database
* args: Address of head-pointer
* ret : Nothing
*/
void addStudentRecordMiddle(studentDatabase **);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will print entire student database
* args: Head-pointer
* ret : Nothing
*/
void printStudentDatabase(studentDatabase *);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will count all available records in student database (RAM)
* args: Head-pointer
* ret : Integer (Total records)
*/
int countAllRecordsInDatabase(studentDatabase *);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will stores entire student database to persistent storage (In file)
* args: Head-pointer
* ret : Nothing
*/
void saveAllRecordToStorage(studentDatabase *);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will read student database from persistent storage (From file)
* args: Address of head-pointer
* ret : Nothing
*/
void readAllRecordFromStorage(studentDatabase **);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will print entire student database using recursion
* args: Head-pointer
* ret : Nothing
*/
void printStudentRecordsUsingRecursion(studentDatabase *);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will print entire student database in reverse order using recursion
* args: Head-pointer
* ret : Nothing
*/
void printStudentRecordsInReverseUsingRecursion(studentDatabase *);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will print entire student database in reverse order
* args: Head-pointer
* ret : Nothing
*/
void printStudentDatabaseInReverse(studentDatabase *);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will sort All student records based on roll number in ascending order
* args: Head-pointer
* ret : Nothing
*/
void sortAllStudentRecords(studentDatabase *);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will reverse entire student database
* args: Head-pointer
* ret : Nothing
*/
void reverseAllStudentRecords(studentDatabase *);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will delete the entire student database (from RAM)
* args: Address of head-pointer
* ret : Nothing
*/
void deleteEntireStudentDatabase(studentDatabase **);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will delete the single student record based on roll number (From RAM)
* args: Address of head-pointer
* ret : Nothing
*/
void deleteSingleStudentRecord(studentDatabase **);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will delete the single student record based on the position of that record in
*       student database (From RAM) 
* args: Address of head-pointer
* ret : Nothing
*/
void deleteSingleStudentRecordBasedOnPosition(studentDatabase **);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will search a particular student record in database base on the roll number
* args: Head-pointer
* ret : Nothing
*/
void searchStudentRecordFromDatbase(studentDatabase *);
///////////////////////////////////////////////////////////////////////////////////////////////

/*
* desc: It will reverse all the links of records those are in student database
* args: Address of head-pointer
* ret : Nothing
*/
void reverseTheLinkOfStudentDatabase(studentDatabase **);
///////////////////////////////////////////////////////////////////////////////////////////////