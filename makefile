JC = g++
ARGS = -g -fexec-charset=GBK
TARGET = main.cpp

build:
	$(JC) $(ARGS) -o app $(TARGET)

clean:
	$(RM) app.exe