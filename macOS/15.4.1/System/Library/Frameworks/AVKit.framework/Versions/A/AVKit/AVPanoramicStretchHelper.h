@class CALayer;

@interface AVPanoramicStretchHelper : NSObject {
    CALayer *_layer;
}

- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithLayer:(id)a0;
- (void)_updatePanoramicStretchForLayer;

@end
