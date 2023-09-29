# Cpp-in-21-days-Part4


# Array
- An array is a sequential collection of data storage locations, each of which holds the **same type of sata**
- Array element offsets are counted from 0
- `SomeArray[n]` has `n` elements that are numbered `SomeArray[0]` through `SomeArray[n-1]`

``` cpp
// Inialize an array
int myArray[5];                             // Empty Array of 5 integers
int IntegerArray[5] = {10, 20, 30, 40, 50};
int IntArray[] = {1, 2, 3, 4, 5, 6};        // Compiler automatically picks the array size!
```
https://github.com/komxun/Cpp-in-21-days-Part4/blob/659f3409a785de3b0bc6ce5c45988695d964bf43/Day%2013%20-%20Arrays/const_and_enum_in_Arrays.cpp#L3-L11

## Writing Past the End of an Array
- DON'T write value into an array past the initialized size! The program may crash
- You cannot initialize more elements than you've declared for the array

# Arrays of Objects
- When you declare the array to hold objects, you tell the compiler the type of object to store and the number
- The class MUST have a **default constructor** (takes no arguments) so that the object can be created

https://github.com/komxun/Cpp-in-21-days-Part4/blob/659f3409a785de3b0bc6ce5c45988695d964bf43/Day%2013%20-%20Arrays/Arrays_of_Objects.cpp#L5-L32

# Multidimensional Arrays (Matrix)
## Initializing Multidimensional Arrays
```cpp
int theArray[5][3] = { {1,2,3},
  {4,5,6},
  {7,8,9},
  {10,11,12},
  {13,14,15}};   // for easy understanding
```

# Array of Pointers

# C-style string
- An array of characters that is terminated by a **null**
- Ex:
```cpp
char Greeting[] =
{'H','e','l','l','o', ' ', 'W','o','r','l','d','\0'};
// This is equivalent to
char Greeting2[] = "Hello World";
```
- The last character, `\0`, is the null character, telling c++ to terminate
- For double-quoted string, the compiler automatically add the null character for you
- `Hello World` is 12 bytes: Hello=5 bytes, space=1byte, World=5 bytes, and the null character is 1 byte

# `strcpy()` and `strncpy()`
- `strcpy(String2, String1)` copies the **entire contents** of one string into a designated buffer
- `strncpy(String2, String1, MaxLength)` copies **a number of characters** from one string to another
- If the source is larger than the destination, `strcpy()` overwrites past the end of the buffer

https://github.com/komxun/Cpp-in-21-days-Part4/blob/5c19cf12e86a85bf734b69d684b5bf54fa50b04d/Day%2013%20-%20Arrays/using_strcpy.cpp#L1-L16

https://github.com/komxun/Cpp-in-21-days-Part4/blob/5c19cf12e86a85bf734b69d684b5bf54fa50b04d/Day%2013%20-%20Arrays/using_strncpy.cpp#L1-L16
