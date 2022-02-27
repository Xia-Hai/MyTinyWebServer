## Linux下实现的一个简单WebServer
### 初版


    ```C++
    // 建立yourdb库
    create database xxxx;

    // 创建user表
    USE xxxx;
    CREATE TABLE user(
        username char(50) NULL,
        passwd char(50) NULL
    )ENGINE=InnoDB;

    // 添加数据
    INSERT INTO user(username, passwd) VALUES('name', 'passwd');
    ```

* 修改main.cpp中的数据库初始化信息

    ```C++
    //数据库登录名,密码,库名
    string user = "1111";
    string passwd = "1111";
    string databasename = "database";
    ```
