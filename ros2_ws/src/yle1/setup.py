from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'yle1'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        (os.path.join('share', package_name), ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*.launch.py'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='bailey',
    maintainer_email='bailey@skibidi.net',
    description='WILE-E Coyote',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'accelerometer = yle1.accelerometer_interface:main',
        ],
    },
)
