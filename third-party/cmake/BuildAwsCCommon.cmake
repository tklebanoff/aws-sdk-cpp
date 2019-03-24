execute_process(COMMAND ${PROJECT_SOURCE_DIR}/get_my_os.sh OUTPUT_VARIABLE MYOS)
message(STATUS "MYOS: ${MYOS}")

if(${TARGET_ARCH} STREQUAL ANDROID)
    ExternalProject_Add(AwsCCommon
        PREFIX ${AWS_DEPS_BUILD_DIR}
        GIT_REPOSITORY ${AWS_C_COMMON_URL}
        GIT_TAG ${AWS_C_COMMON_TAG}
        BUILD_IN_SOURCE 0
        UPDATE_COMMAND ""
        CMAKE_ARGS
        -DCMAKE_INSTALL_PREFIX=${AWS_DEPS_INSTALL_DIR}
        -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
        -DBUILD_SHARED_LIBS=${BUILD_SHARED_LIBS}
        -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
        -DANDROID_NATIVE_API_LEVEL=${ANDROID_NATIVE_API_LEVEL}
        -DANDROID_ABI=${ANDROID_ABI}
        -DANDROID_TOOLCHAIN_NAME=${ANDROID_TOOLCHAIN_NAME}
        -DANDROID_STANDALONE_TOOLCHAIN=${ANDROID_STANDALONE_TOOLCHAIN}
        -DANDROID_STL=${ANDROID_STL}
        -DENABLE_HW_OPTIMIZATION=OFF
        )
elseif(TARGET_ARCH STREQUAL "APPLE" AND DEFINED CMAKE_OSX_ARCHITECTURES AND NOT CMAKE_OSX_ARCHITECTURES STREQUAL "")
    message("Cross compiling aws-c-common for architecture ${CMAKE_OSX_ARCHITECTURES}")
    ExternalProject_Add(AwsCCommon
        PREFIX ${AWS_DEPS_BUILD_DIR}
        GIT_REPOSITORY ${AWS_C_COMMON_URL}
        GIT_TAG ${AWS_C_COMMON_TAG}
        BUILD_IN_SOURCE 0
        UPDATE_COMMAND ""
        CMAKE_ARGS
        -DCMAKE_INSTALL_PREFIX=${AWS_DEPS_INSTALL_DIR}
        -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
        -DBUILD_SHARED_LIBS=${BUILD_SHARED_LIBS}
        -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
        -DCMAKE_OSX_SYSROOT=${CMAKE_OSX_SYSROOT}
        -DCMAKE_OSX_ARCHITECTURES=${CMAKE_OSX_ARCHITECTURES}
        -DCMAKE_SYSTEM_NAME=${CMAKE_SYSTEM_NAME}
        -DCMAKE_C_FLAGS=${CMAKE_C_FLAGS}
        )
elseif(${MYOS} STREQUAL "Alpine Linux")
    #tklebanoff: added /usr/lib/libexecinfo.a for Alpine, backtrace symbol
    ExternalProject_Add(AwsCCommon
        PREFIX ${AWS_DEPS_BUILD_DIR}
        GIT_REPOSITORY ${AWS_C_COMMON_URL}
        GIT_TAG ${AWS_C_COMMON_TAG}
        BUILD_IN_SOURCE 0
        UPDATE_COMMAND ""
        CMAKE_ARGS
        -DCMAKE_INSTALL_PREFIX=${AWS_DEPS_INSTALL_DIR}
        -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
        -DCMAKE_C_STANDARD_LIBRARIES="/usr/lib/libexecinfo.a"
        -DBUILD_SHARED_LIBS=${BUILD_SHARED_LIBS}
        -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
        -DCMAKE_RUNTIME_OUTPUT_DIRECTORY=${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
        )
    #[[
    set(MY_AWS_C_COMMON_URL https://github.com/tklebanoff/aws-c-common.git)
    set(MY_AWS_C_COMMON_TAG master)
    message(STATUS "ExternalProject_Add AwsCCommon, url: ${MY_AWS_C_COMMON_URL}")
    message(STATUS "testing 123")
    ExternalProject_Add(AwsCCommon
        PREFIX ${AWS_DEPS_BUILD_DIR}
        GIT_REPOSITORY ${MY_AWS_C_COMMON_URL}
        GIT_TAG ${MY_AWS_C_COMMON_TAG}
        BUILD_IN_SOURCE 0
        UPDATE_COMMAND ""
        CMAKE_ARGS
        -DCMAKE_INSTALL_PREFIX=${AWS_DEPS_INSTALL_DIR}
        -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
        -DBUILD_SHARED_LIBS=${BUILD_SHARED_LIBS}
        -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
        -DCMAKE_RUNTIME_OUTPUT_DIRECTORY=${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
        )
    #]]
else()
    ExternalProject_Add(AwsCCommon
        PREFIX ${AWS_DEPS_BUILD_DIR}
        GIT_REPOSITORY ${AWS_C_COMMON_URL}
        GIT_TAG ${AWS_C_COMMON_TAG}
        BUILD_IN_SOURCE 0
        UPDATE_COMMAND ""
        CMAKE_ARGS
        -DCMAKE_INSTALL_PREFIX=${AWS_DEPS_INSTALL_DIR}
        -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
        -DCMAKE_C_STANDARD_LIBRARIES="/usr/lib/libexecinfo.a"
        -DBUILD_SHARED_LIBS=${BUILD_SHARED_LIBS}
        -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
        -DCMAKE_RUNTIME_OUTPUT_DIRECTORY=${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
        )
endif()
