package tree_sitter_mui_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_mui "github.com/tree-sitter/tree-sitter-mul/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mui.Language())
	if language == nil {
		t.Errorf("Error loading mul grammar")
	}
}
