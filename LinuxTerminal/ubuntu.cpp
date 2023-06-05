#include <iostream>
#include <string>
int main() {
    std::string command;

    while (true) {
        // Display the terminal prompt
        std::cout << "$ ";

        // Read user input
        std::getline(std::cin, command);

        // Process the command or exit if requested
        if (command == "exit")
            break;

        // TODO: Implement command processing logic here

            // Example command processing logic
        if (command == "date") {
            // TODO: Execute 'date' command
            std::cout << "Current date: [Implement code to display current date]" << std::endl;
        }
        else if (command == "ls") {
            // TODO: Execute 'ls' command
            std::cout << "Listing files: [Implement code to list files in the current directory]" << std::endl;
        }
        else {
            // Command not recognized
            std::cout << "Command not recognized: " << command << std::endl;
        }

        // Provide feedback to the user
        std::cout << "Command not recognized: " << command << std::endl;
    }




    return 0;
}
