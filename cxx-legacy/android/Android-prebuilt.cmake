# Prefab packages from React Native
find_package(ReactAndroid REQUIRED CONFIG)
add_library(react_render_debug ALIAS ReactAndroid::react_render_debug)
add_library(turbomodulejsijni ALIAS ReactAndroid::turbomodulejsijni)
add_library(runtimeexecutor ALIAS ReactAndroid::runtimeexecutor)
add_library(react_codegen_rncore ALIAS ReactAndroid::react_codegen_rncore)
add_library(react_debug ALIAS ReactAndroid::react_debug)
add_library(react_render_componentregistry ALIAS ReactAndroid::react_render_componentregistry)
add_library(react_newarchdefaults ALIAS ReactAndroid::react_newarchdefaults)
add_library(react_render_core ALIAS ReactAndroid::react_render_core)
add_library(react_render_graphics ALIAS ReactAndroid::react_render_graphics)
add_library(rrc_view ALIAS ReactAndroid::rrc_view)
add_library(jsi ALIAS ReactAndroid::jsi)
add_library(glog ALIAS ReactAndroid::glog)
add_library(fabricjni ALIAS ReactAndroid::fabricjni)
add_library(react_render_mapbuffer ALIAS ReactAndroid::react_render_mapbuffer)
add_library(yoga ALIAS ReactAndroid::yoga)
add_library(folly_runtime ALIAS ReactAndroid::folly_runtime)
add_library(react_nativemodule_core ALIAS ReactAndroid::react_nativemodule_core)
add_library(react_render_imagemanager ALIAS ReactAndroid::react_render_imagemanager)
add_library(rrc_image ALIAS ReactAndroid::rrc_image)
add_library(rrc_legacyviewmanagerinterop ALIAS ReactAndroid::rrc_legacyviewmanagerinterop)

find_package(fbjni REQUIRED CONFIG)
add_library(fbjni ALIAS fbjni::fbjni)

# This CMake file exposes the Folly Flags that all the libraries should use when
# compiling/linking against a dependency which requires folly.
SET(folly_FLAGS
        -DFOLLY_NO_CONFIG=1
        -DFOLLY_HAVE_CLOCK_GETTIME=1
        -DFOLLY_USE_LIBCPP=1
        -DFOLLY_CFG_NO_COROUTINES=1
        -DFOLLY_MOBILE=1
        -DFOLLY_HAVE_RECVMMSG=1
        -DFOLLY_HAVE_PTHREAD=1
        # Once we target android-23 above, we can comment
        # the following line. NDK uses GNU style stderror_r() after API 23.
        -DFOLLY_HAVE_XSI_STRERROR_R=1
        )

# We use an interface target to propagate flags to all the generated targets
# such as the folly flags or others.
add_library(common_flags INTERFACE)
target_compile_options(common_flags INTERFACE ${folly_FLAGS})
