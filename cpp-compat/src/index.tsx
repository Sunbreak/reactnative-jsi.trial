import { NativeModules, Platform } from 'react-native';

const LINKING_ERROR =
  `The package 'react-native-cpp-compat' doesn't seem to be linked. Make sure: \n\n` +
  Platform.select({ ios: "- You have run 'pod install'\n", default: '' }) +
  '- You rebuilt the app after installing the package\n' +
  '- You are not using Expo Go\n';

// @ts-expect-error
const isTurboModuleEnabled = global.__turboModuleProxy != null;

const CppCompatModule = isTurboModuleEnabled
  ? require('./NativeCppCompat').default
  : NativeModules.CppCompat;

const CppCompat = CppCompatModule
  ? CppCompatModule
  : new Proxy(
      {},
      {
        get() {
          throw new Error(LINKING_ERROR);
        },
      }
    );

export function multiply(a: number, b: number): Promise<number> {
  return CppCompat.multiply(a, b);
}
