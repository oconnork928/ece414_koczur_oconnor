#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/Lab06.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/Lab06.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=uart1.c adc_intf.c glcdfont.c tft_gfx.c tft_master.c Touchscreen.c main.c ic1.c oc1_plib.c ztimer2.c PIDfsm.c timer_1.c timer.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/uart1.o ${OBJECTDIR}/adc_intf.o ${OBJECTDIR}/glcdfont.o ${OBJECTDIR}/tft_gfx.o ${OBJECTDIR}/tft_master.o ${OBJECTDIR}/Touchscreen.o ${OBJECTDIR}/main.o ${OBJECTDIR}/ic1.o ${OBJECTDIR}/oc1_plib.o ${OBJECTDIR}/ztimer2.o ${OBJECTDIR}/PIDfsm.o ${OBJECTDIR}/timer_1.o ${OBJECTDIR}/timer.o
POSSIBLE_DEPFILES=${OBJECTDIR}/uart1.o.d ${OBJECTDIR}/adc_intf.o.d ${OBJECTDIR}/glcdfont.o.d ${OBJECTDIR}/tft_gfx.o.d ${OBJECTDIR}/tft_master.o.d ${OBJECTDIR}/Touchscreen.o.d ${OBJECTDIR}/main.o.d ${OBJECTDIR}/ic1.o.d ${OBJECTDIR}/oc1_plib.o.d ${OBJECTDIR}/ztimer2.o.d ${OBJECTDIR}/PIDfsm.o.d ${OBJECTDIR}/timer_1.o.d ${OBJECTDIR}/timer.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/uart1.o ${OBJECTDIR}/adc_intf.o ${OBJECTDIR}/glcdfont.o ${OBJECTDIR}/tft_gfx.o ${OBJECTDIR}/tft_master.o ${OBJECTDIR}/Touchscreen.o ${OBJECTDIR}/main.o ${OBJECTDIR}/ic1.o ${OBJECTDIR}/oc1_plib.o ${OBJECTDIR}/ztimer2.o ${OBJECTDIR}/PIDfsm.o ${OBJECTDIR}/timer_1.o ${OBJECTDIR}/timer.o

