server: bin/Utility.o bin/Main.o bin/Thread.o bin/Common.o
	g++ -std=c++11 -fpermissive bin/Utility.o bin/Main.o bin/Thread.o bin/Common.o -lpthread -o server

bin/Utility.o: src/Utility.cpp src/Utility.h
	g++ -fpermissive -std=c++11 -c src/Utility.cpp -lpthread -o bin/Utility.o

bin/Main.o: src/Main.cpp 
	g++ -fpermissive -std=c++11 -c src/Main.cpp -lpthread -o bin/Main.o

bin/Thread.o: src/Thread.cpp src/Thread.h
	g++ -fpermissive -std=c++11 -c src/Thread.cpp -lpthread -o bin/Thread.o

bin/Common.o: src/Common.cpp src/Common.h
	g++ -fpermissive -std=c++11 -c src/Common.cpp -lpthread -o bin/Common.o

