@class CALayer, TSCHMultiDataAnimatingFrameLayer;
@protocol TSCHMultiDataElementShapeLayer;

@interface TSCHMultiDataChartRepElement : NSObject

@property (readonly, nonatomic) CALayer<TSCHMultiDataElementShapeLayer> *elementLayer;
@property (readonly, nonatomic) TSCHMultiDataAnimatingFrameLayer *labelLayer;
@property (nonatomic) BOOL elementUndefined;

+ (id)elementWithElementLayer:(id)a0;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)setContentsScale:(double)a0;
- (void)setOpacity:(double)a0;
- (void)addAnimationForKey:(id)a0 values:(id)a1 keyTimes:(id)a2 toAnimationInfo:(id)a3;
- (id)initWithElementLayer:(id)a0;

@end
