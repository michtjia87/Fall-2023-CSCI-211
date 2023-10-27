#include <iostream>
// Michelle Tjia CS211 Quiz #2

/* 1. Pointers are fundamental concept for programming languages such as C++. Pointers are used to store the memory address of a variable, which can be useful for tasks like arrays. 

To declare a pointer you would need the '*' symbol. For example, data_type *int_ptr which declares an integer pointer. 

You can assign the memory address of an existing variable to a pointer using the address-of operator &. This operator returns the memory address of the variable.

For Example : 
int x = 10; Declare and initialize an integer variable
int *ptr = &x Assign the address of 'x' to the 'ptr' pointer
 The pointer variable itself is typically stored on the stack, so it has its own memory location.
//When you assign the address of an existing variable to a pointer, the pointer now contains the memory address of that variable. The memory location of the variable pointed to is on the stack or in other memory areas, depending on the variable's scope and type.

//b

     int main() {

    float weight = 5.9; 

    char middleInitial = 'B';


    // Declaration of float pointer

    float *floatPointer;


    // Assignment of float pointer

    floatPointer = &weight;


    // Initialization of float pointer

    float *anotherFloatPointer = NULL; // Initialize with NULL


    // Declaration of char pointer

    char *charPointer;


    // Assignment of char pointer

    charPointer = &middleInitial;


    // Initialization of char pointer

    char *anotherCharPointer = NULL; // Initialize with NULL


    // Output the values using the pointers

    printf("Value of weight: %f\n", *floatPointer);

    printf("Value of middleInitial: %c\n", *charPointer);


    return 0;

}

 C)
The integer pointer does not store the actual integer but rather the memory address of the integer variable.

D) Pointers do numerous things such as memory allocation and deallocation, data structure...Without pointers, the program would not be able to access the memory addresses of the variables. You would be constrained to fixed size data structure and a set amount of memory. Pointers are used as the foundation for the numerous algorithms that are used in C++. 


2)

int main() {

    // Initialize a character array called firstName with the letters of your first name

    char firstName[] = "Michelle"; 


    // Use a pointer to iterate through the characters in firstName

    char* ptr = firstName;


    // Loop through the array and output each character on a separate line

    while (*ptr != '\0') {

        putchar(*ptr); // Output the character

        putchar('\n'); // Output a newline character to separate the letters

        ptr++; // Move to the next character

    }

    return 0;

}

//5) 1. Initialize a float variable 'myValue' with a value of 10.0.

2. Declare three float variables: 'maybeFirst', 'maybeSecond', and a pointer 'maybeThird'. Only 'maybeSecond' is assigned a value of 5.0.

3. Attempt to assign the address of 'myValue' to 'maybeFirst'. This will result in a compilation error because 'maybeFirst' is declared as a float, not a pointer.

4. Enter a for loop that iterates from 0 to 3 with the variable 'i'.

5. Inside the loop, check if 'i' is even (i.e., 'i % 2 == 0'). If it's even, assign the address of 'maybeSecond' to the pointer 'maybeThird'. If it's odd, assign the address of 'myValue' to 'maybeThird'.

6. add the values they point to and store the result in 'myValue'. This effectively increments the value of 'myValue' by the value of either 'maybeSecond' or 'myValue', depending on the current value of 'i'.

7. After the loop, print the value of 'myValue'.
*/ 

