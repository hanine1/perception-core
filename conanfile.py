from conan import ConanFile
from conan.tools.cmake import CMakeDeps, CMakeToolchain, cmake_layout


class PerceptionCoreConan(ConanFile):
    settings = "os", "arch", "compiler", "build_type"

    requires = "eigen/3.4.1"

    def layout(self):
        cmake_layout(self)

    def generate(self):
        CMakeDeps(self).generate()
        CMakeToolchain(self).generate()