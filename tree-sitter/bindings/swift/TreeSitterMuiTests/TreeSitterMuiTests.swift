import XCTest
import SwiftTreeSitter
import TreeSitterMui

final class TreeSitterMuiTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_mui())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading mul grammar")
    }
}
