#define MAXIMUM_STUDENTS 1000
#define CHARACTERS 10000

typedef struct
{
    int bir;
    int thd;
    int ate;
}day;

struct student{
    char studentID[CHARACTERS];
    char lastName[CHARACTERS];
    char firstName[CHARACTERS];
    day birthdate;
    float algebraGrade;
    float calculusGrade;
    float programmingGrade;
    float gpa;
};
