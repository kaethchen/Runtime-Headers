@class RPTCoordinateSpaceConverter;

@interface RPTChainedCoordinateSpaceConverter : RPTCoordinateSpaceConverter

@property (retain, nonatomic) RPTCoordinateSpaceConverter *primary;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *secondary;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })convertSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGVector { double x0; double x1; })convertVector:(struct CGVector { double x0; double x1; })a0;
- (id)initWithPrimary:(id)a0 secondary:(id)a1;

@end
