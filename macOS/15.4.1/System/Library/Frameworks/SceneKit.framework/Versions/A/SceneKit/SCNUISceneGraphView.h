@class NSString, NSView, NSOutlineView;

@interface SCNUISceneGraphView : NSView <NSOutlineViewDataSource, NSOutlineViewDelegate> {
    NSView *_mainView;
    NSOutlineView *_outlineView;
    id _typeInspector;
    void *_rootNode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)add:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 objectValueForTableColumn:(id)a1 byItem:(id)a2;
- (void)outlineView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 byItem:(id)a3;
- (void)setRootNode:(void *)a0;
- (void)selectionDidChange:(id)a0;
- (void)del:(id)a0;
- (id)selectedNode;
- (void)updateSceneGraph;

@end
