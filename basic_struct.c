#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct _person {
        char* firstName;
            char* lastName;
                char* title;
                    unsigned int age;
} Person;

int main()
{
        Person person;
            Person *ptrPerson;
                
                
                person.firstName = (char*)malloc(strlen("Kanna")+1);
                    strcpy(person.firstName,"Check");
                        person.age = 23;
                            
                            ptrPerson = (Person*)malloc(sizeof(Person));
                                ptrPerson->firstName = (char*)malloc(strlen("Kannappanchidambaram")+1);
                                    strcpy(ptrPerson->firstName,"PointerCheck");
                                        ptrPerson->age = 24;
                                            
                                            Person *ptrPerson1;
                                                
                                                ptrPerson1 = (Person*)malloc(sizeof(Person));
                                                    (*ptrPerson1).firstName = (char*)malloc(strlen("checkTest")+1);
                                                        strcpy((*ptrPerson1).firstName,"Pointer");
                                                            
                                                            (*ptrPerson1).age =25;
                                                                
                                                                printf("end of compilation");
                                                                    return 0;
}
