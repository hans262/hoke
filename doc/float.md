## 浮点型

```
  单精度 float
  双精度 double
  长双精度 long double

  -十进制小数形式 必须有小数点
  0.0 25.0 5.669 0.25 
  -指数形式 加阶码 e | E
  aEn (a为十进制数，n为十进制整数)
  2.1E5 (2.1 * 10的5次幂)
  3.7E-2 (3.7 * 10的-2次幂)

  浮点数允许使用后缀：f | F
  如356f和356.是等价的

  -在内存中的存放形式：
  4个字节，32位内存空间。按指数形式存储。
  3.14159在内存中存放形式如下
  符号  小数部分  指数部分
  +     .314159  1
  小数部分占的位数越多，精度越高
  指数部分占得位越多，数值范围越大
```