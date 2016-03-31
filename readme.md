#Rit Project用户手册

>Version 0.78 Beta2
COPY[LEFT] 2016

[TOC]

##简介
rit是一个简易的静态博客系统。它由C语言写成，能生成静态博客。
DEMO：http://ruanxingzhi.github.io/
![Demo](http://i3.piimg.com/c53d7a00d469bbbe.png)


它的功能主要是生成主页（index.html）。``rit是跨平台的。``

##安装
当你看到这份手册的时候，你已经下载了rit的源代码。

你需要使用如下的命令安装：

```bash
Linux:
gcc rit.c -o rit

Windows:
gcc rit.c -o rit.exe
```

rit就是主文件了。

##配置
打开blog.cfg，修改下面的内容：

```
#define BLOG_URL "你的博客地址"
#define BLOG_TITLE "博客名称"
#define BLOG_INTRO "博主简介"
```

##创作
写一篇博客，用各种方式转成html。

推荐的方式是使用stackedit，导出成html。
Stackedit是在线的Markdown编辑器：https://stackedit.io/editor


然后把html文件放进post文件夹。修改posts.cfg，按照如下格式修改：
```
Total:2									


Welcome!
http://ruanxingzhi.github.io/post/wwww.html				#html文件地址
2016/3/30																			  #创作时间
这是Markdown测试。													  #文章摘要


第一次Markdown测试
http://ruanxingzhi.github.io/post/xxx.html
2016/3/30
这是第一次Markdown测试。顶栏字体未生效。
```

有多少篇博文，total之后就写多少。index将会从上到下展示posts.cfg里的博客。


最后，执行命令：
```
rit >index.html					#生成首页
```

##疑难解答、提交bug
请联系：
ruanxingzhi@gmail.com
 

 


