from setuptools import find_packages
from setuptools import setup

setup(
    name='auv_control',
    version='0.1.0',
    packages=find_packages(
        include=('auv_control', 'auv_control.*')),
)
