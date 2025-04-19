@class NSBrowser, NSView, GFGraph, GFGraphEditorView, GFNode;

@interface GFGraphBrowserView : NSView {
    NSView *_insideView;
    GFGraph *_rootGraph;
    GFGraphEditorView *_graphEditor;
    NSBrowser *_browser;
    GFNode *_currentNode;
    BOOL _displayNodes;
    void *_unused[4];
}

+ (BOOL)_isGraph:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)delete:(id)a0;
- (void)_finishInitialization;
- (long long)browser:(id)a0 numberOfRowsInColumn:(long long)a1;
- (void)browser:(id)a0 willDisplayCell:(id)a1 atRow:(long long)a2 column:(long long)a3;
- (void)copy:(id)a0;
- (void)cut:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)keyDown:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (void)setCurrentNode:(id)a0;
- (id)currentNode;
- (void)setGraphEditor:(id)a0;
- (void)__graphDidChange:(id)a0;
- (BOOL)_displayNodes;
- (BOOL)_getPathFromGraph:(id)a0 toNode:(id)a1 withBuffer:(id *)a2;
- (void)_graphUpdated:(id)a0;
- (unsigned long long)_indexForNode:(id)a0 inGraph:(id)a1;
- (id)_nodeFromGraph:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)_nodesCountInGraph:(id)a0;
- (void)_selectItem:(id)a0;
- (id)_selectedNodeAtColumn:(unsigned long long)a0;
- (void)_setCurrentNode:(id)a0;
- (void)_setDisplayNodes:(BOOL)a0;
- (id)_setPathWithBuffer:(id *)a0;
- (id)graphEditor;
- (id)rootGraph;
- (void)setRootGraph:(id)a0;

@end
