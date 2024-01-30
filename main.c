#include"header.h"

void main()
{
    studentDatabase *headptr=0; // for empty database default value = 0
    int choice;

    while(1)
    {
        printf(" 1) Add begin      2) Add end        3) Add middle     4) Print node\n");
        printf(" 5) count node     6) save file      7) read file      8) print rec\n");
        printf(" 9) reverse rec   10) reverse print 11) sort data     12) reverse data\n");
        printf("13) delete all    14) delete node   15) search node   16) delete position\n");
        printf("17) reverse links 18) exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case  1:    addStudentRecordBegin(&headptr);                        break;
            case  2:    addStudentRecordEnd(&headptr);                          break;
            case  3:    addStudentRecordMiddle(&headptr);                       break;
            case  4:    printStudentDatabase(headptr);                          break;
            case  5:    printf("\nTotal records in database: %d\n\n", countAllRecordsInDatabase(headptr)); break;
            case  6:    saveAllRecordToStorage(headptr);                        break;
            case  7:    readAllRecordFromStorage(&headptr);                     break;
            case  8:    printStudentRecordsUsingRecursion(headptr);             break;
            case  9:    printStudentRecordsInReverseUsingRecursion(headptr);    break;
            case 10:    printStudentDatabaseInReverse(headptr);                 break;
            case 11:    sortAllStudentRecords(headptr);                         break;
            case 12:    reverseAllStudentRecords(headptr);                      break;
            case 13:    deleteEntireStudentDatabase(&headptr);                  break;
            case 14:    deleteSingleStudentRecord(&headptr);                    break;
            case 15:    deleteSingleStudentRecordBasedOnPosition(&headptr);     break;
            case 16:    searchStudentRecordFromDatbase(headptr);                break;
            case 17:    reverseTheLinkOfStudentDatabase(&headptr);              break;
            case 18:    exit(0);
            default:    printf("Invalid choice!!!\n\n");
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////

void reverseTheLinkOfStudentDatabase(studentDatabase **ptr)
{

}
///////////////////////////////////////////////////////////////////////////////////////////////

void searchStudentRecordFromDatbase(studentDatabase *ptr)
{

}
///////////////////////////////////////////////////////////////////////////////////////////////

void deleteSingleStudentRecordBasedOnPosition(studentDatabase **ptr)
{

}
///////////////////////////////////////////////////////////////////////////////////////////////

void deleteSingleStudentRecord(studentDatabase **ptr)
{

}
///////////////////////////////////////////////////////////////////////////////////////////////

void deleteEntireStudentDatabase(studentDatabase **ptr)
{

}
///////////////////////////////////////////////////////////////////////////////////////////////

void reverseAllStudentRecords(studentDatabase *ptr)
{

}
///////////////////////////////////////////////////////////////////////////////////////////////

void sortAllStudentRecords(studentDatabase *ptr)
{

}
///////////////////////////////////////////////////////////////////////////////////////////////

void printStudentDatabaseInReverse(studentDatabase *ptr)
{

}
///////////////////////////////////////////////////////////////////////////////////////////////

void printStudentRecordsInReverseUsingRecursion(studentDatabase *ptr)
{

}
///////////////////////////////////////////////////////////////////////////////////////////////

void printStudentRecordsUsingRecursion(studentDatabase *ptr)
{

}
///////////////////////////////////////////////////////////////////////////////////////////////

void readAllRecordFromStorage(studentDatabase **ptr)
{

}
///////////////////////////////////////////////////////////////////////////////////////////////

void saveAllRecordToStorage(studentDatabase *ptr)
{
    
}
///////////////////////////////////////////////////////////////////////////////////////////////

int countAllRecordsInDatabase(studentDatabase *ptr)
{
    if(ptr == 0)    // checking if records are availabe or not
        return 0;

    int count=0;
    while(ptr)    // untill last record
    {
        count++;
        ptr = ptr->next;     // next record
    }
    return count;
}
///////////////////////////////////////////////////////////////////////////////////////////////

void printStudentDatabase(studentDatabase *ptr)
{
    printf("\n\n\n");
    if(ptr == 0)    // checking if records are availabe or not
    {
        printf("No records found...\n");
        printf("\n\n\n");
        return;
    }

    while(ptr)    // untill last record
    {
        printf("%d %s %f\n", ptr->rollno, ptr->name, ptr->marks);     // print record
        ptr = ptr->next;                                            // next record
    }
    printf("\n\n\n");
}
///////////////////////////////////////////////////////////////////////////////////////////////

void addStudentRecordMiddle(studentDatabase **ptr)
{
    studentDatabase *newRecord = malloc(sizeof(studentDatabase));     // creating dynamic memory

    printf("Enter the student roll number, name and marks...\n");
    scanf("%d%s%f", &newRecord->rollno, newRecord->name, &newRecord->marks); // scanning students data

    // check if no records or new records roll no is less than 1st record -> update head-ptr
    if((*ptr == 0) || (newRecord->rollno < (*ptr)->rollno))
    {
        newRecord->next = *ptr;
        *ptr = newRecord;
    }
    else    // find the place according to roll no ascending order
    {
        studentDatabase *lastRecord = *ptr;

        // To find the place to store a record
        while((lastRecord->next) && (lastRecord->next->rollno < newRecord->rollno))
            lastRecord = lastRecord->next;

        newRecord->next = lastRecord->next; // update new records next address
        lastRecord->next = newRecord;       // update last records next address (= new)
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////

void addStudentRecordEnd(studentDatabase **ptr)
{
    studentDatabase *newRecord = malloc(sizeof(studentDatabase));     // creating dynamic memory

    printf("Enter the student roll number, name and marks...\n");
    scanf("%d%s%f", &newRecord->rollno, newRecord->name, &newRecord->marks); // scanning students data

    newRecord->next = 0;    // always at the end

    if(*ptr == 0)   // if no records in database
        *ptr = newRecord;
    else
    {
        studentDatabase *lastRecord=*ptr;    // head-ptr

        while(lastRecord->next)     // iterate to last available record
            lastRecord = lastRecord->next;
        lastRecord->next = newRecord;   // update the last record
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////

void addStudentRecordBegin(studentDatabase **ptr)
{
    studentDatabase *newRecord = malloc(sizeof(studentDatabase));     // creating dynamic memory

    printf("Enter the student roll number, name and marks...\n");
    scanf("%d%s%f", &newRecord->rollno, newRecord->name, &newRecord->marks); // scanning students data

    newRecord->next = *ptr;
    *ptr = newRecord;
}
///////////////////////////////////////////////////////////////////////////////////////////////