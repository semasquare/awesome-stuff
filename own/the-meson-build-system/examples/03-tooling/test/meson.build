tests = [
    'tooling'
]

gtest_dep = dependency('gtest', fallback : ['gtest', 'gtest_dep'])

foreach test_name : tests
    test_exe = executable(
        '_'.join(test_name.split('/')),
        [test_name + '.cpp'],
        include_directories : includes,
        dependencies : [gtest_dep],
        link_with : lib
    )
    test(
        '_'.join(test_name.split('/')),
        test_exe,
        timeout: 60
    )
endforeach
