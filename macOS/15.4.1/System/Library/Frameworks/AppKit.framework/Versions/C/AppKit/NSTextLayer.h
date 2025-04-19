@class CALayer, NSString;

@interface NSTextLayer : CALayer <CALayerDelegate> {
    CALayer *_foregroundLayer;
    CALayer *_bezelLayer;
}

@property (retain) CALayer *bezelLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)NS_suggestedContentsScaleDidChange;
- (void)display;
- (void)_appkitViewBackingLayerUniqueMethod;
- (void)_renderForegroundInContext:(struct CGContext { } *)a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)setSublayerTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;

@end
