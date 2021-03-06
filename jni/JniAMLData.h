/*******************************************************************************
 * Copyright 2018 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *******************************************************************************/

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_datamodel_aml_AMLData */

#ifndef _Included_org_datamodel_aml_AMLData
#define _Included_org_datamodel_aml_AMLData
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_datamodel_aml_AMLData
 * Method:    constructAMLData
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_datamodel_aml_AMLData_constructAMLData
  (JNIEnv *, jobject);

/*
 * Class:     org_datamodel_aml_AMLData
 * Method:    setValueImpl
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_datamodel_aml_AMLData_setValueImpl__Ljava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     org_datamodel_aml_AMLData
 * Method:    setValueImpl
 * Signature: (Ljava/lang/String;Ljava/util/List;)V
 */
JNIEXPORT void JNICALL Java_org_datamodel_aml_AMLData_setValueImpl__Ljava_lang_String_2Ljava_util_List_2
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     org_datamodel_aml_AMLData
 * Method:    setValueImpl
 * Signature: (Ljava/lang/String;Lorg/datamodel/aml/AMLData;)V
 */
JNIEXPORT void JNICALL Java_org_datamodel_aml_AMLData_setValueImpl__Ljava_lang_String_2Lorg_datamodel_aml_AMLData_2
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     org_datamodel_aml_AMLData
 * Method:    getKeysImpl
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_org_datamodel_aml_AMLData_getKeysImpl
  (JNIEnv *, jobject);

/*
 * Class:     org_datamodel_aml_AMLData
 * Method:    getValueTypeImpl
 * Signature: (Ljava/lang/String;)Lorg/datamodel/aml/AMLData/ValueType;
 */
JNIEXPORT jobject JNICALL Java_org_datamodel_aml_AMLData_getValueTypeImpl
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_datamodel_aml_AMLData
 * Method:    getValueToStrImpl
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_datamodel_aml_AMLData_getValueToStrImpl
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_datamodel_aml_AMLData
 * Method:    getValueToStrListImpl
 * Signature: (Ljava/lang/String;)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_org_datamodel_aml_AMLData_getValueToStrListImpl
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_datamodel_aml_AMLData
 * Method:    getValueToAMLDataImpl
 * Signature: (Ljava/lang/String;)Lorg/datamodel/aml/AMLData;
 */
JNIEXPORT jobject JNICALL Java_org_datamodel_aml_AMLData_getValueToAMLDataImpl
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_datamodel_aml_AMLData
 * Method:    destructAMLData
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_datamodel_aml_AMLData_destructAMLData
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
