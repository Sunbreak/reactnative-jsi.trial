#include <jni.h>
#include "react-native-jsi-rn69.h"

extern "C"
JNIEXPORT void JNICALL
Java_com_jsirn69_JsiRn69Module_nativeInstall(JNIEnv *env, jclass type, jlong jsContext) {
  auto runtime = reinterpret_cast<facebook::jsi::Runtime *>(jsContext);
  jsirn69::install(*runtime);
}
