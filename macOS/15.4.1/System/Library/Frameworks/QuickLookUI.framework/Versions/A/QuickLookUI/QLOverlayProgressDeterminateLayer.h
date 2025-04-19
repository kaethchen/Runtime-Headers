@class NSString, CALayer, QLOverlayProgressHalfCircleLayer;

@interface QLOverlayProgressDeterminateLayer : CALayer <CALayerDelegate> {
    CALayer *_contentLayer;
    CALayer *_intermediateLayer;
    QLOverlayProgressHalfCircleLayer *_movingHalfCircleLayer;
    QLOverlayProgressHalfCircleLayer *_fixedRightHalfCircleLayer;
    CALayer *_maskLayer;
}

@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)setContentsScale:(double)a0;

@end
