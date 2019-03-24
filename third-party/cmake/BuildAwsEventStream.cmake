# All the dependencies(aws-c-common and aws-checksums) should live in the same directory as aws-c-event-stream,
# therefore we set rpath for aws-c-event-stream to "$ORIGIN".
set(DEPS_RPATH "$ORIGIN")

if(${TARGET_ARCH} STREQUAL ANDROID)
    ExternalProject_Add(AwsCEventStream
        PREFIX ${AWS_DEPS_BUILD_DIR}
        GIT_REPOSITORY ${AWS_EVENT_STREAM_URL}
        GIT_TAG ${AWS_EVENT_STREAM_SHA}
        BUILD_IN_SOURCE 0
        UPDATE_COMMAND ""
        CMAKE_ARGS
        -DCMAKE_INSTALL_PREFIX=${AWS_DEPS_INSTALL_DIR}
        -DCMAKE_PREFIX_PATH=${AWS_DEPS_INSTALL_DIR}
        -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
        -DBUILD_SHARED_LIBS=${BUILD_SHARED_LIBS}
        -DCMAKE_INSTALL_RPATH=${DEPS_RPATH}
        -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
        -DANDROID_NATIVE_API_LEVEL=${ANDROID_NATIVE_API_LEVEL}
        -DANDROID_ABI=${ANDROID_ABI}
        -DANDROID_TOOLCHAIN_NAME=${ANDROID_TOOLCHAIN_NAME}
        -DANDROID_STANDALONE_TOOLCHAIN=${ANDROID_STANDALONE_TOOLCHAIN}
        -DANDROID_STL=${ANDROID_STL}
        )
elseif(TARGET_ARCH STREQUAL "APPLE" AND DEFINED CMAKE_OSX_ARCHITECTURES AND NOT CMAKE_OSX_ARCHITECTURES STREQUAL "")
    message("Cross compiling aws-c-event-stream for architecture ${CMAKE_OSX_ARCHITECTURES}")
    ExternalProject_Add(AwsCEventStream
        PREFIX ${AWS_DEPS_BUILD_DIR}
        GIT_REPOSITORY ${AWS_EVENT_STREAM_URL}
        GIT_TAG ${AWS_EVENT_STREAM_SHA}
        BUILD_IN_SOURCE 0
        UPDATE_COMMAND ""
        CMAKE_ARGS
        -DCMAKE_INSTALL_PREFIX=${AWS_DEPS_INSTALL_DIR}
        -DCMAKE_PREFIX_PATH=${AWS_DEPS_INSTALL_DIR}
        -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
        -DBUILD_SHARED_LIBS=${BUILD_SHARED_LIBS}
        -DCMAKE_INSTALL_RPATH=${DEPS_RPATH}
        -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
        -DCMAKE_OSX_SYSROOT=${CMAKE_OSX_SYSROOT}
        -DCMAKE_OSX_ARCHITECTURES=${CMAKE_OSX_ARCHITECTURES}
        -DCMAKE_SYSTEM_NAME=${CMAKE_SYSTEM_NAME}
        -DCMAKE_C_FLAGS=${CMAKE_C_FLAGS}
        )


else()
    execute_process(COMMAND sh -c "${CMAKE_SOURCE_DIR}/../get_my_os.sh" OUTPUT_VARIABLE MYOS)
    message(STATUS "MYOS: ${MYOS}") #why the fuck cant I string compare this

    if(MYOS STREQUAL Alpine_Linux)
        #tklebanoff added -DCMAKE_C_STANDARD_LIBRARIES="/usr/lib/libexecinfo.a" for Alpine
        message(STATUS "We are Alpine")
        ExternalProject_Add(AwsCEventStream
            PREFIX ${AWS_DEPS_BUILD_DIR}
            GIT_REPOSITORY ${AWS_EVENT_STREAM_URL}
            GIT_TAG ${AWS_EVENT_STREAM_SHA}
            BUILD_IN_SOURCE 0
            UPDATE_COMMAND ""
            CMAKE_ARGS
            -DCMAKE_INSTALL_PREFIX=${AWS_DEPS_INSTALL_DIR}
            -DCMAKE_PREFIX_PATH=${AWS_DEPS_INSTALL_DIR}
            -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
            -DCMAKE_C_STANDARD_LIBRARIES="/usr/lib/libexecinfo.a"
            -DBUILD_SHARED_LIBS=${BUILD_SHARED_LIBS}
            -DCMAKE_INSTALL_RPATH=${DEPS_RPATH}
            -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
            -DCMAKE_RUNTIME_OUTPUT_DIRECTORY=${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
            )
    else()
        ExternalProject_Add(AwsCEventStream
            PREFIX ${AWS_DEPS_BUILD_DIR}
            GIT_REPOSITORY ${AWS_EVENT_STREAM_URL}
            GIT_TAG ${AWS_EVENT_STREAM_SHA}
            BUILD_IN_SOURCE 0
            UPDATE_COMMAND ""
            CMAKE_ARGS
            -DCMAKE_INSTALL_PREFIX=${AWS_DEPS_INSTALL_DIR}
            -DCMAKE_PREFIX_PATH=${AWS_DEPS_INSTALL_DIR}
            -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
            -DBUILD_SHARED_LIBS=${BUILD_SHARED_LIBS}
            -DCMAKE_INSTALL_RPATH=${DEPS_RPATH}
            -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
            -DCMAKE_RUNTIME_OUTPUT_DIRECTORY=${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
            )
    endif()
endif()
