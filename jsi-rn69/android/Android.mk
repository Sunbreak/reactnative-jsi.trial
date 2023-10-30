THIS_DIR := $(call my-dir)

include $(REACT_ANDROID_DIR)/Android-prebuilt.mk

include $(CLEAR_VARS)

LOCAL_PATH := $(THIS_DIR)

# Define the library name here.
LOCAL_MODULE := cpp

LOCAL_SRC_FILES := \
    ../cpp/react-native-jsi-rn69.cpp \
    cpp-adapter.cpp

LOCAL_C_INCLUDES := ../cpp

LOCAL_SHARED_LIBRARIES := libjsi

LOCAL_CFLAGS := -std=c++17

include $(BUILD_SHARED_LIBRARY)