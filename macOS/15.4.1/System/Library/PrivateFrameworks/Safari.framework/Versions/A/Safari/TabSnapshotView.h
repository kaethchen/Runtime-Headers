@interface TabSnapshotView : NSView {
    struct CGSize { double width; double height; } _snapshotSize;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } snapshotSize;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSnapshot:(id)a0;

@end
