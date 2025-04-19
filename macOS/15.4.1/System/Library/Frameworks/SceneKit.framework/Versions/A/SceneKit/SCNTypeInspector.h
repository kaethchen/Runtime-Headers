@class NSString, NSView, NSMutableDictionary, NSOutlineView;

@interface SCNTypeInspector : NSView <NSOutlineViewDataSource, NSOutlineViewDelegate> {
    id _instance;
    NSView *_mainView;
    NSOutlineView *_outlineView;
    NSMutableDictionary *_datasource;
}

@property (retain) id instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 objectValueForTableColumn:(id)a1 byItem:(id)a2;
- (void)outlineView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 byItem:(id)a3;
- (id)ivarsOfItem:(id)a0;

@end
