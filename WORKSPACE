workspace(name = "my_first_bazel_ros_workspace") # choose your workspace name here
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

RULES_ROS_VERSION = "xxx" # TODO: where to find the right version
RUIES_ROS_SHA = "xxx"

# until we have a first release, please use this:
git_repository(
    name = "rules_ros",
    remote = "https://github.com/ApexAI/rules_ros.git",
    branch = "main",
)

# after the first release, switch to this dependency 
#https_archive(
#    name = "rules_ros",
#    sha256 = RULES_ROS_SHA,
#    strip_prefix = "xxx",
#    url = "https://github.com/ApexAI/rules_ros/archive/{}.zip".format(RULES_ROS_VERSION),
#)

load("@rules_ros//repos/config:defs.bzl", "configure_ros2")
configure_ros2(distro = "humble") # currently only Humble is supported

load("@ros2_config//:setup.bzl", "setup")
setup()

load("@rules_ros//thirdparty:setup_01.bzl", "setup_01")
setup_01()

load("@rules_ros//thirdparty:setup_02.bzl", "setup_02")
setup_02()

load("@rules_ros//thirdparty:setup_03.bzl", "setup_03")
setup_03()

load("@rules_ros//thirdparty:setup_04.bzl", "setup_04")
setup_04()

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
http_archive(
    name = "rules_pkg",
    urls = [
        "https://github.com/bazelbuild/rules_pkg/releases/download/0.10.1/rules_pkg-0.10.1.tar.gz",
    ],
    sha256 = "d250924a2ecc5176808fc4c25d5cf5e9e79e6346d79d5ab1c493e289e722d1d0",
)
load("@rules_pkg//:deps.bzl", "rules_pkg_dependencies")
rules_pkg_dependencies()

load("@rules_pkg//toolchains/rpm:rpmbuild_configure.bzl", "find_system_rpmbuild")

find_system_rpmbuild(
    name = "rules_pkg_rpmbuild",
    verbose = False,
)
