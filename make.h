#include <stdio.h>
#include <stdlib.h>
#include "blog.cfg"


#define HEAD "<html class=\"no-js\"><head>      <meta charset=\"UTF-8\">    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no\" >    <title>"BLOG_TITLE"</title>    <script>document.documentElement.className = document.documentElement.className.replace(\"no-js\",\"js\");</script>    <link rel=\"stylesheet\" href=\"http://ruanxingzhi.coding.me/rit/css/styles.css\">    <link rel=\"stylesheet\" href=\"http://ruanxingzhi.coding.me/rit/css/custom.css\">    <link rel='stylesheet' href='http://ruanxingzhi.coding.me/rit/css/font.css' type='text/css' media='all' />    <script type='text/javascript' src='http://ruanxingzhi.coding.me/rit/js/jquery.js'></script>    <!-- 通过自有函数输出HTML头部信息 -->    <meta name=\"description\" content=\"越过长城，走向世界。\" /><meta name=\"keywords\" content=\"OI,algorithm,G-F-W,DLink\" /><meta name=\"generator\" content=\"Typecho 1.0/14.10.10\" /><meta name=\"template\" content=\"blue\" /></head><body class=\"home blog has-featured-image\"><div class=\"navigation\">              <div class=\"navigation-inner section-inner\">            <ul class=\"blog-menu\">                  <li><a href=\""BLOG_URL"\">首页</a></li>          </ul>                    <div class=\"clear\"></div>             </div> <!-- /navigation-inner -->         </div> <!-- /navigation -->      <div class=\"header section\">              <div class=\"header-inner section-inner\">                                      <a href=\""BLOG_URL"\" title=\""BLOG_TITLE"\" rel=\"home\" class=\"logo\">            <img src=\"http://ruanxingzhi.coding.me/rit/imgs/photo.png\" alt=\""BLOG_TITLE"\">          </a>                                                <h1 class=\"blog-title\">          <a href=\""BLOG_URL"\" title=\""BLOG_TITLE"\" rel=\"home\">"BLOG_TITLE"</a>        </h1>                <div class=\"clear\"></div>                </div>                         <div class=\"clear\"></div>                                                    </div> <!-- /header section -->          </div> <!-- /header-inner section-inner --><div class=\"content section-inner\"><div class=\"posts\">"


#define FOOT "        <div class=\"post-nav archive-nav\">        			          <div class=\"clear\"></div>                  </div> <!-- /post-nav archive-nav -->      <div class=\"clear\"></div>  </div> <!-- /posts --></div> <!-- /content section-inner -->  <div class=\"footer section\">        <div class=\"footer-inner section-inner\">                        <div class=\"footer-a widgets\">                    <div class=\"widget widget_recent_entries\"><div class=\"clear\"></div></div>                   <div class=\"clear\"></div>                  </div>               <!-- /footer-a -->                            <div class=\"footer-b widgets\">                <div class=\"widget widget_categories\"><div class=\"widget-content\"><h3 class=\"widget-title\"><div class=\"textwidget\">友链</div><a href=\"http://ruanx.pw\" rel=\"bookmark\">Blue's Blog</a></br>Powered by <a href=\"https://github.com/Ruanxingzhi/rit\" rel=\"bookmark\">Rit</a></h3>   </div><div class=\"clear\"></div></div>                   <div class=\"clear\"></div>                  </div>                     <!-- /footer-b -->                                    <div class=\"footer-c widgets\">                <div class=\"widget widget_text\"><div class=\"widget-content\"><h3 class=\"widget-title\">FOR ME</h3>                <div class=\"textwidget\">"BLOG_INTRO"</div>    </div><div class=\"clear\"></div></div>                   <div class=\"clear\"></div>                  </div>               <!-- /footer-c -->            <div class=\"clear\"></div>        </div> <!-- /footer-inner -->    </div> <!-- /footer --><div class=\"credits section\">  <div class=\"credits-inner section-inner\">    <p class=\"credits-left\">          <span>Copy[LEFT]</span> 2016 <a href=\""BLOG_URL"\" title=\""BLOG_TITLE"\">"BLOG_TITLE"</a>        </p>        <p class=\"credits-right\">      <!--Something...-->      </p>        <div class=\"clear\"></div>    </div> <!-- /credits-inner -->  </div> <!-- /credits --><script type='text/javascript' src='js/flexslider.min.js'></script><script type='text/javascript' src='js/global.js'></script></body></html>"


void prin(const char* url,const char* title,const char* date,const char* msg)
{
	puts("<!--Begin blog-->");

	puts("<div class=\"post type-post\">");
	puts("<div class=\"post-bubbles\">");
	printf("<a href=\"");

	printf("%s",url);

	printf("\" class=\"format-bubble\" title=\"test\"></a>\n");

	puts("</div>");

	puts("<div class=\"content-inner\">");
	puts("<div class=\"post-header\">");

	printf("<h2 class=\"post-title\"><a href=\"%s\" rel=\"bookmark\">%s</a></h2>",url,title);

	puts("<div class=\"post-meta\">");
	printf("<span class=\"post-date\">%s</span>\n",date);

	puts("</div> <!-- /post-meta -->\n</div> <!-- /post-header -->");

	printf("<div class=\"post-content\"><p>%s</p>",msg);

	puts("</div> <!-- /post-content --><div class=\"clear\"></div></div> <!-- /post content-inner --><div class=\"clear\"></div></div>");

	puts("<!--End blog-->");
}

void blog_make(const char *url,const char *title,const char *date,const char *msg)
{
	
	prin(url,title,date,msg);
	
}
