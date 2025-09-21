# File-Handling-Program
COMPANY: CODTECH IT SOLUTIONS

NAME: VARSHA S

INTERN ID:CT04DY996

DOMAIN: C PROGRAMMING

DURATION: 4 WEEKS

MENTOR: NEELA SANTHOSH

Description:
This C program allows users to perform basic file operations: reading from a file, overwriting a file with new content, and appending data to a file. Initially, the program prompts the user to enter the filename, including its extension. The filename is stored in a char array, which is then used for subsequent file operations. Afterward, the user is presented with a menu to choose one of three operations: reading, writing (which overwrites the file), or appending to the file.

When the user selects an option, the program enters a switch-case block to execute the corresponding action. For reading a file, the program opens the file in read mode ("r") and, if successful, displays the contents of the file line by line. If the file cannot be opened, an error message is displayed. For writing, the file is opened in write mode ("w"), which overwrites the existing content of the file. The user is prompted to enter new text, which is written to the file. In the case of appending, the file is opened in append mode ("a"), ensuring that the new data is added to the end of the file without affecting the existing content. After each operation, the file is closed, and a success message is shown.

If the user enters an invalid option, the program outputs an error message. The program includes basic error handling to check if the file can be opened before proceeding with any read, write, or append operation. In addition, it uses the fgets function to capture user input, preventing issues like buffer overflow by limiting the number of characters read. While the program is simple and functional, it could be further enhanced to handle more complex scenarios, such as reading or writing binary files or managing larger files more efficiently.
