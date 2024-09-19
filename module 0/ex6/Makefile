# Variables
INCLUDES = get_greater_digit.h
SOURCES = main.c get_greater_digit.c
OBJFILES = main.o get_greater_digit.o
EXEC = prog

# Suffix rules
.SUFFIXES: .c .o

# How to build an object .o from a code file .c; $< refers to the source file name
.c.o:
	gcc -g -Wall -Wextra -c $<

# How to build the executable from object files
${EXEC}: ${OBJFILES}
	gcc ${OBJFILES} -o ${EXEC}

# Object file dependencies on source and header files
get_greater_digit.o: get_greater_digit.c get_greater_digit.h
main.o: main.c get_greater_digit.h

# Run the program
run: ${EXEC}
	./${EXEC}

# Clean up generated files
clean:
	rm -f ${OBJFILES} ${EXEC}