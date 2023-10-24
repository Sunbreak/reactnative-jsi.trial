#include <jni.h>
#include "react-native-cpp-simple.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_cppsimple_CppSimpleModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return cppsimple::multiply(a, b);
}
