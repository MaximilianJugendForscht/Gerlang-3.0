make:
	g++ src/*.cpp -o dsc
	#add some testing
	./dsc ./test/main.ds -a ./test/program1.cpp
	g++ ./test/program1.cpp -o ./test/program1
	./program1

debug:
	g++ src/*.cpp -g -O0 -o dsc_temp
	gdb dsc_temp
	rm dsc_temp
