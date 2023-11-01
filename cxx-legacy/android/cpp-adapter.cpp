#include <jni.h>
#include "react-native-cxx-legacy.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_cxxlegacy_CxxLegacyModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return cxxlegacy::multiply(a, b);
}
