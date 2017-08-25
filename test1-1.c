/*************************************************************************
    > File Name: test.cpp
    > Author: team79
    > Mail: huzihao79@163.com
    > Created Time: 2017年08月25日 星期五 10时28分16秒
 ************************************************************************/

#include "apue.h"
#include <dirent.h>

int main(int argc, char *argv[]){
    DIR *dp;
    struct dirent *dirp;
    dp = opendir(argv[1]);
    while((dirp = readdir(dp))!=NULL){
        printf("%s\n",dirp->d_name);
    }
    closedir(dp);
    return 0;
}