# Source Files
SOURCEFILES=uart1.c adc_intf.c glcdfont.c tft_gfx.c tft_master.c Touchscreen.c main.c ic1.c oc1_plib.c ztimer2.c PIDfsm.c timer_1.c timer.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk ${DISTDIR}/Lab06.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=32MX120F032B
MP_LINKER_FILE_OPTION=
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/uart1.o: uart1.c  .generated_files/flags/default/b1b7c84cb1e8e9f6a314adca7e87f4ed28a3de58 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/uart1.o.d 
	@${RM} ${OBJECTDIR}/uart1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/uart1.o.d" -o ${OBJECTDIR}/uart1.o uart1.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/adc_intf.o: adc_intf.c  .generated_files/flags/default/1dadcede07e18978aaac4833be9e330bf4571442 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/adc_intf.o.d 
	@${RM} ${OBJECTDIR}/adc_intf.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/adc_intf.o.d" -o ${OBJECTDIR}/adc_intf.o adc_intf.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/glcdfont.o: glcdfont.c  .generated_files/flags/default/570cd83cf61ac25e3e7eacccf246006e87b5188b .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/glcdfont.o.d 
	@${RM} ${OBJECTDIR}/glcdfont.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/glcdfont.o.d" -o ${OBJECTDIR}/glcdfont.o glcdfont.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/tft_gfx.o: tft_gfx.c  .generated_files/flags/default/c0eb132f6c469923d8261911b0a8321213f809a9 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/tft_gfx.o.d 
	@${RM} ${OBJECTDIR}/tft_gfx.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/tft_gfx.o.d" -o ${OBJECTDIR}/tft_gfx.o tft_gfx.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/tft_master.o: tft_master.c  .generated_files/flags/default/3fe12e66ed42dda38504969e230d775393c38a14 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/tft_master.o.d 
	@${RM} ${OBJECTDIR}/tft_master.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/tft_master.o.d" -o ${OBJECTDIR}/tft_master.o tft_master.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/Touchscreen.o: Touchscreen.c  .generated_files/flags/default/f07cd767e66f220f4adc62478f792c33d423bfa6 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/Touchscreen.o.d 
	@${RM} ${OBJECTDIR}/Touchscreen.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/Touchscreen.o.d" -o ${OBJECTDIR}/Touchscreen.o Touchscreen.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/main.o: main.c  .generated_files/flags/default/972d0b933805cfcc1f373cb0ea97377d950a55b7 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/main.o.d" -o ${OBJECTDIR}/main.o main.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/ic1.o: ic1.c  .generated_files/flags/default/4821da828bfdab82088e13b0108c6e9d1edfd3f7 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/ic1.o.d 
	@${RM} ${OBJECTDIR}/ic1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/ic1.o.d" -o ${OBJECTDIR}/ic1.o ic1.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/oc1_plib.o: oc1_plib.c  .generated_files/flags/default/db6420ae2a926961594fe33d5b0ade9c39a3619 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/oc1_plib.o.d 
	@${RM} ${OBJECTDIR}/oc1_plib.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/oc1_plib.o.d" -o ${OBJECTDIR}/oc1_plib.o oc1_plib.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/ztimer2.o: ztimer2.c  .generated_files/flags/default/fd9fc736dd2e62ce50cb499a3ae7d9f3b88681e .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/ztimer2.o.d 
	@${RM} ${OBJECTDIR}/ztimer2.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/ztimer2.o.d" -o ${OBJECTDIR}/ztimer2.o ztimer2.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/PIDfsm.o: PIDfsm.c  .generated_files/flags/default/a052b12f1e90f46cb060b66a2fd244f144bedde8 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/PIDfsm.o.d 
	@${RM} ${OBJECTDIR}/PIDfsm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/PIDfsm.o.d" -o ${OBJECTDIR}/PIDfsm.o PIDfsm.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/timer_1.o: timer_1.c  .generated_files/flags/default/bd94a92d95a96e71551ea4be7f1c4e9f3af94f29 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/timer_1.o.d 
	@${RM} ${OBJECTDIR}/timer_1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/timer_1.o.d" -o ${OBJECTDIR}/timer_1.o timer_1.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/timer.o: timer.c  .generated_files/flags/default/70cc4d570a6faf8ff954a1a77cb28c39eda8ff06 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/timer.o.d 
	@${RM} ${OBJECTDIR}/timer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/timer.o.d" -o ${OBJECTDIR}/timer.o timer.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
