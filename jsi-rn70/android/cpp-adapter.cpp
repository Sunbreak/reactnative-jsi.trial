#include <jni.h>
#include "react-native-jsi-rn70.h"

extern "C"
JNIEXPORT void JNICALL
Java_com_jsirn70_JsiRn70Module_nativeInstall(JNIEnv *env, jclass type, jlong jsContext) {
  auto runtime = reinterpret_cast<facebook::jsi::Runtime *>(jsContext);
  jsirn70::install(*runtime);
}
