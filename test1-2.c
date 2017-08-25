/*************************************************************************
    > File Name: test1-2.c
    > Author: team79
    > Mail: huzihao79@163.com
    > Created Time: 2017年08月25日 星期五 11时01分32秒
 ************************************************************************/

#include "apue.h"

#define BUFFSIZE 4096

int main(){
    int n;
    char buf[BUFFSIZE];

    while((n = read(STDIN_FILENO,buf,BUFFSIZE))>0)
        if(write(STDOUT_FILENO,buf,n)!=n)
            err_sys("write error");
    if(n<0)
        err_sys("read error");

    return 0;

}


