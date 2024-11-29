#include <fmt/core.h>
#include <iostream>
#include <string>

const std::string ADD = "add";
const std::string UPDATE = "update";
const std::string DELETE = "delete";
const std::string LIST = "list";
const std::string MARK_DONE = "mark-done";
const std::string MARK_IN_PROGRESS = "mark-in-progress";
const std::string VALID_COMMANDS_NOTICE =
    fmt::format("Specify a valid operation you want to make.\nValid "
                "commands are:\n\n\t{}\n\t{}\n\t{}\n\t{}\n\t"
                "{}\n\t{}",
                ADD, UPDATE, DELETE, LIST, MARK_IN_PROGRESS, MARK_DONE);

int main(int argc, char *argv[]) {

    if (argc == 1) {
        std::cout << VALID_COMMANDS_NOTICE << std::endl;
        return 1;
    }

    std::string mode = argv[1];

    if (mode == ADD) {
        if (argc < 3) {
            fmt::println("Please provide a name for a task you want to add.");
            return 1;
        }
        if (argc > 3) {
            fmt::println(
                "Please provide a name for the task inside the double quotes.");
            return 1;
        }
        fmt::println("Task added successfully (ID: 1) \"{}\"", argv[2]);
    } else if (mode == UPDATE) {
        fmt::println("Task updated");
    } else if (mode == DELETE) {
        fmt::println("Task deleted");
    } else if (mode == LIST) {
        fmt::println("Here are your tasks");
    } else if (mode == MARK_DONE) {
        fmt::println("Task completed");
    } else if (mode == MARK_IN_PROGRESS) {
        fmt::println("Task mark as in progress");
    } else {
        std::cout << VALID_COMMANDS_NOTICE << std::endl;
    }
    return 0;
}
