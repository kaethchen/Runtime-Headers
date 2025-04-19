@interface ResponsiveDesignResizeHandleView : NSView {
    struct CGSize { double width; double height; } _intrinsicSize;
}

- (id)initWithCoder:(id)a0;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithIntrinsicSize:(struct CGSize { double x0; double x1; })a0;

@end
