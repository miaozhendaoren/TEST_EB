# \file
#
# \brief Autosar ApplTemplates
#
# This file contains the implementation of the Autosar
# module ApplTemplates.
#
# \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
#
# Copyright 2005 - 2010 Elektrobit Automotive GmbH
# All rights exclusively reserved for Elektrobit Automotive GmbH,
# unless expressly agreed to otherwise.

-include $(PROJECT_ROOT)\util\Merged_Makefile.mak
#################################################################
# Project settings
#################################################################

#################################################################
# CC_FILES_TO_BUILD:
# The variable CC_FILES_TO_BUILD should contain a list of C source
# files which are built in to object files.
#
# For example:
# CC_FILES_TO_BUILD = $(PROJECT_ROOT)\source\application\test\file1.c \
#   $(PROJECT_ROOT)\source\application\test\file2.c \
#   $(PROJECT_ROOT)\source\application\test\file3.c
#
# ATTENTION:
# Please use the following syntax: *.c
#
# The _INCLUDE and the _CC_OPT suffixes can be used for each source file
# in order to define a special include path or own compiler options for
# the source file.
#
# For example:
# file1_CC_OPT =   -> use special compiler options
# file1_INCLUDE =  -> use special include path
#

CC_FILES_TO_BUILD += $(wildcard $(PROJECT_ROOT)/source/application/*.c) \
                     $(wildcard $(PROJECT_ROOT)/source/application/$(TARGET)/$(DERIVATE)/*.c)

CC_FILES_TO_BUILD += $(wildcard $(PROJECT_ROOT)/source/stubs/*.c) \
                     $(wildcard $(PROJECT_ROOT)/source/stubs/$(TARGET)/$(DERIVATE)/*.c)

USER_INCLUDE_PATH += $(PROJECT_ROOT)\source\stubs \
                     $(PROJECT_ROOT)\source\stubs\$(TARGET)\$(DERIVATE) \
                     $(PROJECT_ROOT)\source\boards\$(BOARD) \
                     $(PROJECT_ROOT)\source\config \
                     $(PROJECT_ROOT)\source\config\$(TOOLCHAIN)

#################################################################
# tresos Generator options
#

# Add all plugins which shall be generated by the
# generic tresos Generator
#
# Please note:
# Do not add plugins Rte and Os here since they are
# generated by own generation tools!
#


#################################################################
# tresos settings
#################################################################
TRESOS2_WORKSPACE_DIR = $(PROJECT_ROOT)\..
TRESOS2_PROJECT_NAME = $(PROJECT_NAME)
TRESOS2_USER_OPTIONS += -Dinfo=false
TRESOS2_USER_OPTIONS += -data $(TRESOS2_WORKSPACE_DIR)

#################################################################
# CC_INCLUDE_PATH, CPP_INCLUDE_PATH and ASM_INCLUDE_PATH:
# The paths to own user include files. The paths must be preceded
# by no option . If more than one path is used, you will have
# to separate them by spaces.
#
# For example:
# CC_INCLUDE_PATH= c:\ssc_st10\my_include_folder \
#                    c:\more_includes
#
# After changing the CC_INCLUDE_PATH, the following option is
# necessary:
#
CC_INCLUDE_PATH  +=
CPP_INCLUDE_PATH +=
ASM_INCLUDE_PATH +=

#################################################################
# The following settings should not be modified
#################################################################

-include common.mak
