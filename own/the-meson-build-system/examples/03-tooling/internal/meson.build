configuration = configuration_data({
    'name' : meson.project_name(),
    'version' : meson.project_version(),
    'os' : host_machine.system(),
    'cpu' : host_machine.cpu_family()
})

r = run_command('git', 'rev-parse', 'HEAD')
if r.returncode() == 0
    output = r.stdout().strip()

    configuration.set('commit', output)
endif

configure_file(
    input : 'config.impl.hpp.in',
    output : 'config.impl.hpp',
    configuration : configuration
)
