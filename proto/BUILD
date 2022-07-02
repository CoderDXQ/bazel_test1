#load("@rules_cc//cc:defs.bzl", "cc_proto_library")
#load("@rules_proto//proto:defs.bzl", "proto_library")
 
cc_binary(
    name = "bazel_test",
    srcs = ["main.cc"],
    deps = [":foo_cc_proto"],
)
 
proto_library(
    name = "foo_proto",
    srcs = [
        "foo.proto",
    ],
)
 
cc_proto_library(
    name = "foo_cc_proto",
    deps = [
        ":foo_proto",
    ],
)