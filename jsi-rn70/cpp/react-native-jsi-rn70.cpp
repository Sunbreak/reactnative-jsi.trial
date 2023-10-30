#include "react-native-jsi-rn70.h"

using namespace facebook::jsi;

namespace jsirn70 {

void install(Runtime &runtime) {
    runtime.global().setProperty(
        runtime,
        "multiply",
        Function::createFromHostFunction(
            runtime,
            PropNameID::forAscii(runtime, "multiply"),
            2,
            [](Runtime &rt, const Value &thisVal, const Value *args, size_t count) -> Value {
                double a = args[0].getNumber();
                double b = args[1].getNumber();
                return { a * b };
            }
        )
    );
}

}
