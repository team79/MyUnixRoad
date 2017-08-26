/*************************************************************************
    > File Name: test.cpp
    > Author: team79
    > Mail: huzihao79@163.com
    > Created Time: 2017年08月26日 星期六 16时11分31秒
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <apue.h>
#include <unistd.h>
using namespace std;


int main(){
    cout << sysconf(_SC_ARG_MAX);
    return 0;
}
