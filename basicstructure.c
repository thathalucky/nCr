  #include<stdio.h>
#include<string.h>

struct Student
{
    char name[25];
    int mathsmarks;
    float percentage;
};


int main (){

 struct Student r;
 r.mathsmarks = 79;

 r.percentage =79.00;
 strcpy(r.name,"Raju");

 printf("Student Name is : %s\n",r.name);
 printf("Student Maths Marks  is : %d\n",r.mathsmarks);
 printf("Student Maths Marks Percentage  is : %f\n",r.percentage);

 struct Student l;
 l.mathsmarks=89;
 l.percentage=89.00;
 strcpy(l.name,"Lakshman");

 printf("Student name is : %s\n",l.name);
 printf("Student Maths marks is %d\n",l.mathsmarks);
 printf("Student percentile in Mathematics is %f\n",l.percentage);

 struct Student s ;
 s.mathsmarks = 100;
 s.percentage=100;
 strcpy(s.name,"Sukanya");

 printf("Student name is : %s\n",s.name);
 printf("Student Maths marks is %d\n",s.mathsmarks);
 printf("Student percentile in Mathematics is %f\n",s.percentage);



    return 0 ;
}
