#include <stdio.h>

// Define a structure
struct Person {
    char name[20];
    int age;
};

// Define a union
union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
	
	
    struct Person person;
    strcpy(person.name, "John");
    person.age = 30;

    printf("Structure Example:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Size of Structure: %lu bytes\n\n", sizeof(struct Person));

    
    union Data data;
    data.intValue = 10;
    printf("Union Example:\n");
    printf("Integer Value: %d\n", data.intValue);

    data.floatValue = 3.14;
    printf("Float Value: %f\n", data.floatValue);

    strcpy(data.stringValue, "Hello");
    printf("String Value: %s\n", data.stringValue);

    printf("Size of Union: %lu bytes\n", sizeof(union Data));

    return 0;
}

