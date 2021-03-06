#ifndef DIY_DATA_PROCESS_H
#define DIY_DATA_PROCESS_H

#include "cJSON.h"
#include "mysql/mysql.h"

#define DBhost "localhost"				// 数据库IP
#define DBuser "root"					// 数据库用户名
#define DBpass "12345"					// 数据库密码
#define DBdb "mqtt_user"			// 数据库名称

int connectDB();
void disconnectDB();
void recordData(const char* content, const char* username, const char* topic);
void processIFTTT(const char* username, const char* user_pass, const char* topic, const char* data, cJSON* jsonConfigurationItem);

#endif
