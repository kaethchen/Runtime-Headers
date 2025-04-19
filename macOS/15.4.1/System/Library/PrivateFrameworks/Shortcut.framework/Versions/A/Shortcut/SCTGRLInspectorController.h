@class NSOutlineView, NSTextField, SCTGRLTree, SCTGRL, SCTGRLIndex;

@interface SCTGRLInspectorController : NSObject {
    SCTGRLIndex *mGRLIndex;
    SCTGRLTree *mGRLTree;
    SCTGRL *mGRLToBeShown;
    NSOutlineView *mOutlineView;
    NSTextField *mGRLTextView;
}

- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)isVisible;
- (id)outlineView:(id)a0 child:(int)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 objectValueForTableColumn:(id)a1 byItem:(id)a2;
- (void)outlineView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 byItem:(id)a3;
- (void)outlineViewSelectionDidChange:(id)a0;
- (void)setVisible:(BOOL)a0;
- (void)doShowResource:(id)a0;
- (id)findParentOfWindowGRL:(id)a0;
- (id)initWithNibName:(id)a0 andGRLIndex:(id)a1;

@end
