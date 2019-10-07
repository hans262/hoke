# Mingw-w64

## 介绍
```
  MinGW为gcc的windows版本
  MinGW只能编译生成32位可执行程序
  MinGW 现已被MinGW-w64所取代
```
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

## 项目调试
```
  编译 -> Shift + Ctrl + B
  调试 -> F5
```

## makefile
```
  mingw32-make build
  mingw32-make clean
  mingw32-make run

  赋值
  
  =     变量的值将会是整个makefile中最后被指定的值。
  :=    表示变量的值决定于它在makefile中的位置
  ?=    是如果没有被赋值过就赋予等号后面的值
  +=    是添加等号后面的值

```