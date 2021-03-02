GCC := g++
SOURCE := main.cpp
OUTPUT := app.exe
ARGS := -g -fexec-charset=GBK -static

build: $(SOURCE)
	$(GCC) $(ARGS) -o $(OUTPUT) $(SOURCE)

clean:
	rm *.exe

run:
	./app

pull:
	git pull https://github.com.cnpmjs.org/ounana/hoke.git