CC = gcc
OUTPUT = libfuncs.a
OBJ = profile.o suffle.o ComCardCheck.o UserCardCheck.o ComRace.o UserRace.o initialization.o startRace.o

$(OUTPUT) : $(OBJ)
	ar rv $(OUTPUT) $(OBJ)
%.o : %.c
	$(CC) -c -I../include $< -o $@
clean :
	rm *.o $(OUTPUT)
