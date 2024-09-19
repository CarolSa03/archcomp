# Variables
INCLUDES = fh.h gac.h sum.h
SOURCES = main.c fh.c gac.c sum.c
OBJFILES = main.o fh.o gac.o sum.o
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
fh.o: fh.c fh.h
gac.o: gac.c gac.h
sum.o: sum.c sum.h
main.o: main.c fh.h

# Run the program
run: ${EXEC}
	./${EXEC}

# Clean up generated files
clean:
	rm -f ${OBJFILES} ${EXEC}