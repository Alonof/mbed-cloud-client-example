/*
 * Copyright (c) 2018 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __MBED_CLOUD_DEV_CREDENTIALS_H__
#define __MBED_CLOUD_DEV_CREDENTIALS_H__

#include <inttypes.h>

const char MBED_CLOUD_DEV_BOOTSTRAP_ENDPOINT_NAME[] = "016736d2e5cf22c66176408103c00000";
const char MBED_CLOUD_DEV_ACCOUNT_ID[] = "0164d107035f4a2ab60f781000000000";
const char MBED_CLOUD_DEV_BOOTSTRAP_SERVER_URI[] = "coaps://coap-systemtest.dev.mbed.com:5684?aid=0164d107035f4a2ab60f781000000000";

const uint8_t MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_CERTIFICATE[] = 
{ 0x30, 0x82, 0x02, 0x84, 0x30, 0x82, 0x02, 0x2a,
 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x11, 0x00,
 0x83, 0x00, 0xed, 0xc3, 0x29, 0x6f, 0x4a, 0xab,
 0xa1, 0xc6, 0x07, 0x40, 0x52, 0x9a, 0x41, 0x16,
 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce,
 0x3d, 0x04, 0x03, 0x02, 0x30, 0x81, 0xa2, 0x31,
 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06,
 0x13, 0x02, 0x47, 0x42, 0x31, 0x17, 0x30, 0x15,
 0x06, 0x03, 0x55, 0x04, 0x08, 0x0c, 0x0e, 0x43,
 0x61, 0x6d, 0x62, 0x72, 0x69, 0x64, 0x67, 0x65,
 0x73, 0x68, 0x69, 0x72, 0x65, 0x31, 0x12, 0x30,
 0x10, 0x06, 0x03, 0x55, 0x04, 0x07, 0x0c, 0x09,
 0x43, 0x61, 0x6d, 0x62, 0x72, 0x69, 0x64, 0x67,
 0x65, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55,
 0x04, 0x0a, 0x0c, 0x07, 0x41, 0x52, 0x4d, 0x20,
 0x4c, 0x74, 0x64, 0x31, 0x29, 0x30, 0x27, 0x06,
 0x03, 0x55, 0x04, 0x0b, 0x0c, 0x20, 0x30, 0x31,
 0x36, 0x34, 0x64, 0x31, 0x30, 0x37, 0x30, 0x33,
 0x35, 0x66, 0x34, 0x61, 0x32, 0x61, 0x62, 0x36,
 0x30, 0x66, 0x37, 0x38, 0x31, 0x30, 0x30, 0x30,
 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x31, 0x29,
 0x30, 0x27, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c,
 0x20, 0x30, 0x31, 0x36, 0x37, 0x33, 0x36, 0x64,
 0x32, 0x65, 0x35, 0x63, 0x66, 0x32, 0x32, 0x63,
 0x36, 0x36, 0x31, 0x37, 0x36, 0x34, 0x30, 0x38,
 0x31, 0x30, 0x33, 0x63, 0x30, 0x30, 0x30, 0x30,
 0x30, 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x38, 0x31,
 0x31, 0x32, 0x31, 0x31, 0x35, 0x31, 0x30, 0x35,
 0x30, 0x5a, 0x17, 0x0d, 0x32, 0x38, 0x31, 0x31,
 0x32, 0x31, 0x31, 0x35, 0x31, 0x30, 0x35, 0x30,
 0x5a, 0x30, 0x81, 0xa2, 0x31, 0x0b, 0x30, 0x09,
 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x47,
 0x42, 0x31, 0x17, 0x30, 0x15, 0x06, 0x03, 0x55,
 0x04, 0x08, 0x0c, 0x0e, 0x43, 0x61, 0x6d, 0x62,
 0x72, 0x69, 0x64, 0x67, 0x65, 0x73, 0x68, 0x69,
 0x72, 0x65, 0x31, 0x12, 0x30, 0x10, 0x06, 0x03,
 0x55, 0x04, 0x07, 0x0c, 0x09, 0x43, 0x61, 0x6d,
 0x62, 0x72, 0x69, 0x64, 0x67, 0x65, 0x31, 0x10,
 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c,
 0x07, 0x41, 0x52, 0x4d, 0x20, 0x4c, 0x74, 0x64,
 0x31, 0x29, 0x30, 0x27, 0x06, 0x03, 0x55, 0x04,
 0x0b, 0x0c, 0x20, 0x30, 0x31, 0x36, 0x34, 0x64,
 0x31, 0x30, 0x37, 0x30, 0x33, 0x35, 0x66, 0x34,
 0x61, 0x32, 0x61, 0x62, 0x36, 0x30, 0x66, 0x37,
 0x38, 0x31, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30,
 0x30, 0x30, 0x30, 0x31, 0x29, 0x30, 0x27, 0x06,
 0x03, 0x55, 0x04, 0x03, 0x0c, 0x20, 0x30, 0x31,
 0x36, 0x37, 0x33, 0x36, 0x64, 0x32, 0x65, 0x35,
 0x63, 0x66, 0x32, 0x32, 0x63, 0x36, 0x36, 0x31,
 0x37, 0x36, 0x34, 0x30, 0x38, 0x31, 0x30, 0x33,
 0x63, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x59,
 0x30, 0x13, 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce,
 0x3d, 0x02, 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48,
 0xce, 0x3d, 0x03, 0x01, 0x07, 0x03, 0x42, 0x00,
 0x04, 0x22, 0xe9, 0x59, 0x3b, 0x2f, 0x6e, 0x5c,
 0xad, 0x1a, 0xc8, 0x2e, 0xe3, 0x4f, 0xa6, 0x74,
 0xfd, 0x5e, 0x0f, 0x9f, 0x79, 0xb9, 0x8b, 0xaf,
 0x50, 0x0c, 0x04, 0xda, 0xbe, 0x71, 0x85, 0x85,
 0x04, 0x91, 0x15, 0xd2, 0xad, 0xbb, 0x94, 0x65,
 0x45, 0x7f, 0x30, 0xb1, 0x32, 0x71, 0x3e, 0x9d,
 0x38, 0x26, 0x79, 0x27, 0x8e, 0x3c, 0x7f, 0xdb,
 0xf2, 0x5c, 0x63, 0x7d, 0xf4, 0x02, 0xb0, 0x0e,
 0xec, 0xa3, 0x3f, 0x30, 0x3d, 0x30, 0x12, 0x06,
 0x09, 0x2b, 0x06, 0x01, 0x04, 0x01, 0xa0, 0x20,
 0x81, 0x49, 0x04, 0x05, 0x02, 0x03, 0x40, 0x00,
 0x91, 0x30, 0x12, 0x06, 0x03, 0x55, 0x1d, 0x13,
 0x01, 0x01, 0xff, 0x04, 0x08, 0x30, 0x06, 0x01,
 0x01, 0xff, 0x02, 0x01, 0x00, 0x30, 0x13, 0x06,
 0x03, 0x55, 0x1d, 0x25, 0x04, 0x0c, 0x30, 0x0a,
 0x06, 0x08, 0x2b, 0x06, 0x01, 0x05, 0x05, 0x07,
 0x03, 0x02, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86,
 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x03, 0x48,
 0x00, 0x30, 0x45, 0x02, 0x21, 0x00, 0x9e, 0x56,
 0xab, 0xe9, 0x76, 0x6f, 0xf8, 0xb7, 0x41, 0x5f,
 0x7c, 0xaa, 0xe4, 0xb1, 0xb9, 0xbd, 0xae, 0x3d,
 0x78, 0xec, 0xb4, 0x35, 0x93, 0x4d, 0x29, 0xe2,
 0x66, 0xa6, 0xff, 0xfb, 0xae, 0xb1, 0x02, 0x20,
 0x00, 0xf6, 0x53, 0x53, 0x28, 0x4a, 0x8f, 0xbb,
 0xbd, 0xf9, 0x6c, 0x0a, 0x0e, 0xd0, 0xf2, 0x35,
 0x84, 0x75, 0xc9, 0x8d, 0x19, 0xa6, 0x05, 0x18,
 0xe0, 0x15, 0x95, 0xd4, 0x4c, 0x79, 0x2f, 0xba };

const uint8_t MBED_CLOUD_DEV_BOOTSTRAP_SERVER_ROOT_CA_CERTIFICATE[] = 
{ 0x30, 0x82, 0x02, 0x32, 0x30, 0x82, 0x01, 0xd9,
 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x10, 0x45,
 0x5e, 0x28, 0x41, 0x2b, 0xca, 0xf1, 0xb1, 0x4e,
 0xea, 0xad, 0x06, 0x25, 0x6a, 0xd8, 0x4a, 0x30,
 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d,
 0x04, 0x03, 0x02, 0x30, 0x71, 0x31, 0x0b, 0x30,
 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02,
 0x47, 0x42, 0x31, 0x17, 0x30, 0x15, 0x06, 0x03,
 0x55, 0x04, 0x08, 0x13, 0x0e, 0x43, 0x61, 0x6d,
 0x62, 0x72, 0x69, 0x64, 0x67, 0x65, 0x73, 0x68,
 0x69, 0x72, 0x65, 0x31, 0x12, 0x30, 0x10, 0x06,
 0x03, 0x55, 0x04, 0x07, 0x13, 0x09, 0x43, 0x61,
 0x6d, 0x62, 0x72, 0x69, 0x64, 0x67, 0x65, 0x31,
 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x0a,
 0x13, 0x07, 0x41, 0x52, 0x4d, 0x20, 0x4c, 0x74,
 0x64, 0x31, 0x23, 0x30, 0x21, 0x06, 0x03, 0x55,
 0x04, 0x03, 0x13, 0x1a, 0x41, 0x52, 0x4d, 0x20,
 0x4f, 0x66, 0x66, 0x69, 0x63, 0x69, 0x61, 0x6c,
 0x53, 0x20, 0x42, 0x6f, 0x6f, 0x74, 0x73, 0x74,
 0x72, 0x61, 0x70, 0x20, 0x43, 0x41, 0x30, 0x20,
 0x17, 0x0d, 0x31, 0x37, 0x30, 0x33, 0x32, 0x30,
 0x31, 0x35, 0x31, 0x31, 0x33, 0x33, 0x5a, 0x18,
 0x0f, 0x32, 0x30, 0x35, 0x32, 0x30, 0x33, 0x32,
 0x30, 0x31, 0x35, 0x32, 0x31, 0x33, 0x33, 0x5a,
 0x30, 0x71, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03,
 0x55, 0x04, 0x06, 0x13, 0x02, 0x47, 0x42, 0x31,
 0x17, 0x30, 0x15, 0x06, 0x03, 0x55, 0x04, 0x08,
 0x13, 0x0e, 0x43, 0x61, 0x6d, 0x62, 0x72, 0x69,
 0x64, 0x67, 0x65, 0x73, 0x68, 0x69, 0x72, 0x65,
 0x31, 0x12, 0x30, 0x10, 0x06, 0x03, 0x55, 0x04,
 0x07, 0x13, 0x09, 0x43, 0x61, 0x6d, 0x62, 0x72,
 0x69, 0x64, 0x67, 0x65, 0x31, 0x10, 0x30, 0x0e,
 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x07, 0x41,
 0x52, 0x4d, 0x20, 0x4c, 0x74, 0x64, 0x31, 0x23,
 0x30, 0x21, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13,
 0x1a, 0x41, 0x52, 0x4d, 0x20, 0x4f, 0x66, 0x66,
 0x69, 0x63, 0x69, 0x61, 0x6c, 0x53, 0x20, 0x42,
 0x6f, 0x6f, 0x74, 0x73, 0x74, 0x72, 0x61, 0x70,
 0x20, 0x43, 0x41, 0x30, 0x59, 0x30, 0x13, 0x06,
 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02, 0x01,
 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03,
 0x01, 0x07, 0x03, 0x42, 0x00, 0x04, 0xf7, 0xdc,
 0x05, 0x70, 0x4f, 0x1b, 0x9d, 0xa8, 0x66, 0x52,
 0xf0, 0xb4, 0x99, 0x05, 0xe3, 0x89, 0x73, 0x08,
 0x4e, 0x23, 0x67, 0xdb, 0x6b, 0xac, 0x5a, 0xbe,
 0xab, 0xb0, 0x06, 0x49, 0xff, 0xd6, 0xc5, 0xd0,
 0x82, 0xbd, 0x45, 0xd5, 0x1b, 0xc2, 0x2f, 0x39,
 0x02, 0x3c, 0xf2, 0xa5, 0x42, 0x78, 0xf7, 0x55,
 0x9e, 0x9f, 0xdb, 0x3b, 0x77, 0xba, 0x0e, 0xa1,
 0x9f, 0x93, 0xcc, 0x73, 0x97, 0x99, 0xa3, 0x51,
 0x30, 0x4f, 0x30, 0x0b, 0x06, 0x03, 0x55, 0x1d,
 0x0f, 0x04, 0x04, 0x03, 0x02, 0x01, 0x86, 0x30,
 0x0f, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x01, 0x01,
 0xff, 0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xff,
 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04,
 0x16, 0x04, 0x14, 0xd5, 0x67, 0x40, 0xe7, 0xe2,
 0x8e, 0x96, 0x60, 0xb1, 0xb7, 0xbc, 0x68, 0xe9,
 0x76, 0xc9, 0x0e, 0xa4, 0xe6, 0x90, 0x9a, 0x30,
 0x10, 0x06, 0x09, 0x2b, 0x06, 0x01, 0x04, 0x01,
 0x82, 0x37, 0x15, 0x01, 0x04, 0x03, 0x02, 0x01,
 0x00, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48,
 0xce, 0x3d, 0x04, 0x03, 0x02, 0x03, 0x47, 0x00,
 0x30, 0x44, 0x02, 0x20, 0x09, 0x7d, 0xce, 0x2f,
 0x1c, 0x93, 0xf9, 0x1f, 0x5f, 0x0f, 0xf5, 0x02,
 0x76, 0x7e, 0xa2, 0xf0, 0x5b, 0x1f, 0xc9, 0xe4,
 0x04, 0xae, 0x58, 0xf0, 0xd6, 0x3d, 0xea, 0x1a,
 0xf4, 0x81, 0x4d, 0x87, 0x02, 0x20, 0x0c, 0xd4,
 0xbd, 0x67, 0xa4, 0xf4, 0xd6, 0x3d, 0x52, 0xa5,
 0xbe, 0x6d, 0x66, 0x03, 0xc5, 0xb1, 0x29, 0x7e,
 0x9a, 0xb0, 0x19, 0x30, 0x69, 0x9d, 0x7d, 0x72,
 0xb7, 0x88, 0x3c, 0xb9, 0x94, 0x9b };

const uint8_t MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_PRIVATE_KEY[] = 
{ 0x30, 0x81, 0x93, 0x02, 0x01, 0x00, 0x30, 0x13,
 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02,
 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d,
 0x03, 0x01, 0x07, 0x04, 0x79, 0x30, 0x77, 0x02,
 0x01, 0x01, 0x04, 0x20, 0x1f, 0x89, 0xb9, 0xdf,
 0x6b, 0x37, 0x99, 0xe3, 0x3c, 0x91, 0xf7, 0x90,
 0x52, 0x2f, 0xdd, 0xf2, 0x5c, 0x8a, 0x7b, 0x78,
 0x7c, 0xda, 0x5b, 0xf1, 0xc7, 0xbc, 0xcf, 0xfa,
 0x8a, 0xc3, 0x56, 0x67, 0xa0, 0x0a, 0x06, 0x08,
 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03, 0x01, 0x07,
 0xa1, 0x44, 0x03, 0x42, 0x00, 0x04, 0x22, 0xe9,
 0x59, 0x3b, 0x2f, 0x6e, 0x5c, 0xad, 0x1a, 0xc8,
 0x2e, 0xe3, 0x4f, 0xa6, 0x74, 0xfd, 0x5e, 0x0f,
 0x9f, 0x79, 0xb9, 0x8b, 0xaf, 0x50, 0x0c, 0x04,
 0xda, 0xbe, 0x71, 0x85, 0x85, 0x04, 0x91, 0x15,
 0xd2, 0xad, 0xbb, 0x94, 0x65, 0x45, 0x7f, 0x30,
 0xb1, 0x32, 0x71, 0x3e, 0x9d, 0x38, 0x26, 0x79,
 0x27, 0x8e, 0x3c, 0x7f, 0xdb, 0xf2, 0x5c, 0x63,
 0x7d, 0xf4, 0x02, 0xb0, 0x0e, 0xec };

const char MBED_CLOUD_DEV_MANUFACTURER[] = "dev_manufacturer";

const char MBED_CLOUD_DEV_MODEL_NUMBER[] = "dev_model_num";

const char MBED_CLOUD_DEV_SERIAL_NUMBER[] = "0";

const char MBED_CLOUD_DEV_DEVICE_TYPE[] = "dev_device_type";

const char MBED_CLOUD_DEV_HARDWARE_VERSION[] = "dev_hardware_version";

const uint32_t MBED_CLOUD_DEV_MEMORY_TOTAL_KB = 0;

const uint32_t MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_CERTIFICATE_SIZE = sizeof(MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_CERTIFICATE);
const uint32_t MBED_CLOUD_DEV_BOOTSTRAP_SERVER_ROOT_CA_CERTIFICATE_SIZE = sizeof(MBED_CLOUD_DEV_BOOTSTRAP_SERVER_ROOT_CA_CERTIFICATE);
const uint32_t MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_PRIVATE_KEY_SIZE = sizeof(MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_PRIVATE_KEY);

#endif //__MBED_CLOUD_DEV_CREDENTIALS_H__
