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
	./app

pull:
	git pull https://github.com.cnpmjs.org/ounana/hoke.git
