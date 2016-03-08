# HelloJNI

JNI in IntelliJ

## Initial Error

```
/usr/lib/jvm/java-8-openjdk-i386/bin/java -Didea.launcher.port=7532 -Didea.launcher.bin.path=/home/cobalt/idea-IC-143.1821.5/bin -Dfile.encoding=UTF-8 -classpath /usr/lib/jvm/java-7-oracle/jre/lib/jfxrt.jar:/usr/lib/jvm/java-7-oracle/jre/lib/plugin.jar:/usr/lib/jvm/java-7-oracle/jre/lib/javaws.jar:/usr/lib/jvm/java-7-oracle/jre/lib/charsets.jar:/usr/lib/jvm/java-7-oracle/jre/lib/deploy.jar:/usr/lib/jvm/java-7-oracle/jre/lib/rt.jar:/usr/lib/jvm/java-7-oracle/jre/lib/jfr.jar:/usr/lib/jvm/java-7-oracle/jre/lib/resources.jar:/usr/lib/jvm/java-7-oracle/jre/lib/jce.jar:/usr/lib/jvm/java-7-oracle/jre/lib/management-agent.jar:/usr/lib/jvm/java-7-oracle/jre/lib/jsse.jar:/usr/lib/jvm/java-7-oracle/jre/lib/ext/dnsns.jar:/usr/lib/jvm/java-7-oracle/jre/lib/ext/sunjce_provider.jar:/usr/lib/jvm/java-7-oracle/jre/lib/ext/zipfs.jar:/usr/lib/jvm/java-7-oracle/jre/lib/ext/localedata.jar:/usr/lib/jvm/java-7-oracle/jre/lib/ext/sunpkcs11.jar:/usr/lib/jvm/java-7-oracle/jre/lib/ext/sunec.jar:/home/cobalt/idea-IC-143.1821.5/lib/trang-core.jar:/home/cobalt/idea-IC-143.1821.5/lib/nanoxml-2.2.3.jar:/home/cobalt/idea-IC-143.1821.5/lib/extensions.jar:/home/cobalt/idea-IC-143.1821.5/lib/nekohtml-1.9.14.jar:/home/cobalt/idea-IC-143.1821.5/lib/jsch.agentproxy.core.jar:/home/cobalt/idea-IC-143.1821.5/lib/asm-all.jar:/home/cobalt/idea-IC-143.1821.5/lib/oromatcher.jar:/home/cobalt/idea-IC-143.1821.5/lib/guava-17.0.jar:/home/cobalt/idea-IC-143.1821.5/lib/xmlrpc-2.0.jar:/home/cobalt/idea-IC-143.1821.5/lib/jsr166e.jar:/home/cobalt/idea-IC-143.1821.5/lib/jna.jar:/home/cobalt/idea-IC-143.1821.5/lib/commons-httpclient-3.1-patched.jar:/home/cobalt/idea-IC-143.1821.5/lib/automaton.jar:/home/cobalt/idea-IC-143.1821.5/lib/asm.jar:/home/cobalt/idea-IC-143.1821.5/lib/annotations.jar:/home/cobalt/idea-IC-143.1821.5/lib/jsch.agentproxy.sshagent.jar:/home/cobalt/idea-IC-143.1821.5/lib/microba.jar:/home/cobalt/idea-IC-143.1821.5/lib/miglayout-swing.jar:/home/cobalt/idea-IC-143.1821.5/lib/jcip-annotations.jar:/home/cobalt/idea-IC-143.1821.5/lib/jgoodies-common-1.2.1.jar:/home/cobalt/idea-IC-143.1821.5/lib/bootstrap.jar:/home/cobalt/idea-IC-143.1821.5/lib/jps-launcher.jar:/home/cobalt/idea-IC-143.1821.5/lib/serviceMessages.jar:/home/cobalt/idea-IC-143.1821.5/lib/jgoodies-looks-2.4.2.jar:/home/cobalt/idea-IC-143.1821.5/lib/jdom.jar:/home/cobalt/idea-IC-143.1821.5/lib/idea_rt.jar:/home/cobalt/idea-IC-143.1821.5/lib/resolver.jar:/home/cobalt/idea-IC-143.1821.5/lib/commons-net-3.3.jar:/home/cobalt/idea-IC-143.1821.5/lib/rhino-js-1_7R4.jar:/home/cobalt/idea-IC-143.1821.5/lib/ecj-4.4.jar:/home/cobalt/idea-IC-143.1821.5/lib/forms_rt.jar:/home/cobalt/idea-IC-143.1821.5/lib/xpp3-1.1.4-min.jar:/home/cobalt/idea-IC-143.1821.5/lib/markdownj-core-0.4.2-SNAPSHOT.jar:/home/cobalt/idea-IC-143.1821.5/lib/openapi.jar:/home/cobalt/idea-IC-143.1821.5/lib/velocity.jar:/home/cobalt/idea-IC-143.1821.5/lib/idea.jar:/home/cobalt/idea-IC-143.1821.5/lib/jsch.agentproxy.usocket-nc.jar:/home/cobalt/idea-IC-143.1821.5/lib/slf4j-log4j12-1.7.10.jar:/home/cobalt/idea-IC-143.1821.5/lib/jdkAnnotations.jar:/home/cobalt/idea-IC-143.1821.5/lib/proxy-vole_20131209.jar:/home/cobalt/idea-IC-143.1821.5/lib/resources_en.jar:/home/cobalt/idea-IC-143.1821.5/lib/isorelax.jar:/home/cobalt/idea-IC-143.1821.5/lib/protobuf-2.5.0.jar:/home/cobalt/idea-IC-143.1821.5/lib/trove4j.jar:/home/cobalt/idea-IC-143.1821.5/lib/resources.jar:/home/cobalt/idea-IC-143.1821.5/lib/sanselan-0.98-snapshot.jar:/home/cobalt/idea-IC-143.1821.5/lib/boot.jar:/home/cobalt/idea-IC-143.1821.5/lib/cli-parser-1.1.jar:/home/cobalt/idea-IC-143.1821.5/lib/swingx-core-1.6.2.jar:/home/cobalt/idea-IC-143.1821.5/lib/slf4j-api-1.7.10.jar:/home/cobalt/idea-IC-143.1821.5/lib/jsch.agentproxy.usocket-jna.jar:/home/cobalt/idea-IC-143.1821.5/lib/optimizedFileManager.jar:/home/cobalt/idea-IC-143.1821.5/lib/cglib-2.2.2.jar:/home/cobalt/idea-IC-143.1821.5/lib/asm-commons.jar:/home/cobalt/idea-IC-143.1821.5/lib/xstream-1.4.3.jar:/home/cobalt/idea-IC-143.1821.5/lib/log4j.jar:/home/cobalt/idea-IC-143.1821.5/lib/markdown4j-2.2.jar:/home/cobalt/idea-IC-143.1821.5/lib/jsch.agentproxy.pageant.jar:/home/cobalt/idea-IC-143.1821.5/lib/xbean.jar:/home/cobalt/idea-IC-143.1821.5/lib/jps-model.jar:/home/cobalt/idea-IC-143.1821.5/lib/jsr173_1.0_api.jar:/home/cobalt/idea-IC-143.1821.5/lib/javac2.jar:/home/cobalt/idea-IC-143.1821.5/lib/icons.jar:/home/cobalt/idea-IC-143.1821.5/lib/rngom-20051226-patched.jar:/home/cobalt/idea-IC-143.1821.5/lib/jayatana-1.2.4.jar:/home/cobalt/idea-IC-143.1821.5/lib/hamcrest-core-1.3.jar:/home/cobalt/idea-IC-143.1821.5/lib/jzlib-1.1.1.jar:/home/cobalt/idea-IC-143.1821.5/lib/picocontainer.jar:/home/cobalt/idea-IC-143.1821.5/lib/jaxen-1.1.3.jar:/home/cobalt/idea-IC-143.1821.5/lib/jgoodies-forms.jar:/home/cobalt/idea-IC-143.1821.5/lib/groovy-all-2.3.9.jar:/home/cobalt/idea-IC-143.1821.5/lib/jh.jar:/home/cobalt/idea-IC-143.1821.5/lib/asm4-all.jar:/home/cobalt/idea-IC-143.1821.5/lib/jsch.agentproxy.connector-factory.jar:/home/cobalt/idea-IC-143.1821.5/lib/util.jar:/home/cobalt/idea-IC-143.1821.5/lib/jing.jar:/home/cobalt/idea-IC-143.1821.5/lib/purejavacomm.jar:/home/cobalt/idea-IC-143.1821.5/lib/snappy-in-java-0.3.1.jar:/home/cobalt/IdeaProjects/HelloCpp/out/production/HelloCpp com.intellij.rt.execution.application.AppMain ph.edu.dlsu.Hello
Exception in thread "main" java.lang.UnsatisfiedLinkError: no nativetest in java.library.path
	at java.lang.ClassLoader.loadLibrary(ClassLoader.java:1864)
	at java.lang.Runtime.loadLibrary0(Runtime.java:870)
	at java.lang.System.loadLibrary(System.java:1122)
	at ph.edu.dlsu.Hello.<clinit>(Hello.java:6)
	at java.lang.Class.forName0(Native Method)
	at java.lang.Class.forName(Class.java:264)
	at com.intellij.rt.execution.application.AppMain.main(AppMain.java:122)
```

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
