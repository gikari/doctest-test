add_library(testo SHARED)
add_library(testo::testo ALIAS testo)

target_sources(testo
  PRIVATE
  library.cpp
)

target_link_libraries(testo
  PRIVATE
  doctest::doctest
)
