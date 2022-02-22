#include "../include/config.h"


void config(WebServer&);
//主函数
int main(int argc, char *argv[])
{
    WebServer server;   //服务器类
    config(server);

    //EventLoop
    server.eventLoop();

    return 0;
}











void config(WebServer &server)
{   
    //需要修改的数据库信息,登录名,密码,库名
    string user = "root";
    string passwd = "980209";
    string databasename = "webload";

    Config config;


    //初始化
    server.init(config.PORT, user, passwd, databasename,
                config.sql_num, config.thread_num);
    

    //日志
    server.log_write();

    //数据库
    server.sql_pool();

    //线程池
    server.thread_pool();

    //监听
    server.eventListen();
}