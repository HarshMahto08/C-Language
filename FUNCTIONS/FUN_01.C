//Type 1: No Arguments, No Return (The Lazy Function)
//Use case: Printing a menu or a welcome message.
void greet() {
    printf("Welcome to the program!\n");
    // No 'return' keyword needed because it is void
}
int main() {
    greet(); // Just calls it. Catches nothing.
    return 0;
}

//Type 2: Arguments Passed, No Return
//Use case: Displaying data.
void printSquare(int num) {
    printf("The square is %d\n", num * num);
}
int main() {
    printSquare(5); // Output: The square is 25
    return 0;
}

//Type 3: No Arguments, Returns a Value
//Use case: Getting a random number or a user input.
int getNumber() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n; // Sends 'n' back to whoever called it
}
int main() {
    int myNum = getNumber(); 
    return 0;
}

//Type 4: Arguments Passed, Returns a Value (The Gold Standard)
//Use case: Math calculations.
int multiply(int a, int b) {
    return a * b;
}


//Module 4: The Hard Part (Call by Value)

//When we pass a variable to a function in C, we are not giving the function the original paper. We are photocopying the paper and giving the function the copy. If the function draws on the copy, the original paper in main stays clean.


#include <stdio.h>
void tryToChange(int x) {
    x = 100; // This changes the COPY, not the original
    printf("Inside function: %d\n", x); // Prints 100
}
int main() {
    int a = 10;
    tryToChange(a); 
    printf("Inside main: %d\n", a); // Prints 10! Friend will be confused here.
    return 0;
}
//Explain: The variable x in the function dies as soon as the function ends. The variable a in main was never touched.





//Module 6: Recursion (The Loop without Loops)
//FACTORIAL 
int factorial(int n) {
    if (n == 0) return 1; // Base Case (The Emergency Brake)
    else return n * factorial(n - 1); // The Recursive Call
}
//How to explain: "It's like a stack of plates. You keep putting plates on top (calling the function) until you hit the Base Case (0). Then you take the plates off one by one, calculating the answer as you go down."




//1.  & (Address-of Operator):
//Think of this as "The GPS Location".
//&x means: "Where in the memory does x live?" (e.g., Address 1000).

//2.  * (Dereference Operator):
//Think of this as "The Teleporter".
//*ptr means: "Teleport to the address held in ptr and grab the value inside."


//Topic 1: Call by Value (The "Photocopy" Method)
//Concept: Imagine you have a drawing in your notebook. You want your //friend to color it.

//Call by Value is like scanning your drawing and emailing them a copy.

//If they scribble on it or tear it up, your original drawing in your notebook is safe.

//Key Takeaway: The function gets a duplicate. Changes inside the function DO NOT affect the original variable.

//The Code (Detailed Comments):
#include <stdio.h>

// 1. Function Definition
// Note: We accept an 'int val'. This 'val' is a BRAND NEW variable.
void tryToModifyValue(int val) {
    printf("\n[Function] Inside function. Received value: %d", val);
    
    // We change 'val' to 100.
    // This only changes the COPY inside this function's memory.
    val = 100; 
    
    printf("\n[Function] I changed val to: %d", val);
    printf("\n[Function] End of function. The copy 'val' is destroyed now.\n");
}

int main() {
    int original = 10; // This is our precious original data
    
    printf("[Main] Before function call, original = %d", original);
    
    // 2. Function Call
    // We pass 'original'. C automatically makes a COPY of 10 and sends it.
    tryToModifyValue(original);
    
    // 3. Verification
    // The original is STILL 10. The function failed to change it.
    printf("[Main] After function call, original = %d (No Change!)", original);
    
    return 0;
}



//Topic 2: Call by Reference (The "Google Doc" Method)
//Concept: Now, instead of emailing a copy, you send your friend a Link (Google Doc link) to your original document.

//Call by Reference is passing the Address (&) of the variable, not the value.

//The function gets the "Key" to your house. It can come in, rearrange your furniture, and leave.

//Key Takeaway: Changes inside the function DO affect the original variable because they are modifying the exact same memory location.

//The Code (Detailed Comments):

#include <stdio.h>

// 1. Function Definition
// Note the '*': This function expects a POINTER (an address), not a normal number.
// 'ptr' is a variable that stores the address of another variable.
void modifyByReference(int *ptr) {
    
    // We use '*' to "Teleport" to that address and look at the value.
    printf("\n[Function] I have the address: %p", ptr);
    printf("\n[Function] Value at this address is: %d", *ptr);
    
    // THE MAGIC MOMENT:
    // *ptr = 500 means: "Go to the address stored in 'ptr' and change the value THERE."
    *ptr = 500; 
    
    printf("\n[Function] I have changed the value at address %p to 500.\n", ptr);
}

int main() {
    int original = 10;
    
    printf("[Main] Before function call, original = %d", original);
    printf("\n[Main] The address of 'original' is: %p", &original);
    
    // 2. Function Call
    // verify the syntax: We DO NOT pass 'original'.
    // We pass '&original' (The Address/The Link).
    modifyByReference(&original);
    
    // 3. Verification
    // The original is NOW 500. The function succeeded!
    printf("[Main] After function call, original = %d (It Changed!)", original);
    
    return 0;
}

