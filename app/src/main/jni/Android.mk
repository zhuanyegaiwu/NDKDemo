LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := hello
LOCAL_SRC_FILES := hello.c

# for logging
LOCAL_LDLIBS    += -llog

include $(BUILD_SHARED_LIBRARY)