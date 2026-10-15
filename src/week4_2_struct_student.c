/*
 * week4_2_struct_student.c
 * Name: <Ibrahim Alizada>
 * Student ID: <251ADB242>
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Define a 'Student' struct with name, id and grade, create two
 *   instances with the values from the instructions, and print them.
 *
 *   This program reads no input. Output must match the format in the
 *   Week 4 instructions exactly (it is checked by the autograder).
 */

#include <stdio.h>
#include <string.h>

// Define struct Student
struct Student {
  char name[50];
  int id;
  float grade;
};

int main(void) {
  // Declare two Student variables
  struct Student s1;
  struct Student s2;

  // Assign values for Student 1
  strcpy(s1.name, "Alice Johnson");
  s1.id = 1001;
  s1.grade = 9.1f;

  // Assign values for Student 2
  strcpy(s2.name, "Bob Smith");
  s2.id = 1002;
  s2.grade = 8.7f;

  // Print each student
  printf("Student 1: %s, ID: %d, Grade: %.1f\n", s1.name, s1.id, s1.grade);
  printf("Student 2: %s, ID: %d, Grade: %.1f\n", s2.name, s2.id, s2.grade);

  return 0;
}