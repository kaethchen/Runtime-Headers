@class NSToolbarItem;

@interface NSToolbarItemImageRepresentationView : NSImageView

@property struct NSEdgeInsets { double top; double left; double bottom; double right; } alignmentRectInsets;
@property (retain) NSToolbarItem *representedItem;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (void)_configureToolTipRects;
- (id)view:(id)a0 stringForToolTip:(long long)a1 point:(struct CGPoint { double x0; double x1; })a2 userData:(void *)a3;

@end
