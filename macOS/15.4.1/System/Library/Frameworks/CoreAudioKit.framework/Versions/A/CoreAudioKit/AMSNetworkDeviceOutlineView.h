@interface AMSNetworkDeviceOutlineView : NSOutlineView

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)levelForItem:(id)a0;
- (long long)levelForRow:(long long)a0;
- (void)sizeTableHeaderCellsToFit;

@end
