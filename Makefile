all: build package

build:
	bazel build //packages/maths:maths
	bazel build //packages/publisher:publisher
	bazel build //packages/subscriber:subscriber

package: 
	bazel build //packages/publisher:publisher_rpm
	bazel build //packages/subscriber:subscriber_rpm
	bazel build //packages/maths:maths_rpm

clean: 
	rm -rf bazel-*

.PHONY: build package
