add_subdirectory(utils)
add_subdirectory(port)
add_subdirectory(server)
add_subdirectory(client)
add_subdirectory(dbhelper)
add_subdirectory(protobuf_utils)

set(confUtil_SRCS
    ConfigUtil.cpp
)

include_directories(${THIRD_PARTY_DIR}/tinyxml)
add_library(confutil ${confUtil_SRCS})
target_link_libraries(confutil tinyxml utils)
install(TARGETS confutil DESTINATION lib)
