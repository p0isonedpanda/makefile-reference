output: *.o
	g++ *.o -o output

*.o: *.cpp *.h
	g++ -c *.cpp

clean:
	rm *.o output
