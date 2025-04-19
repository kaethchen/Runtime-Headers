@class NSRecursiveLock;

@interface _NSScrollingRubberbandFilter : NSObject {
    NSRecursiveLock *_syncLock;
    struct _flags1 { unsigned char flipped : 1; unsigned char allowsHorizontalRubberbanding : 1; unsigned char allowsVerticalRubberbanding : 1; unsigned int reserved : 29; } _flags1;
    struct _flags2 { unsigned char stretched : 1; unsigned int reserved : 31; } _flags2;
    struct CGPoint { double x; double y; } _scrollPosition;
    struct CGPoint { double x; double y; } _overflow;
}

@property (nonatomic) struct CGPoint { double x; double y; } constrainedClippingOrigin;
@property (nonatomic) struct CGSize { double width; double height; } clippingSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } documentFrame;
@property (nonatomic, getter=isFlipped) BOOL flipped;
@property (nonatomic) BOOL allowsHorizontalRubberbanding;
@property (nonatomic) BOOL allowsVerticalRubberbanding;
@property (nonatomic) double pointsPerPixel;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } affineTransformOfContent;
@property (nonatomic) double stiffness;
@property (nonatomic) struct CGPoint { double x0; double x1; } scrollPosition;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } filteredDelta;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } filteredVelocity;
@property (readonly, nonatomic, getter=isStretched) BOOL stretched;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)reset;
- (void)addDelta:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithDocumentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 constrainedClippingOrigin:(struct CGPoint { double x0; double x1; })a1 clippingSize:(struct CGSize { double x0; double x1; })a2 isFlipped:(BOOL)a3 pointsPerPixel:(double)a4;
- (void)threadSafeAccess:(id /* block */)a0;

@end
