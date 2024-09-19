# Variables
INCLUDES = gac.h cc.h
SOURCES = main.c gac.c cc.c
OBJFILES = main.o gac.o cc.o
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
gac.o: gac.c gac.h
cc.o: cc.c cc.h
main.o: main.c cc.h

# Run the program
run: ${EXEC}
	./${EXEC}

# Clean up generated files
clean:
	rm -f ${OBJFILES} ${EXEC}