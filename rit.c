#include "make.h"

int main()
{
	freopen("posts.cfg","r",stdin);
	//*url,*title,*date,*msg

	puts(HEAD);
	int n,i;
	char url[1000],date[1000],title[1000],msg[1000];

	scanf("Total:%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%s\n",title);
		scanf("%s\n",url);
		scanf("%s\n",date);
		gets(msg);
		
		blog_make(url,title,date,msg);
		
	}
	
	puts(FOOT);
	return 0;

}
