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
            case  5:    printf("\nTotal records in database: %d\n", countAllRecordsInDatabase(headptr)); break;
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

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////

void printStudentDatabase(studentDatabase *ptr)
{

}
///////////////////////////////////////////////////////////////////////////////////////////////

void addStudentRecordMiddle(studentDatabase **ptr)
{

}
///////////////////////////////////////////////////////////////////////////////////////////////

void addStudentRecordEnd(studentDatabase **ptr)
{

}
///////////////////////////////////////////////////////////////////////////////////////////////

void addStudentRecordBegin(studentDatabase **ptr)
{

}
///////////////////////////////////////////////////////////////////////////////////////////////