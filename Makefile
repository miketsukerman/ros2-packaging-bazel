all: build package

build:
	bazel build //packages/package_a:package_a

package: 
	bazel build //packages/package_a:package_a_rpm

.PHONY: build package
