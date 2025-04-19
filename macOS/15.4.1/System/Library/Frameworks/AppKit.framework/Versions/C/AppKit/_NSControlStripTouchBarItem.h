@interface _NSControlStripTouchBarItem : NSCustomTouchBarItem

@property struct CGSize { double width; double height; } minSize;
@property struct CGSize { double width; double height; } preferredSize;
@property struct CGSize { double width; double height; } maxSize;

- (void)_itemViewMinSize:(struct CGSize { double x0; double x1; } *)a0 maxSize:(struct CGSize { double x0; double x1; } *)a1 preferredSize:(struct CGSize { double x0; double x1; } *)a2;

@end
