/*************************************************************************
    > File Name: test3-1.cpp
    > Author: team79
    > Mail: huzihao79@163.com
    > Created Time: 2017年08月27日 星期日 00时26分59秒
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <apue.h>
using namespace std;


int main(){
    if(lseek(STDIN_FILENO,0,SEEK_CUR) == -1){//若文件不能seek，则返回-1
        printf("connot seek\n");
    }else{
        printf("seek ok\n");
    }
    exit(0);
}
/*
hzh@hzh-computer:~/MyUnixRoad$ cat < /etc/magic | ./a.out 
connot seek
hzh@hzh-computer:~/MyUnixRoad$ ./a.out < /etc/magic
seek ok
*/
