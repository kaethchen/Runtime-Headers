@class NSView;

@interface NSStopTouchingMeBox : NSBox {
    NSView *sibling1;
    NSView *sibling2;
    double offset;
}

- (void)setOffset:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSibling1:(id)a0;
- (void)setSibling2:(id)a0;
- (void)tile;
- (void)viewDidEndLiveResize;

@end
