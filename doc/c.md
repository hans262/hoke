# C

MinGW为gcc的windows版本
MinGW 只能编译生成32位可执行程序

MinGW 现已被 MinGW-w64 所取代


## 安装 Mingw-w64
```
  1.官网下载压缩版
    x86_64-8.1.0-release-win32-seh-rt_v6-rev0.7z
    win64系统 ------- win操作平台 ----- seh
  2.解压到安装目录
  3.配置/bin目录的环境变量
  4.测试是否安装成功 -> gcc -v

  !
  线程模型
  win32 只支持window的线程模型
  posix 标准的线程模型，支持 std::thread

```

## 使用
```
  编译 -> Shift + Ctrl + B

  调试 -> F5
  
```

## mingw32-make
```
  mingw32-make build
  mingw32-make clean
```