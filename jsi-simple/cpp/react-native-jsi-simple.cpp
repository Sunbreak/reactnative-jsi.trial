#include "react-native-jsi-simple.h"

using namespace facebook::jsi;

namespace jsisimple {

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
