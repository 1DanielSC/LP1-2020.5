FILES = main.o App.o Diary.o Date.o Time.o CurrentTimeDate.o
COMPILER = g++
PROGRAM = Prova02
GCC_FLAGS = -I include -std=c++11 -Wall

all: $(PROGRAM)

$(PROGRAM): main.o App.o Diary.o Date.o Time.o CurrentTimeDate.o
	$(COMPILER) $(GCC_FLAGS) $(FILES) -o $(PROGRAM)

main.o: src/main.cpp include/App.h
	$(COMPILER) $(GCC_FLAGS) -c src/main.cpp

Time.o: src/Time.cpp include/Time.h include/CurrentTimeDate.h
	$(COMPILER) $(GCC_FLAGS) -c src/Time.cpp

Date.o:	src/Date.cpp include/Date.h include/CurrentTimeDate.h
	$(COMPILER) $(GCC_FLAGS) -c src/Date.cpp

Diary.o: src/Diary.cpp include/Diary.h include/CurrentTimeDate.h
	$(COMPILER) $(GCC_FLAGS) -c src/Diary.cpp

App.o: src/App.cpp include/App.h
	$(COMPILER) $(GCC_FLAGS) -c src/App.cpp

CurrentTimeDate.o: src/CurrentTimeDate.cpp include/CurrentTimeDate.h
	$(COMPILER) $(GCC_FLAGS) -c src/CurrentTimeDate.cpp

.PHONY: clean run

clean:
	rm *.o $(PROGRAM)

run: Prova02
	./$(PROGRAM)
