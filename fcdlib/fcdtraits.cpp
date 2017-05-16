/*
 * fcdtraits.cpp
 *
 *  Created on: Sep 5, 2015
 *      Author: f4exb
 */

#include "fcdtraits.h"

const char *fcd_traits<Pro>::alsaDeviceName = "hw:CARD=V10";
const char *fcd_traits<ProPlus>::alsaDeviceName = "hw:CARD=V20";

const char *fcd_traits<Pro>::hardwareID = "FCDPro";
const char *fcd_traits<ProPlus>::hardwareID = "FCDPro+";

const char *fcd_traits<Pro>::interfaceIID = "sdrangel.samplesource.fcdpro";
const char *fcd_traits<ProPlus>::interfaceIID = "sdrangel.samplesource.fcdproplus";

const char *fcd_traits<Pro>::displayedName = "FunCube Dongle Pro";
const char *fcd_traits<ProPlus>::displayedName = "FunCube Dongle Pro+";

const char *fcd_traits<Pro>::pluginDisplayedName = "FunCube Pro Input";
const char *fcd_traits<ProPlus>::pluginDisplayedName = "FunCube Pro+ Input";

const char *fcd_traits<Pro>::pluginVersion = "3.5.0";
const char *fcd_traits<ProPlus>::pluginVersion = "3.5.0";
