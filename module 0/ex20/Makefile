# Variables
INCLUDES = check.h sum.h
SOURCES = main.c check.c sum.c
OBJFILES = main.o check.o sum.o
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
check.o: check.c check.h
sum.o: sum.c sum.h
main.o: main.c sum.h check.h

# Run the program
run: ${EXEC}
	./${EXEC}

# Clean up generated files
clean:
	rm -f ${OBJFILES} ${EXEC}