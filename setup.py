from setuptools import setup, Extension

# Define your C extension module
c_extension = Extension(
    'pycpack.mymodule',
    sources=['pycpack/mymodule.c'],
)

setup(
    name='pycpack',
    version='0.2.0',
    ext_modules=[c_extension],
    packages=['pycpack'],
    install_requires=[],
)

