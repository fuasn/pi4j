/*
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: JNI Native Library
 * FILENAME      :  com_pi4j_wiringpi_Serial.h
 * 
 * This file is part of the Pi4J project. More information about
 * this project can be found here:  https://pi4j.com/
 * **********************************************************************
 * %%
 * Copyright (C) 2012 - 2019 Pi4J
 * %%
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Lesser Public License for more details.
 * 
 * You should have received a copy of the GNU General Lesser Public
 * License along with this program.  If not, see
 * <http://www.gnu.org/licenses/lgpl-3.0.html>.
 * #L%
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_pi4j_wiringpi_Serial */

#ifndef _Included_com_pi4j_wiringpi_Serial
#define _Included_com_pi4j_wiringpi_Serial
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialOpen
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Serial_serialOpen
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialClose
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Serial_serialClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialFlush
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Serial_serialFlush
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialPutByte
 * Signature: (IB)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Serial_serialPutByte
  (JNIEnv *, jclass, jint, jbyte);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialPutBytes
 * Signature: (I[BI)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Serial_serialPutBytes
  (JNIEnv *, jclass, jint, jbyteArray, jint);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialPuts
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Serial_serialPuts
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialDataAvail
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Serial_serialDataAvail
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialGetByte
 * Signature: (I)B
 */
JNIEXPORT jbyte JNICALL Java_com_pi4j_wiringpi_Serial_serialGetByte
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialGetBytes
 * Signature: (II)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_pi4j_wiringpi_Serial_serialGetBytes
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialGetAvailableBytes
 * Signature: (I)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_pi4j_wiringpi_Serial_serialGetAvailableBytes
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialGetchar
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Serial_serialGetchar
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
