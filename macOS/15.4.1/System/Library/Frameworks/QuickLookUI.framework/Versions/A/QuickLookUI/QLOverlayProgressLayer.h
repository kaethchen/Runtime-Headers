@class CALayer, NSTimer;

@interface QLOverlayProgressLayer : CALayer {
    CALayer *_contentLayer;
    CALayer *_middleLayer;
    CALayer *_maskLayer;
    NSTimer *_progressTimer;
}

@property (nonatomic) float progress;
@property BOOL expanded;

+ (id)defaultActionForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setContentsScale:(double)a0;
- (void)_updateMiddleLayer;

@end
