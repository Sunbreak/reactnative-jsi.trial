#include <jni.h>
#include "react-native-cpp-compat.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_cppcompat_CppCompatModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return cppcompat::multiply(a, b);
}
