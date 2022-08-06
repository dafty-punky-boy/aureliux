#include <stdio.h>
#include <stdlib.h>

typedef struct parsed_line parsed_line_type;

enum func_status {
    SUCCESS = 0,
    FAILURE = -1,
    EXITED = 1
};

struct parsed_line {
    char command[20];
    char options[20];
    char argument[60];
};

int terminal_read_line() {
    static char line_buffer[100];

    // Reads and validates the commands from the command line.

    return SUCCESS;
}

parsed_line_type terminal_line_parse(char parsed_line[]) {
    // Parses the line and returns it as a parsed_line_type.
}

int terminal_execute_line() {

    // Executes the commands

    return SUCCESS;
}

int main(void) {

    return EXIT_SUCCESS;
}


