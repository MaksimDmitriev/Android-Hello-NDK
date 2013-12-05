LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)


LOCAL_MODULE    := myjni
LOCAL_SRC_FILES := Hello.c
APP_ABI := armeabi-v7, armeabi

include $(BUILD_SHARED_LIBRARY)