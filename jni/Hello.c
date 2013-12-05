#include "com_md_hellondk_MainActivity.h"

JNIEXPORT jstring JNICALL Java_com_md_hellondk_MainActivity_messageFromNativeCode(
		JNIEnv *env, jobject thisObj) {
	return (*env)->NewStringUTF(env, "Hello from native code!");
}
