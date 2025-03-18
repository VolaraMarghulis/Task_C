#ifndef STRUCTSTD_H
#define STRUCTSTD_H
    
 typedef struct studentNode{
      char name[20];
      float grade;
        struct studentNode* next;
  } stnode_t;
  
  stnode_t* createStudent(char * name , float grade);
  stnode_t* addStudent();
  stnode_t* deleteStudent();
  void* viewListOfStudents();
  
#endif
