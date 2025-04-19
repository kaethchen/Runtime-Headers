@class NSArray, QCPatch, QCRenderingPatch;

@interface QCInteractionManager : NSObject {
    struct _QCContactInfo { double x; double y; double prev_x; double prev_y; int state; } _contacts[64];
    double _rotationOffset;
    double _scaleOffsetX;
    double _scaleOffsetY;
    struct CGPoint { double x; double y; } _translationOffset;
    unsigned long long _maxActiveContacts;
    unsigned long long _flags;
    unsigned long long _timestamp;
    unsigned long long _previousTimestamp;
    struct _QCDod { } *_roi;
    QCRenderingPatch *_renderingPatch;
    QCPatch *_parent;
    void *_unused[6];
}

@property (readonly) struct CGPoint { double x; double y; } translation;
@property (readonly) double rotation;
@property (readonly) double scaleX;
@property (readonly) double scaleY;
@property (readonly) struct CGPoint { double x; double y; } origin;
@property (readonly) BOOL translating;
@property (readonly) BOOL scaling;
@property (readonly) BOOL rotating;
@property (readonly) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (readonly) NSArray *activeContacts;
@property (readonly) unsigned long long activeContactCount;
@property (readonly) double renderingDepth;
@property (readonly) BOOL updated;
@property BOOL exposeScale;
@property BOOL exposeRotation;
@property BOOL allowNonUniformScaling;

+ (unsigned long long)maxActiveContacts;

- (id)init;
- (void)reset;
- (BOOL)_selected;
- (BOOL)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)_computeAffineTransform;
- (BOOL)_updated;
- (void)addDeltaContactX:(double)a0 Y:(double)a1 forIndex:(unsigned long long)a2;
- (void)addDeltaRotation:(double)a0;
- (void)addDeltaScale:(double)a0;
- (struct CGPoint { double x0; double x1; })contactForIndex:(unsigned long long)a0;
- (id)initWithParentPatch:(id)a0;
- (id)renderingPatch;
- (void)setContactOffsetX:(double)a0 Y:(double)a1;
- (void)setContactX:(double)a0 Y:(double)a1 state:(int)a2 forIndex:(unsigned long long)a3;
- (void)setRenderingPatch:(id)a0;
- (void)setRotation:(double)a0 state:(int)a1;
- (void)setRotationOffset:(double)a0;
- (void)setScaleOffsetX:(double)a0 Y:(double)a1;
- (void)setScaleX:(double)a0 Y:(double)a1 state:(int)a2;

@end
