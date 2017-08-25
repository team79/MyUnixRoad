/*************************************************************************
    > File Name: test1-4.c
    > Author: team79
    > Mail: huzihao79@163.com
    > Created Time: 2017年08月25日 星期五 11时13分39秒
 ************************************************************************/
#include "apue.h"
#include <sys/wait.h>

int main(){
    char buf[MAXLINE];
    pid_t pid;
    int status;

    //printf("%d %%\n",getpid());
    printf("%% ");
    while(fgets(buf,MAXLINE,stdin)!=NULL){
        if(buf[strlen(buf)-1]=='\n'){
            buf[strlen(buf)-1] = 0;
        }
        if((pid=fork())<0){
            err_sys("fork error");
        }else if(pid == 0){
            printf("pid:%d\n",getpid());
            execlp( buf, buf, (char *)0);
            err_ret("couldn't execute :%s",buf);
            exit(127);
        }
        //printf("pid:%d\n",getpid());
        if((pid=waitpid(pid,&status,0))<0){
            err_sys("wait pid error");
        }
        //printf("pid:%d\n",getpid());
        printf("%% ");
    }
    exit(0);
}


