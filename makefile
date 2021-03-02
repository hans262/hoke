GCC := g++
SOURCE := main.cpp
OUTPUT := a.out
ARGS := -g -std=c++17 -stdlib=libc++

build: $(SOURCE)
	$(GCC) $(ARGS) -o $(OUTPUT) $(SOURCE)

clean:
	rm *.out
	rm -rf *.dSYM

run:
	./a.out