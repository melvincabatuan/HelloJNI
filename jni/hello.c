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
