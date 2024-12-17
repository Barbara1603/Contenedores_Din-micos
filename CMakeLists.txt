
cmake_minimum_required(VERSION 3.10)

project(Contenedores_Din_micos)

# Si Boost no se encuentra automáticamente, agregamos la ruta manualmente
set(BOOST_ROOT "C:/Users/barba/Desktop/BOOST")

# Buscar Boost
find_package(Boost 1.70 REQUIRED)

# Asegurarse de que Boost se encuentre en los directorios correctos
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    link_directories(${Boost_LIBRARY_DIRS})
    message(STATUS "Boost found!")
else()
    message(FATAL_ERROR "Boost not found!")
endif()

add_executable(Contenedores_Din_micos main.cpp)

# Vincula Boost con tu proyecto
target_link_libraries(Contenedores_Din_micos Boost::Boost)

