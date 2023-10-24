package com.cppcompat;

import com.facebook.react.bridge.ReactApplicationContext;

abstract class CppCompatSpec extends NativeCppCompatSpec {
  CppCompatSpec(ReactApplicationContext context) {
    super(context);
  }
}
