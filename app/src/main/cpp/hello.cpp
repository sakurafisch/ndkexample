//
// Created by 10405 on 2020/7/25.
//

#include "hello.h"
#include <android/log.h>
using namespace std;

/**
 * 用英语和中文说世界你好,以期检验JNI中的编码问题。
 * @return "Hello, world! 世界你好！"
 */
string sayHi() {
    string greeting = string("Hello, world! 世界你好！");
    __android_log_write(android_LogPriority::ANDROID_LOG_INFO, "Hi", greeting.c_str());
    return greeting;
}

