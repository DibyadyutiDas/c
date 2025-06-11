## C Program

### Hello World Program

Here is a simple example of a C program that prints "Hello, World!" to the console:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### Explanation

- `#include <stdio.h>`: This line includes the standard input-output library, which is necessary for using the `printf` function.
- `int main()`: This is the main function where the program execution begins.
- `printf("Hello, World!\n");`: This line prints the string "Hello, World!" followed by a newline character to the console.
- `return 0;`: This line indicates that the program ended successfully.

### Compilation and Execution

To compile and run the program, follow these steps:

1. Save the code in a file with a `.c` extension, for example, `hello.c`.
2. Open a terminal and navigate to the directory where the file is saved.
3. Compile the program using a C compiler, such as `gcc`:
   ```sh
   gcc hello.c -o hello
   ```
4. Run the compiled program:
   ```sh
   ./hello
   ```

This will output:
```
Hello, World!
```