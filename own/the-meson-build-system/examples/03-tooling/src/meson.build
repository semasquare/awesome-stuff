lib_sources = [
    'tooling.cpp'
]

sources = lib_sources + ['main.cpp']

lib = both_libraries(
    'libtooling',
    lib_sources,
    include_directories : includes,
    install : true
)

executable(
    meson.project_name(),
    'main.cpp',
    include_directories : includes,
    link_with : lib.get_static_lib()
)

clangtidy = find_program('clang-tidy', required: false)
if clangtidy.found()
    run_target(
        'lint',
        command: [
            clangtidy,
            '-quiet',
            '-p', meson.build_root()
        ] + sources)
endif
