# Variables
INCLUDES = gac.h sti.h ip.h fc.h
SOURCES = main.c gac.c sti.c ip.c fc.c
OBJFILES = main.o gac.o sti.o ip.o fc.o
EXEC = program

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
sti.o: sti.c sti.h
ip.o: ip.c ip.h
fc.o: fc.c fc.h
main.o: main.c ip.h fc.h

# Run the program
run: ${EXEC}
	./${EXEC}

# Clean up generated files
clean:
	rm -f ${OBJFILES} ${EXEC}