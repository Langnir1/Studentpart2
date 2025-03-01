Info: main.o student.o address.o date.o
	g++ -g main.o student.o address.o date.o -o Info

main.o: main.cpp student.h date.h address.h
	g++ -g -c main.cpp

address.o: address.cpp address.h
	g++ -g -c address.cpp

date.o: date.cpp date.h
	g++ -g -c date.cpp

student.o: student.cpp student.h date.h address.h
	g++ -g -c student.cpp

clean:
	rm -f *.o Info
