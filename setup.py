from setuptools import setup, Extension, find_packages

# Define your C extension module
c_extension = Extension(
    'pycpack.mymodule',
    sources=['pycpack/mymodule.c', 'pycpack/Faddeeva/Faddeeva.c']
    
)

setup(
    name='pycpack',
    version='0.2.0',
    ext_modules=[c_extension],
    packages=find_packages(),
    include_package_data=True,
    install_requires=[],
)

