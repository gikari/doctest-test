add_executable(test_runner)

target_sources(
  test_runner
  PRIVATE
  main.cpp
)

target_link_libraries(test_runner
  PRIVATE
  testo::testo
  doctest::doctest
  )
