@class GFGraph, GFNode, GFGraphEditorView, NSPathControl;

@interface GFGraphPathView : NSView {
    GFGraph *_rootGraph;
    GFGraphEditorView *_graphEditor;
    GFNode *_currentNode;
    NSPathControl *_control;
    void *_unused[4];
}

+ (BOOL)_isGraph:(id)a0;

- (void)dealloc;
- (void)setPath:(id)a0;
- (void)_finishInitialization;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (id)nodes;
- (void)setCurrentNode:(id)a0;
- (id)currentNode;
- (void)__hierarchyControlAction:(id)a0;
- (void)setGraphEditor:(id)a0;
- (void)__graphDidChange:(id)a0;
- (BOOL)_getPathFromGraph:(id)a0 toNode:(id)a1 withArray:(id)a2;
- (void)_graphUpdated:(id)a0;
- (void)_setCurrentNode:(id)a0;
- (id)_setPathWithArray:(id)a0;
- (id)graphEditor;
- (id)rootGraph;
- (void)setRootGraph:(id)a0;

@end
