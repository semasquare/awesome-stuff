project(
    'tooling',
    'cpp',
    version : '0.3',
    default_options : ['warning_level=3', 'cpp_std=c++17']
)

includes = include_directories('include', 'internal')

subdir('internal')
subdir('include')
subdir('src')
subdir('test')

# meson.add_postconf_script('meson/postconf.py')
# meson.add_install_script('meson/install.py')
# meson.add_dist_script('meson/dist.py')

pkg_mod = import('pkgconfig')
pkg_mod.generate(
    name : meson.project_name(),
    version : meson.project_version(),
    description : ''
)

tooling_dep = declare_dependency(
    include_directories : includes,
    dependencies : [],
    link_with : lib.get_shared_lib()
)
