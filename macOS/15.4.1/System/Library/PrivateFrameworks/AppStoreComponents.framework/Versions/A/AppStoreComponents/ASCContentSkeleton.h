@interface ASCContentSkeleton : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double rawValue;

+ (id)absoluteSkeleton:(double)a0;
+ (id)fractionalSkeleton:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)drawSkeletonInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingSkeletonContext:(id)a1;
- (long long)effectiveSkeletonAlignmentFromContext:(id)a0;
- (id)initWithType:(long long)a0 rawValue:(double)a1;
- (double)skeletonHeightFromContext:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })skeletonRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forLineNumber:(unsigned long long)a1 usingSkeletonContext:(id)a2;
- (double)widthThatFits:(struct CGSize { double x0; double x1; })a0;

@end
