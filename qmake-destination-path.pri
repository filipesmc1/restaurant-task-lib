platform_path = unknown-platform
compiler_path = unknown-compiler
processor_path = unknown-processor
build_path = unknown-build

PLATFORM_LINUX {
    platform_path = linux
}
COMPILER_GCC {
    compiler_path = gcc
}
PROCESSOR_x64 {
    processor_path = x64
}
BUILD_DEBUG {
    build_path = debug
} else {
    build_path = release
}
DESTINATION_PATH = $$platform_path/$$compiler_path/$$processor_path/$$build_path
