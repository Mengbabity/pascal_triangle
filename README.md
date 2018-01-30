# pascal_triangle
题目是Pascal三角形。

#C++
用了Vector<vector<int>> result(n)来存放返回值。其中n为大小。
关键是r[i][j]=r[i-1][j-1]+r[i-1][j]来计算中间数字，开头与结尾放置1。
用到vector的函数resize,用来调整大小，因为二维容器result中每一个vector的大小都不一样。即result[i].resize(i+1)。

#衍生题目：给出行号，返回Pascal三角形该行的值。

#C++
用Vector<int> result(n+1)来存放返回值。n为行号。
思路是大循环i来确定返回行的大小。小循环的次数为i-1次，计算除第一个数字，其他i-1个数字的和，计算方式为该位+前一位数字的和。
