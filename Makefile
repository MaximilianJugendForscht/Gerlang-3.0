make:
	g++ src/*.cpp -o dsc
	#add some testing
	./dsc ./test/main.ds -a program1.cpp
	g++ program1.cpp -o program1
	./program1