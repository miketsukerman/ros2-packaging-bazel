all: build package

build:
	bazel build //packages/package_a:package_a
	bazel build //packages/package_b:package_b

package: 
	bazel build //packages/package_a:package_a_rpm
	bazel build //packages/package_b:package_b_rpm

.PHONY: build package
