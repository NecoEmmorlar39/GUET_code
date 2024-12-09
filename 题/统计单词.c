#include<stdio.h>
#define end '.'

int main() {
	char c;
	int  count = 0;
	c = getchar();
	while (c != end) {//用.作为输入结束标志
		int flag = 0;//存在单词则标记为1；
		while ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z')) 
        {
			flag = 1;
			c = getchar();
		}
		if (flag == 1) count++;//一个单词结束则count++
		if (c == end)break;//判断是否出现结束标志.
		c = getchar();
	}
	printf("\nlength=%d\n", count);
	return 0;
}
