@interface IKDeviceBrowserOutlineView : NSOutlineView

- (BOOL)acceptsFirstResponder;
- (void)flagsChanged:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfCellAtColumn:(long long)a0 row:(long long)a1;
- (id)menuForEvent:(id)a0;

@end