else
${OBJECTDIR}/uart1.o: uart1.c  .generated_files/flags/default/3150ed4ad861de129a9b1e9f1b963fc4eb87e17e .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/uart1.o.d 
	@${RM} ${OBJECTDIR}/uart1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/uart1.o.d" -o ${OBJECTDIR}/uart1.o uart1.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/adc_intf.o: adc_intf.c  .generated_files/flags/default/ac5f9a77a58e66df37b633de6466aa79d7fb2aa2 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/adc_intf.o.d 
	@${RM} ${OBJECTDIR}/adc_intf.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/adc_intf.o.d" -o ${OBJECTDIR}/adc_intf.o adc_intf.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/glcdfont.o: glcdfont.c  .generated_files/flags/default/aa6c813554dd6dcb5183d62402b527a74905b528 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/glcdfont.o.d 
	@${RM} ${OBJECTDIR}/glcdfont.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/glcdfont.o.d" -o ${OBJECTDIR}/glcdfont.o glcdfont.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/tft_gfx.o: tft_gfx.c  .generated_files/flags/default/831bbc2c820d4209f425a61ab7493e9589edc272 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/tft_gfx.o.d 
	@${RM} ${OBJECTDIR}/tft_gfx.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/tft_gfx.o.d" -o ${OBJECTDIR}/tft_gfx.o tft_gfx.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/tft_master.o: tft_master.c  .generated_files/flags/default/a8e7fdec45dc446fc473c4f779e62622d73437f6 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/tft_master.o.d 
	@${RM} ${OBJECTDIR}/tft_master.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/tft_master.o.d" -o ${OBJECTDIR}/tft_master.o tft_master.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/Touchscreen.o: Touchscreen.c  .generated_files/flags/default/c767ed0955297ea487864d43d742db4e7199c283 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/Touchscreen.o.d 
	@${RM} ${OBJECTDIR}/Touchscreen.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/Touchscreen.o.d" -o ${OBJECTDIR}/Touchscreen.o Touchscreen.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/main.o: main.c  .generated_files/flags/default/1a9c04b9bfb113534199fd53e61b7ac0accadfab .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/main.o.d" -o ${OBJECTDIR}/main.o main.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/ic1.o: ic1.c  .generated_files/flags/default/73f49ba099474a7c5e5445c8347978ae290493c2 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/ic1.o.d 
	@${RM} ${OBJECTDIR}/ic1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/ic1.o.d" -o ${OBJECTDIR}/ic1.o ic1.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/oc1_plib.o: oc1_plib.c  .generated_files/flags/default/ed96d043ac5f79289ef086a67965e4171e2c3f67 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/oc1_plib.o.d 
	@${RM} ${OBJECTDIR}/oc1_plib.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/oc1_plib.o.d" -o ${OBJECTDIR}/oc1_plib.o oc1_plib.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/ztimer2.o: ztimer2.c  .generated_files/flags/default/8ae43903f7379f2d4ec53f1b373f122b6e1063e6 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/ztimer2.o.d 
	@${RM} ${OBJECTDIR}/ztimer2.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/ztimer2.o.d" -o ${OBJECTDIR}/ztimer2.o ztimer2.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/PIDfsm.o: PIDfsm.c  .generated_files/flags/default/1369dccd8d6f4432b7fe9bc8c7711c6329c1ff40 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/PIDfsm.o.d 
	@${RM} ${OBJECTDIR}/PIDfsm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/PIDfsm.o.d" -o ${OBJECTDIR}/PIDfsm.o PIDfsm.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/timer_1.o: timer_1.c  .generated_files/flags/default/17591bfb4d735540b75ea1d0f23bbb31e426d695 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/timer_1.o.d 
	@${RM} ${OBJECTDIR}/timer_1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/timer_1.o.d" -o ${OBJECTDIR}/timer_1.o timer_1.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
${OBJECTDIR}/timer.o: timer.c  .generated_files/flags/default/571287af031f89b0b26705b3c502ba300aa66545 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/timer.o.d 
	@${RM} ${OBJECTDIR}/timer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -fno-common -MP -MMD -MF "${OBJECTDIR}/timer.o.d" -o ${OBJECTDIR}/timer.o timer.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -D _SUPPRESS_PLIB_WARNING   
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/Lab06.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -g -mdebugger -D__MPLAB_DEBUGGER_PK3=1 -mprocessor=$(MP_PROCESSOR_OPTION)  -o ${DISTDIR}/Lab06.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_default=$(CND_CONF)  -legacy-libc  -D _SUPPRESS_PLIB_WARNING $(COMPARISON_BUILD)   -mreserve=data@0x0:0x1FC -mreserve=boot@0x1FC00490:0x1FC00BEF  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=__MPLAB_DEBUGGER_PK3=1,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml 
	
else
${DISTDIR}/Lab06.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION)  -o ${DISTDIR}/Lab06.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_default=$(CND_CONF)  -legacy-libc  -D _SUPPRESS_PLIB_WARNING $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml 
	${MP_CC_DIR}\\xc32-bin2hex ${DISTDIR}/Lab06.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
