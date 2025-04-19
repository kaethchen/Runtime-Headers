@interface CUILayoutInformation : NSObject <NSCopying>

@property (nonatomic) struct { double top; double left; double bottom; double right; } alignmentRectInsets;
@property (nonatomic) double baselineOffsetFromBottom;
@property (nonatomic) struct { double top; double left; double bottom; double right; } contentRectInsets;
@property (nonatomic) BOOL canStretchHorizontally;
@property (nonatomic) BOOL canStretchVertically;

+ (id)layoutInformation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
