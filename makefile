GCC := g++
SOURCE := main.cpp
OUTPUT := app.exe
ARGS := -g -fexec-charset=GBK

build: $(SOURCE)
	$(GCC) $(ARGS) -o $(OUTPUT) $(SOURCE)

clean:
	rm *.exe

run:
	./app