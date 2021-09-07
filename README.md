## Familiarity with the string library and its commands
#### Use the string library to create a variable of type string and use the commands in the string library such as the **find** command.
Use the **getline** command instead of cin, to get a sentence line from the user until the user presses the enter key.

Use ranged based for loop instead of simple for loop. ( **for(int x : array)** ):
- According to this definition, in each iteration, an array member is placed in the x variable and the commands inside the loop are executed. This structure can be used for any set of objects that has the ability to recognize the beginning and end and operators are defined to navigate them (such as arrays, vectors, lists, etc.).
- **Note:** When a variable is defined as (for (int x: array)), a copy of the element value is placed in x in each iteration. As a result, changing x has no effect on the array.
- For x to affect the array, x must be a **reference** variable. ( **for(int &x : array)** )
- A code snippet such as ( **for(const className &x: array)** ) is also used when it is not intended to change the elements of the array set, but copying any object of type className to the variable x is not just a matter of time or memory. In such cases, it is recommended to use the reference variable (to avoid copying) with the const key (to prevent change).

Within standard C++ libraries, npos is usually defined as:
- **static const size_type npos = -1;**
 And since **size_type** itself is unsigned and equating the unsigned value with -1 gives us the maximum value of that variable, then npos is a variable that gives us the maximum string size here.
- Npos is also commonly used to compare the recursive values of some functions, such as find.
In the case of find, if the return value is not equal to npos, it means that the string is found.
