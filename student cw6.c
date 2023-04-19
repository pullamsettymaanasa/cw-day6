#include <stdio.h>
#include <string.h>

struct Student 
{
  char name[50];
  int age;
};

void display_Student_Details(struct Student s) 
{
  printf("Name: %s\n", s.name);
  printf("Age: %d\n", s.age);
}

int main() 
{
  struct Student student1,student2;
  strcpy(student1.name, "Mahendra");
  student1.age = 20;
  display_Student_Details(student1);
  strcpy(student2.name, "jay");
  student2.age = 19;
  display_Student_Details(student2);
  return 0;
}
