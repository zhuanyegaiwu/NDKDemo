//
// Created by zp185 on 2018/7/20.
//

#include "com_xhs_ndkdemo_Hello.h"

JNIEXPORT jstring JNICALL Java_com_xhs_ndkdemo_Hello_callFromC
        (JNIEnv * env, jclass jclas){
    return (*env)->NewStringUTF(env,"from c");
}