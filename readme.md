#Rit博客系统用户手册

>Ver 1.0 Release
>Copy[LEFT] blue 2016


[toc]

##简介

---
rit是一个开源的静态博客系统。此版本rit通过C语言的程序来生成index.html，可以方便地部署到Github Page上。

Demo：http://ruanx.pw (作者的博客)

![Demo](http://i3.piimg.com/c53d7a00d469bbbe.png)

##文件结构

---
rit的文件结构如下图所示。
```
file/
    blog.cfg               #Blog全局配置文件
    post.cfg               #文章配置文件
    make.h                 #页头、页尾样式
    rit.c                  #生成html
    
    post/
        Welcome.html       #文章
```


##安装
安装rit之前需要先进行一些准备……

***
Step1.下载源代码
```bash
git clone git@github.com:Ruanxingzhi/rit.git
```
然后进入rit文件夹。

***

Step2.配置blog.cfg

```C
#define BLOG_URL "http://ruanxingzhi.coding.me/rit/"
//修改为你的博客地址

#define BLOG_TITLE "Rit's Demo"
//修改为你的博客名称

#define BLOG_INTRO "Rit is a Open-Source project!"
//修改为你的自我介绍
```

***

Step3.编译rit.c

```bash
gcc rit.c -o rit
```

注意：一旦更改了blog.cfg，rit就需要重新编译。

***

Step4.生成index.html

```bash
Linux:
./rit >index.html

Windows:
rit >index.html
```

index.html就是博客的首页。
如果你不想生成为index.html，替换掉上面的 "index.html" 即可。

##写作

---
上面的操作完成之后，你就完成了rit的安装。

下一步是写博客了。

关于博客怎么生成，你可以使用stackedit:
http://stackedit.io/editor

按左边的 "#" -> Export to disk -> Using template，导出成html文件。

当然还可以用python-markdown，remarkable，Retext，Mou……反正不管怎么样，生成出一个html文件就行。

把这个html文件放进post文件夹，然后编辑post.cfg:

```bash
Total:1
#表示总共有多少篇博客需要展示

欢迎使用rit博客系统									
#文章标题
http://ruanxingzhi.coding.me/rit/post/readme.html
#文章URL，把http://ruanxingzhi.coding.me/rit/换成你的博客地址，readme.html换成你的文章名称；也可以链接到别的网页，作一篇转载。

2016/4/5
#创作时间

Rit博客系统帮助文档
#文章内容简介
```

``去掉上面的注释``，按照实际需要编辑post.cfg。


##疑难解答与bug提交
***
请联系： ruanxingzhi@gmail.com


