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

# Mingw-w64
MinGW是GNU在windows上的C/C++编译器。MinGW现已被MinGW-w64所取代。

## 安装
```
  1.官网下载压缩版
    x86_64-8.1.0-release-win32-seh-rt_v6-rev0.7z
    x86_64-8.1.0-release-posix-seh-rt_v6-rev0.7z
    系统类型 ------- 线程模型 ----- 异常处理模型
  2.解压到安装目录
  3.配置/bin目录的环境变量
  4.测试是否安装成功 -> gcc -v
  注：
  win32 只支持window的线程模型
  posix 标准的线程模型，支持 std::thread
```

## 本项目调试
```
  编译 -> Shift + Ctrl + B
  调试 -> F5
```

## Clang on macOS
在macOS系统中使用vscode开发c++。

1. 在macOS上安装Visual Studio Code；
2. 为Vs Code安装C/C ++扩展；
3. 确保安装Clang，执行 clang --version；