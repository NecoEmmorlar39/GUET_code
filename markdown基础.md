# 基础语法
文本直接写出来就行



**两个星号（下划线）加粗文本**



*一个星号（下划线）使文本变为斜体*



***三个星号既加粗也斜体***



~~两个波浪符号给文本加删除线~~



**~~波浪符号还可以与上述配合使用~~**

***

三个星号（下划线）可生成分割线


# #号加一个空格生成标题

## 两个#号生成二级标题，以此类推，但是最多只有六级标题

### 三级标题

#### 四级标题

##### 五级标题

###### 六级标题


# 列表
* 一个星号（也可以用加号或者减号）再加一个空格生成列表
1. 有序列表则是数字加英文点再加一个空格
   * 二级列表是在某个列表的下一行前面加上四个空格再加星号并空格，三级列表同理
   * [ ] 勾选框是在列表的格式后加一个方括号并在中间加上一个空格[ ]  
   * [x] 已勾选状态则是把方框内的括号改为x

***
# 代码部分
```C
int main()
{
   printf("hello world!");
   return 0;
}
//在代码的前面加上四个空格就能生成代码块，只要全选代码按Tab键即可

//也可以用  ```  来表示代码块，首位均要写，可以在头部的```后加上代码语言，例如```c就代表代码块里写的是c语言代码
```

 想要把代码中的函数单独强调出来可以用       \`   \`   符号  ，例如
c语言中的`printf`函数 

***

### 用一个指向右边的尖括号  \>就可以输入引用内容
> Markdown是一种轻量级标记语言，排版语法简洁，让人们更多地关注内容本身而非排版。它使用易读易写的纯文本格式编写文档，可与HTML混编，可导出 HTML、PDF 以及本身的 .md 格式的文件。因简洁、高效、易读、易写，Markdown被大量使用，如GitHub、Wikipedia、简书等。
>
>千万不要被「标记」、「语言」吓到，Markdown的语法十分简单，常用的标记符号不超过十个，用于日常写作记录绰绰有余，不到半小时就能完全掌握。
>
>就是这十个不到的标记符号，却能让人优雅地沉浸式记录，专注内容而不是纠结排版，达到「心中无尘，码字入神」的境界。
>
>让我们学习吧。

此时不能用回车换行，只能使用两个空格的方式进行换行。若想加入空行，只需要写一个右尖括号后面不加内容即可

里面可以嵌套其他内容，例如标题，列表，代码块等，还可以加入嵌套的嵌套，例如双重嵌套是两个右尖括号
>这是第一段引用内容  
>>这是引用内容里面的引用内容
> ~~~~汉语
> 这是引用内容里面的代码块
> ~~~~

***

## 超链接

加入超链接如图所示，方括号内部表示可以被点击的内容，后面的括号写网站URL

脚注可以用方括号中加一个上尖括号来表示[^1]

[^1]:我是脚注



[必应官网](https://www.bing.com)

![image-20250211171016149](C:\Users\admin\AppData\Roaming\Typora\typora-user-images\image-20250211171016149.png)

***
## 插入图片
 格式如图

![image-20250211172121233](C:\Users\admin\AppData\Roaming\Typora\typora-user-images\image-20250211172121233.png)

在Typora中可以复制图片直接粘贴

***

## 插入表格

如图所示

![image-20250213123727308](C:\Users\admin\AppData\Roaming\Typora\typora-user-images\image-20250213123727308.png)



**markdown语法兼容HTML语法，因此还可以通过HTML中的标签来写**



==可以用两个等号来高亮文本，首尾均要有两个等号==

上标可以用两个上尖括号来表示，中间是上标部分

x^2^

下标则是两个波浪号

x~2~

***

### 科学公式部分

需要编写数学公式，我们同样需要在特定的块中编写，公式块使用$美元符表示。多行公式使用连续的两个美元符。换行可以使用两个反斜杠（\）

$$
y=2x+1  
\\
y=-2x+3
$$

如果只想在行内编写，一行内容只需要使用两个美元符囊括即可
$ x = 17 + y $ 

![image-20250213125557165](C:\Users\admin\AppData\Roaming\Typora\typora-user-images\image-20250213125557165.png)

![image-20250213125615224](C:\Users\admin\AppData\Roaming\Typora\typora-user-images\image-20250213125615224.png)

![image-20250213125654031](C:\Users\admin\AppData\Roaming\Typora\typora-user-images\image-20250213125654031.png)

![image-20250213125744337](C:\Users\admin\AppData\Roaming\Typora\typora-user-images\image-20250213125744337.png)
