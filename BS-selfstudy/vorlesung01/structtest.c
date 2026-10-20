#include <stdio.h>
// incldue string.h for the strcpy
#include <string.h>

// declaring a global struct point
struct point
{
    int x;
    int y;
}; // extra semicolon at the end

// declaring global struct student
struct student
{
    char first_name[20]; // String buffer for 19 letters plus trailing /0
    char last_name[20];
    unsigned long id;
};

// student with a String Pointer instead
struct student_wp
{
    char *pFirst_name;
    char *pSecond_name;
    unsigned long id;
};

// start of main
int main(void)
{
    /* commented out to take the struct out to global
    struct point
    {           // I can add a name to the struct
        int x;  // struct field
        int y;  // struct filed
    } myPointA; // variable name
    */
    struct point myPointA; // now the myPointA instance is created using the global struct point!
    myPointA.x = 4;        // I can now access the parameters from the struct and change the parameters under it
    myPointA.y = 2;        // simillar to objects in Java and Python

    // I can reuse the same struct now to create a new variable point
    struct point myPointB; // we are using the struct by calling the tag 'point'
    myPointB.x = 6;
    myPointB.y = 5;

    // Creating student with the string array
    struct student adam = {"Adam", "Alkhatib", 2705UL}; // one way to create a struct populate

    // creating a struct without populating fields
    struct student adam2;
    strcpy(adam2.first_name, "Adam");    // have to use strcpy to change static strings
    strcpy(adam2.last_name, "Alkhatib"); // strcpy needed again
    adam2.id = 2705UL;

    // Trying the same thing with the pointer arrays
    struct student_wp vici = {"vici", "masic", 1806UL}; // this works same as above

    // creating a struct without populating fields
    struct student_wp vici2;
    vici2.pFirst_name = "vici";
    vici2.pSecond_name = "masic";
    vici2.id = 1806UL;

    puts("Hello!"); // puts is amazing for one liners instead of printf!
    // end of main
    return 0;
}