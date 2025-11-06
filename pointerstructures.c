#include<stdio.h>
#include<string.h>

struct Student
{
    char name[100];
    int roll;
    float grade;
};
int main(){

  struct Student s1={"Lakshman",1224,100.0};
  struct Student *ptr = &s1;
  printf("The name of the Student is %s\n",(*ptr).name);
  printf("The Roll number of the Student is %d\n",(*(&s1)).roll);
  printf("The Grade of the Student all over the 1st Year is %f\n",(*ptr).grade);



    return 0 ;
}
