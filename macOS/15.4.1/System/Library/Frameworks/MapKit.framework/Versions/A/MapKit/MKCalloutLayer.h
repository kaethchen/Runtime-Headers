@class CALayer;

@interface MKCalloutLayer : CALayer

@property (retain, nonatomic) CALayer *layerA;
@property (retain, nonatomic) CALayer *layerB;
@property (nonatomic) long long anchorPosition;
@property (readonly, nonatomic) long long contentMode;

+ (id)layerWithContentMode:(long long)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setContentMode:(long long)a0;
- (id)imageNameWithPartFragment:(id)a0;
- (void)updateSublayerContent:(BOOL)a0;

@end
