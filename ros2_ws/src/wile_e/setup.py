from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'wile_e'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'animations'), glob(os.path.join(package_name,'animations','*'))),
        (os.path.join('share', package_name), glob('launch/*launch.[pxy][yma]*')),
        (os.path.join('share', package_name, 'templates'), glob(os.path.join(package_name,'templates','*'))),
        (os.path.join('share', package_name, 'HUD'), glob(os.path.join(package_name,'HUD','*'))),
        (os.path.join('share', package_name, 'sounds'), glob(os.path.join(package_name,'sounds','*'))),
        (os.path.join('share', package_name, 'fonts'), glob(os.path.join(package_name,'fonts','*'))),
        (os.path.join('share', package_name, 'NN'), glob(os.path.join(package_name,'NN','*'))),
    ],
    install_requires=[
        'setuptools',
        'smbus',
        'pygame',
        'librosa',
        'sounddevice'
    ],
    zip_safe=True,
    maintainer='bailey',
    maintainer_email='bailey@skibidi.net',
    description='WILE-E Coyote',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'accelerometer_interface = wile_e.accelerometer_interface:main',
            'remote_receiver = wile_e.remote_receiver:main',
            'teensy_interface = wile_e.teensy_interface:main',
            'roboclaw_interface = wile_e.roboclaw_interface:main',
            'sound_generator = wile_e.sound_generator:main',
            'NN_interface = wile_e.NN_interface:main',
            'visualizer = wile_e.visualizer:main',
            'logger = wile_e.logger:main',
            'camera = wile_e.camera:main',
        ],
    },
)
