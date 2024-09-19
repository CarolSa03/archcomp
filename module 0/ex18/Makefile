# Variables
INCLUDES = cmp.h fp.h 
SOURCES = main.c cmp.c fp.c
OBJFILES = main.o cmp.o fp.o
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
cmp.o: cmp.c cmp.h
fp.o: fp.c fp.h
main.o: main.c fp.h

# Run the program
run: ${EXEC}
	./${EXEC}

# Clean up generated files
clean:
	rm -f ${OBJFILES} ${EXEC}