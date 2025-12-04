`#include <vector>` 是C++中的**头文件包含指令**，它告诉编译器要使用C++标准库中的**vector（向量）容器**。

## **vector是什么？**
vector是C++标准模板库（STL）中的一个动态数组容器，它：
1. **动态大小**：可以在运行时自动调整大小
2. **连续存储**：元素在内存中是连续存储的，像普通数组一样
3. **提供多种操作**：可以方便地添加、删除、访问元素

## **为什么需要包含<vector>？**
- 就像在使用数学函数前需要`#include <cmath>`
- 在使用输入输出前需要`#include <iostream>`
- 在使用vector前需要`#include <vector>`

## **vector的基本用法**

### 1. **创建vector**
```cpp
#include <vector>
using namespace std;

vector<int> arr;      // 创建一个空的int类型vector
vector<int> arr(10);  // 创建包含10个int的vector（默认值为0）
vector<int> arr = {1, 2, 3, 4, 5};  // 初始化列表
```

### 2. **常用操作**
```cpp
vector<int> v;

// 添加元素
v.push_back(10);      // 在末尾添加元素10
v.push_back(20);

// 访问元素
int x = v[0];         // 访问第一个元素（不检查边界）
int y = v.at(0);      // 访问第一个元素（检查边界，越界会抛出异常）

// 获取大小
int size = v.size();  // 获取元素个数

// 修改元素
v[0] = 100;           // 修改第一个元素

// 删除元素
v.pop_back();         // 删除最后一个元素
```

### 3. **遍历vector**
```cpp
// 方法1：下标遍历
for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}

// 方法2：范围for循环（C++11）
for (int num : v) {
    cout << num << " ";
}

// 方法3：迭代器
for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
}
```

## **在题目中的具体应用**

题目中的代码：
```cpp
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);  // 创建大小为n的vector
    
    // 读取n个整数
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // ... 后续处理
}
```

这里使用vector比使用普通数组的好处：
1. **不需要手动管理内存**
2. **知道数组大小**：可以通过`arr.size()`获取
3. **更安全**：可以使用`at()`进行边界检查

## **对比普通数组**

```cpp
// 使用普通数组（需要提前知道最大大小）
int arr[200000];  // 静态分配，固定大小

// 使用vector（动态大小）
vector<int> arr;          // 开始为空
vector<int> arr(n);       // 大小为n
vector<int> arr(n, 0);    // 大小为n，所有元素初始化为0
```

## **为什么题目中常用vector？**
1. **竞赛题目常用**：输入大小不确定，vector可以动态调整
2. **方便传递**：可以作为函数参数和返回值
3. **功能丰富**：提供了很多便捷的方法（如`push_back`, `pop_back`, `size()`等）

## **其他常用头文件**
```cpp
#include <iostream>   // 输入输出流（cin, cout）
#include <algorithm>  // 算法（sort, find等）
#include <string>     // 字符串处理
#include <cmath>      // 数学函数
#include <queue>      // 队列
#include <stack>      // 栈
#include <map>        // 映射
#include <set>        // 集合
```

所以，简单来说：
- **`#include <vector>`**：告诉编译器"我要使用vector容器"
- **`vector<int>`**：创建一个可以存放int类型数据的动态数组
- 这使得代码更简洁、安全、易于维护