cmake_minimum_required(VERSION 4.4)
project(LearnCpp LANGUAGES CXX)

# Todos los ejecutables van directo a la carpeta de build (cmake-build-debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Detecta automáticamente cada carpeta que tenga su propio CMakeLists.txt.
# CONFIGURE_DEPENDS hace que CMake vuelva a buscar al compilar si aparece una carpeta nueva.
file(GLOB project_lists CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR}/*/CMakeLists.txt)

foreach (project_list ${project_lists})
    get_filename_component(project_dir ${project_list} DIRECTORY)
    get_filename_component(project_name ${project_dir} NAME)

    if (project_name MATCHES "^cmake-build")
        continue()
    endif ()

    # Los archivos intermedios van a cmake-build-debug/projects/<nombre>
    # (si no, la carpeta "first_project/" chocaría con el ejecutable "first_project")
    add_subdirectory(${project_dir} ${CMAKE_BINARY_DIR}/projects/${project_name})
endforeach ()
