# pascal_triangle
题目是Pascal三角形。

#C++
用了Vector<vector<int>> result(n)来存放返回值。其中n为大小。
关键是r[i][j]=r[i-1][j-1]+r[i-1][j]来计算中间数字，开头与结尾放置1。
用到vector的函数resize,用来调整大小，因为二维容器result中每一个vector的大小都不一样。即result[i].resize(i+1)。
