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
