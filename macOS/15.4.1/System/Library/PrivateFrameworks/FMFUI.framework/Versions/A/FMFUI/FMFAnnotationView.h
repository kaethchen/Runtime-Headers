@class CAShapeLayer;

@interface FMFAnnotationView : FMAnnotationView

@property (retain, nonatomic) CAShapeLayer *accuracyLayer;
@property (retain, nonatomic) CAShapeLayer *smallPulseLayer;
@property (retain, nonatomic) CAShapeLayer *largePulseLayer;
@property (nonatomic) double lastAccuracyRadius;
@property (nonatomic) BOOL isLiveAnimated;

- (void).cxx_destruct;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1 tintColor:(id)a2;
- (id)buildAccuracyLayer;
- (id)buildPulseLayerWithDiameter:(double)a0 centeredInParentLayer:(id)a1;
- (void)startLiveAnimation;
- (void)stopLiveAnimation;
- (void)updateWithLocation:(id)a0;

@end
