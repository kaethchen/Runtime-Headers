@class NSString;
@protocol LibraryOutlineViewDelegate;

@interface LibraryOutlineView : OutlineViewPlus <TabDraggingDestination> {
    BOOL _startedDragging;
    long long _longClickedRow;
}

@property (weak) id<LibraryOutlineViewDelegate> delegate;
@property (nonatomic) BOOL tabGroupDraggingSessionActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)draggingSession:(id)a0 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeViewWithIdentifier:(id)a0 owner:(id)a1;
- (void)mouseDown:(id)a0;
- (BOOL)shouldCollapseAutoExpandedItemsForDeposited:(BOOL)a0;
- (BOOL)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;
- (void)_commonLibraryOutlineViewInit;
- (void)_didRecognizeLongPress:(id)a0;
- (long long)draggingImageType;
- (void)updateTitleForLibraryItem:(id)a0;
- (void)updateTrailingButtonForLibraryItem:(id)a0;

@end
