output: patron.o patrons.o loan.o loans.o book.o CD.o DVD.o libaryItem.o libaryItems.o main.o 
	g++ -o output patron.o patrons.o loan.o loans.o libaryItem.o libaryItems.o main.o CD.o book.o DVD.o
main.o: main.cpp patron.h patrons.h loan.h loans.h book.h CD.h DVD.h
	g++ -c main.cpp
patron.o: patron.h patron.cpp
	g++ -c patron.cpp
patrons.o: patrons.h patrons.cpp patron.h
	g++ -c patrons.cpp
loan.o: loan.cpp loan.h
	g++ -c loan.cpp
loans.o: loans.cpp loans.h loan.h
	g++ -c loans.cpp
book.o: book.cpp book.h libaryItem.h libaryItem.cpp 
	g++ -c book.cpp
CD.o: CD.cpp CD.h libaryItem.h libaryItem.cpp
	g++ -c CD.cpp 
DVD.o: DVD.cpp DVD.h libaryItem.h libaryItem.cpp
	g++ -c DVD.cpp 
libaryItem.o: libaryItem.cpp libaryItem.h 
	g++ -c libaryItem.cpp 
libaryItems.o: libaryItems.cpp libaryItems.h libaryItem.h book.h CD.h DVD.h
	g++ -c libaryItems.cpp 