# HelloJNI

JNI in IntelliJ

```shell
$ mkdir jni
$ cd jni
$ javah -cp ../out/production/HelloJNI/ ph.edu.dlsu.Hello
```

## Create the C file (by copying the function prototype in the generated header)

```c
#include "ph_edu_dlsu_Hello.h"

/*
 * Class:     ph_edu_dlsu_Hello
 * Method:    helloFromC
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ph_edu_dlsu_Hello_helloFromC
  (JNIEnv *env, jobject jobj){
  		printf("Hello from C!\n");
}
```

## Compile

```
gcc -shared -fpic -I$JAVA_HOME/include -I$JAVA_HOME/include/linux hello.c -o libnativetest.so
```
