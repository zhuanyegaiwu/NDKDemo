package com.xhs.ndkdemo;

/**
 * Created by 布鲁斯.李 on 2018/7/20.
 * Email:zp18595658325@163.com
 */

public class Hello {
    static {
        System.loadLibrary("hello");
    }
    public static native String callFromC();
}
