@class KHFrame, KHTreatment;
@protocol KHTreatmentRenderLayerDelegate;

@interface KHTreatmentRenderLayer : KHBaseLayer

@property (retain, nonatomic) KHTreatment *treatment;
@property (retain, nonatomic) KHFrame *frameObject;
@property (nonatomic) BOOL drawsBackground;
@property (nonatomic) BOOL drawsForeground;
@property (nonatomic) double drawingScale;
@property (nonatomic) struct CGPoint { double x; double y; } drawingOffset;
@property (nonatomic) id<KHTreatmentRenderLayerDelegate> renderDelegate;

+ (id)layerForTreatment:(id)a0 frameObject:(id)a1;

- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)setContentsScale:(double)a0;
- (id)initWithTreatment:(id)a0 frameObject:(id)a1;

@end
