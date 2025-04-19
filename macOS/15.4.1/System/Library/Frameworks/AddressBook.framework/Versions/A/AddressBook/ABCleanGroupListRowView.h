@class NSString;

@interface ABCleanGroupListRowView : NSTableRowView <ABGroupListRowView>

@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)ABBookGroupListRowView_commonInit;
- (void)addTrackingAreaToVisibleRect;
- (void)enumerateGroupListCellViewsWithBlock:(id /* block */)a0;
- (void)updateSelectionAppearanceOfCellViews;

@end
