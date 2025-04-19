@class NSArray, PKInk, PKStroke;

@interface TSKPKStroke : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (retain, nonatomic) PKStroke *internalPencilKitStroke;
@property (retain, nonatomic) NSArray *locations;
@property (readonly, nonatomic) PKStroke *pencilKitStroke;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) PKInk *ink;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } incorrectUnscaledFastFrame;
@property (readonly, nonatomic) double pencilAnnotationDrawingScale;
@property (readonly, nonatomic) unsigned long long pointsCount;

+ (struct CGPoint { double x0; double x1; })locationForStrokePoint:(id)a0 withStroke:(id)a1;
+ (id)p_copyOfPKStroke:(id)a0;
+ (unsigned long long)p_pointsCountOfStroke:(id)a0;
+ (id)strokesForPKStrokes:(id)a0 withPencilAnnotationDrawingScale:(double)a1;
+ (id)substrokeOfStroke:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (double)timestampAtIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })locationAtIndex:(unsigned long long)a0;
- (id)substrokeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })strokePointsFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unscaledStrokePointsFrame;
- (void)enumerateUnscaledPointsWithDistanceStep:(double)a0 usingBlock:(id /* block */)a1;
- (id)initWithPKStroke:(id)a0 pencilAnnotationDrawingScale:(double)a1;
- (BOOL)isUnderlineStrokeWithVerticalTextLayout:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_incorrectPencilKitFastFrame;
- (void)p_movePointInsideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1 referenceIndex:(unsigned long long)a2 forStrokePoints:(id)a3 withStroke:(id)a4;
- (id)p_strokePointWithNewLocation:(struct CGPoint { double x0; double x1; })a0 originalPoint:(id)a1 withStroke:(id)a2;
- (id)strokeByTransformingStrokeWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)subStrokeFromStartIndex:(unsigned long long)a0 toEndIndex:(unsigned long long)a1 adjustingStart:(BOOL)a2 andAdjustingEnd:(BOOL)a3 toEdgesOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (double)timestampForFirstPointInStroke;
- (double)timestampForLastPointInStroke;
- (struct CGPoint { double x0; double x1; })unscaledLocationAtIndex:(unsigned long long)a0;

@end
