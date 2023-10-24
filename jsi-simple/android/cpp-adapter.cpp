#include <jni.h>
#include "react-native-jsi-simple.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_jsisimple_JsiSimpleModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return jsisimple::multiply(a, b);
}
