@class NSTimer;

@interface GEOWorldCityLightsLayer : GEOWorldImageLayer {
    NSTimer *animationTimer;
}

+ (id)worldCityLightsLayerWithImages:(id)a0;

- (void)dealloc;
- (double)rotation;
- (void)setRotation:(double)a0;
- (void)startAnimation;
- (void)stopAnimation;
- (id)initWithImages:(id)a0;
- (id)_prototypeLayer;
- (void)_animationTimer:(id)a0;

@end
