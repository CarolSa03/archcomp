# Variables
INCLUDES = cmp.h cv.h
SOURCES = main.c cmp.c cv.c
OBJFILES = main.o cmp.o cv.o
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
cv.o: cv.c cv.h
main.o: main.c cv.h

# Run the program
run: ${EXEC}
	./${EXEC}

# Clean up generated files
clean:
	rm -f ${OBJFILES} ${EXEC}