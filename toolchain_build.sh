#!/bin/bash

checkError()
{
    if [ "${1}" -ne "0" ]; then
        echo "*** Error: ${2}"
        exit ${1}
    fi
}


if [ ! -f $MIRAI_SDK_PREFIX/lib/libImageIO.so ]; then
	pushd $MIRAI_PROJECT_ROOT_PATH/Mirai-ImageIO
	xcodebuild -target ImageIO -xcconfig xcconfig/Android-$ABI.xcconfig
	checkError $? "build ImageIO failed"
	
	#clean up
	rm -r build
	popd
fi