@class NSView;

@interface RPTViewCoordinateSpaceConverter : RPTCoordinateSpaceConverter

@property (retain, nonatomic) NSView *view;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })convertSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGVector { double x0; double x1; })convertVector:(struct CGVector { double x0; double x1; })a0;
- (id)initFromView:(id)a0;

@end
