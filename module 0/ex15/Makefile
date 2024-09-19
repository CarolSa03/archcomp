# Variables
INCLUDES = cw.h 
SOURCES = main.c cw.c
OBJFILES = main.o cw.o
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
cw.o: cw.c cw.h
main.o: main.c cw.h

# Run the program
run: ${EXEC}
	./${EXEC}

# Clean up generated files
clean:
	rm -f ${OBJFILES} ${EXEC}