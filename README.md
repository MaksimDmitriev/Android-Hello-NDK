Android Hello NDK
=================

There are a header file and a *c file in the project, and all you need is to run it on your device or emulator. However, if you want create a native part of this application by yourself, please read on.

1. How to generate a new header file?

⋅⋅⋅Run `javah -jni -o jni/com_md_hellondk_MainActivity.h -classpath bin/classes/ com.md.hellondk.MainActivity` from your project directory

2. How to implement a native method?

⋅⋅⋅Create a *.c file and implement `messageFromNativeCode()` there.

⋅⋅⋅For example.
```
#include "com_md_hellondk_MainActivity.h"

JNIEXPORT jstring JNICALL Java_com_md_hellondk_MainActivity_messageFromNativeCode(
		JNIEnv *env, jobject thisObj) {
	return (*env)->NewStringUTF(env, "Hello from native code!");
}
```

3. Compile the native part. Run `ndk-build` from the project directory.
4. Run the application on your device or emulator.
