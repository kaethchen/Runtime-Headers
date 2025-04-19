@interface ILMediaBrowserCounterBadgeCell : NSTextFieldCell {
    double _scaleFactor;
}

- (struct CGSize { double x0; double x1; })cellSize;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)initTextCell:(id)a0;
- (id)renderedImage;
- (id)gradientEndingColor;
- (id)gradientStartingColor;
- (id)initTextCell:(id)a0 scaleFactor:(double)a1;

@end
