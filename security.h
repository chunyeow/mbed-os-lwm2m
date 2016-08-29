/*
 * Copyright (c) 2015 ARM Limited. All rights reserved.
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
#ifndef __SECURITY_H__
#define __SECURITY_H__

#include <inttypes.h>

#define MBED_DOMAIN "4efa8d3c-335b-4773-9df3-df8d67aa0afb"
#define MBED_ENDPOINT_NAME "3e203591-80cc-4500-9347-56a6184398f8"

const uint8_t SERVER_CERT[] = "-----BEGIN CERTIFICATE-----\r\n"
"MIIBmDCCAT6gAwIBAgIEVUCA0jAKBggqhkjOPQQDAjBLMQswCQYDVQQGEwJGSTEN\r\n"
"MAsGA1UEBwwET3VsdTEMMAoGA1UECgwDQVJNMQwwCgYDVQQLDANJb1QxETAPBgNV\r\n"
"BAMMCEFSTSBtYmVkMB4XDTE1MDQyOTA2NTc0OFoXDTE4MDQyOTA2NTc0OFowSzEL\r\n"
"MAkGA1UEBhMCRkkxDTALBgNVBAcMBE91bHUxDDAKBgNVBAoMA0FSTTEMMAoGA1UE\r\n"
"CwwDSW9UMREwDwYDVQQDDAhBUk0gbWJlZDBZMBMGByqGSM49AgEGCCqGSM49AwEH\r\n"
"A0IABLuAyLSk0mA3awgFR5mw2RHth47tRUO44q/RdzFZnLsAsd18Esxd5LCpcT9w\r\n"
"0tvNfBv4xJxGw0wcYrPDDb8/rjujEDAOMAwGA1UdEwQFMAMBAf8wCgYIKoZIzj0E\r\n"
"AwIDSAAwRQIhAPAonEAkwixlJiyYRQQWpXtkMZax+VlEiS201BG0PpAzAiBh2RsD\r\n"
"NxLKWwf4O7D6JasGBYf9+ZLwl0iaRjTjytO+Kw==\r\n"
"-----END CERTIFICATE-----\r\n";

const uint8_t CERT[] = "-----BEGIN CERTIFICATE-----\r\n"
"MIIBzjCCAXOgAwIBAgIEXnss5zAMBggqhkjOPQQDAgUAMDkxCzAJBgNVBAYTAkZ\r\n"
"JMQwwCgYDVQQKDANBUk0xHDAaBgNVBAMME21iZWQtY29ubmVjdG9yLTIwMTYwHh\r\n"
"cNMTYwODI5MTQ1MDI5WhcNMTYxMjMxMDYwMDAwWjCBoTFSMFAGA1UEAxNJNGVmY\r\n"
"ThkM2MtMzM1Yi00NzczLTlkZjMtZGY4ZDY3YWEwYWZiLzNlMjAzNTkxLTgwY2Mt\r\n"
"NDUwMC05MzQ3LTU2YTYxODQzOThmODEMMAoGA1UECxMDQVJNMRIwEAYDVQQKEwl\r\n"
"tYmVkIHVzZXIxDTALBgNVBAcTBE91bHUxDTALBgNVBAgTBE91bHUxCzAJBgNVBA\r\n"
"YTAkZJMFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAE5XlstyCXmIqMkQXjVmQRZ\r\n"
"Z74H3CPowO7lutM0QQe1hnzKgos7Euav6osYA9D25MvX3DhvmmPKWqydG2fic+O\r\n"
"1jAMBggqhkjOPQQDAgUAA0cAMEQCIFAw1ZYvW2j9tUxe0cGEUsxhwI3kkgxdSQY\r\n"
"m86p18DUBAiBU7Y70btjao9axps5uZY4qEXj11yeI05a5boZ23/Ow3Q==\r\n"
"-----END CERTIFICATE-----\r\n";

const uint8_t KEY[] = "-----BEGIN PRIVATE KEY-----\r\n"
"MIGHAgEAMBMGByqGSM49AgEGCCqGSM49AwEHBG0wawIBAQQgFpBLDuV93RD6AZY9\r\n"
"CqGMebjd6h30n+aoK2XrEKiTDsuhRANCAATleWy3IJeYioyRBeNWZBFlnvgfcI+j\r\n"
"A7uW60zRBB7WGfMqCizsS5q/qixgD0Pbky9fcOG+aY8parJ0bZ+Jz47W\r\n"
"-----END PRIVATE KEY-----\r\n";

#endif //__SECURITY_H__
