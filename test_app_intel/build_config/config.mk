#
# project specific configuration file
# to be placed in main project directory
#

# set default mode
export MODE:=default

# set default profile
export PROFILE:=test

# set default toolchain
export TC:=intel

# enable ccache
#export WITH_CCACHE:=1

# project-specific flags
# disable some of icc remarks, that do not make much sense most of the time.
TMP:=-wd177,279,383,981,1418
export USER_OPT_FLAGS:=-DSOME_PROJECT_SPECIFIC_OPTION $(TMP)
export USER_DBG_FLAGS:=-DSOME_PROJECT_SPECIFIC_OPTION $(TMP)
export USER_PRF_FLAGS:=-DSOME_PROJECT_SPECIFIC_OPTION $(TMP)
unexport TMP
