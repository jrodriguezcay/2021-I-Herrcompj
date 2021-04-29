test : test.x

%.o : %.cpp
	g++ -g -c $< -o $@

main_factorial.x : main_factorial.o factorial.o
	g++ -g $^ -o $@

test.x : factorial.o example_catch2-modularized.o
	g++ -g $^ -o $@

run_test : test.x
	./test.x

clean:
	rm -f *.x *.o a.out
