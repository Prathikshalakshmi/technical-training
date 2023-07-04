 typedef struct student{
 int rollno;
 char name[30];
 double cgpa;
 } student;

 void printData(student s){
    printf("Roll Number : %d\n", s.rollno);
    printf("Student Name: %s\n", s.name);
    printf("CGPA        : %.2lf\n", s.cgpa);
 }

 student getData(){
    student s;
    printf("Roll Number : ");
    scanf("%d", &s.rollno);
    printf("Student Name: ");
    scanf("%s", s.name);
    printf("CGPA        :");
    scanf("%lf", &s.cgpa);
    return s;
    }
