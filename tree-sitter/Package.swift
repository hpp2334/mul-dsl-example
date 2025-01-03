// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterMui",
    products: [
        .library(name: "TreeSitterMui", targets: ["TreeSitterMui"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterMui",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterMuiTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterMui",
            ],
            path: "bindings/swift/TreeSitterMuiTests"
        )
    ],
    cLanguageStandard: .c11
)
