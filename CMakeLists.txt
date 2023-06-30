cmake_minimum_required(VERSION 3.11)
project(opendds_project CXX)

set(CMAKE_CXX_STANDARD 14)

# set(CMAKE_MODULE_PATH
# ${CMAKE_MODULE_PATH}
# "./OpenDDS-3.24.1/cmake")
set(CMAKE_PREFIX_PATH
    ${CMAKE_PREFIX_PATH}
    "./OpenDDS/cmake")
find_package(OpenDDS REQUIRED)

set(SOURCE_FILES
    "src/HelloWorld.cpp"
)

add_executable(opendds_project ${SOURCE_FILES})
target_link_libraries(opendds_project
    PUBLIC
    OpenDDS::Dcps
    OpenDDS::InfoRepoDiscovery
    ACE::ACE
)

set(CONFIG_FILES "config/DCPSConfig.ini")

file(COPY ${CONFIG_FILES} DESTINATION ${CMAKE_BINARY_DIR})
