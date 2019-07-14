## 整型
```
（在不同的系统上，类型占据的字节长度是不同的） sizeof(int)
  短整型 short int | short
  整型 int
    占4个字节
  长整型 long int | long
    后缀 L | l 来表示
```

## unsigned | signed | void
```
  无符号型 unsigned
    不包含负数
    unsigned int num;
    0 ~ pow(2, sizeof(int) * 8) - 1
  有符号型 signed
    包含负数，声明变量时默认为有符号型
    pow(2, sizeof(int) * 8)/2 * -1 ~ pow(2, sizeof(int) * 8)/2 - 1
```

## 类型强转
```
  (type_name) expression

  例子：
  int sum = 17, count = 5;
  double mean;
  mean = (double)sum / (double)count;
  printf("%f", mean);
```