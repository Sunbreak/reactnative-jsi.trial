#include <jni.h>
#include "react-native-jsi-simple.h"

extern "C"
JNIEXPORT void JNICALL
Java_com_jsisimple_JsiSimpleModule_nativeInstall(JNIEnv *env, jclass type, jlong jsContext) {
    auto runtime = reinterpret_cast<facebook::jsi::Runtime *>(jsContext);
    jsisimple::install(*runtime);
}
