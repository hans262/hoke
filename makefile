GCC := g++
SOURCE := main.cpp
OUT := a.out
ARGS := -g -std=c++17 -stdlib=libc++
WIN_ARGS := -g -std=c++17
WIN_OUT := a.exe

build: $(SOURCE)
	$(GCC) $(ARGS) -o $(OUT) $(SOURCE)

win_build: $(SOURCE)
	$(GCC) $(WIN_ARGS) -o $(WIN_OUT) $(SOURCE)

clean:
	rm *.out
	rm -rf *.dSYM

run:
	./a

pull:
	git pull https://github.com.cnpmjs.org/ounana/hoke.git