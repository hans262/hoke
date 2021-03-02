# makefile
make是一种常用的c/c++构建工具，可用来自动化构建项目，编译打包等。windows下需要安装Mingw-w64，使用这个包自带的mingw32-make程序来启动。macOS系统则有自带的make工具。


```
  根据不同的系统
  mingw32-make build / make build

  赋值
  =     变量的值将会是整个makefile中最后被指定的值。
  :=    表示变量的值决定于它在makefile中的位置
  ?=    是如果没有被赋值过就赋予等号后面的值
  +=    是添加等号后面的值 
```


# gcc/g++命令

```
  -o    定义输出文件名
  -g    在编译的时候产生编译信息

  -fexec-charset=GBK
  -static
```