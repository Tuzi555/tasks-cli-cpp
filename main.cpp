#include <fmt/core.h>
#include <iostream>
#include <string>

const std::string ADD = "add";
const std::string UPDATE = "update";
const std::string DELETE = "delete";
const std::string LIST = "list";
const std::string MARK_DONE = "mark-done";
const std::string MARK_IN_PROGRESS = "mark-in-progress";

void printToConsole(std::string textToPrint) {
    std::cout << textToPrint << std::endl;
}

int main(int argc, char *argv[]) {
    std::string mode = argv[1];
    if (mode == ADD) {
        printToConsole("Task added successfully (ID: 1)");
    } else if (mode == UPDATE) {
        printToConsole("Task updated");
    } else if (mode == DELETE) {
        printToConsole("Task deleted");
    } else if (mode == LIST) {
        printToConsole("Here are your tasks");
    } else if (mode == MARK_DONE) {
        printToConsole("Task completed");
    } else if (mode == MARK_IN_PROGRESS) {
        printToConsole("Task mark as in progress");
    } else {
        fmt::println("Valid commands are \"{}\", \"{}\", \"{}\", \"{}\", "
                     "\"{}\", \"{}\"",
                     ADD, UPDATE, DELETE, LIST, MARK_IN_PROGRESS, MARK_DONE);
    }
    return 0;
}
