Simple Shell
Authors: Nene Lawani and Victor Egele

GitHub accounts: NeneLawani and vegele93

Description
Simple Shell is a basic implementation of a UNIX command line interpreter in C that supports basic shell commands, handles special characters, implements built-ins, and allows for command execution with arguments. It also handles the "end of file" condition (Ctrl+D).
Features
Displays a prompt and waits for the user to enter a command.
Supports simple command lines made of only one word without semicolons, pipes, redirections, or other advanced features.
Executes commands with arguments.
Handles special characters like ", ', `, \, *, &, #.
Implements built-in commands.
Uses the PATH environment variable to search for executables.
Allows moving cursor for editing commands.
Handles errors and displays error messages when necessary.
Compiles with the following flags: -Wall -Werror -Wextra -pedantic -std=gnu89
Usage
Compile the source code with the following command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o shell

Run the compiled program:
./shell

The shell will display a prompt (shell$) and wait for the user to enter a command.

Enter a command and press Enter to execute it. The shell will display the output of the command (if any) and then display the prompt again.

Use built-in commands like cd to change directory, exit to exit the shell, and help to display help information.

Use special characters like ", ', `, \, *, &, # as needed in your commands.

Use Ctrl+D to signal the "end of file" condition and exit the shell.

Limitations
This is a basic implementation and may not handle all possible edge cases or advanced features.
Only supports simple command lines with one-word commands and arguments.
Does not support semicolons, pipes, redirections, or other advanced features.
Built-in commands may not have the same functionality as in a full-fledged shell.
Error messages may not always provide detailed information on the specific error.
Contributing
If you would like to contribute to Simple Shell, please follow these steps:

Fork the repository and clone it to your local machine.
Create a new branch for your changes.
Make your changes and thoroughly test them.
Commit and push your changes to your forked repository.
Submit a pull request detailing your changes and the reason for the contribution.
Credits
Authors: Nene Lawani and Victor Egele

GitHub accounts: NeneLawani and vegele93

Contact Information
For any questions, issues, or inquiries, please contact us at:

Nene Lawani: nene@lawani.com
Victor Egele: vegele93@gmail.com
