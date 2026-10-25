from setuptools import find_packages
from setuptools import setup

setup(
    name='norlab_custom_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('norlab_custom_interfaces', 'norlab_custom_interfaces.*')),
)
