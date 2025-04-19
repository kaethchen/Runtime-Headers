@class NSColor, ASCContentSkeleton;

@interface ASCSkeletonLabel : ASCUILabel <ASCContentSkeletonContextProvider>

@property (nonatomic) long long skeletonNumberOfLines;
@property (copy, nonatomic) NSColor *skeletonColor;
@property (copy, nonatomic) ASCContentSkeleton *skeleton;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)baselineOffsetFromBottom;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)firstBaselineOffsetFromTop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)effectiveUserInterfaceLayoutDirection;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
