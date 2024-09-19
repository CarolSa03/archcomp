# Variables
INCLUDES = sum.h sum_digits.h
SOURCES = main.c sum.c sum_digits.c
OBJFILES = main.o sum.o sum_digits.o
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
sum.o: sum.c sum.h
sum_digits.o: sum_digits.c sum_digits.h
main.o: main.c sum_digits.h

# Run the program
run: ${EXEC}
	./${EXEC}

# Clean up generated files
clean:
	rm -f ${OBJFILES} ${EXEC}