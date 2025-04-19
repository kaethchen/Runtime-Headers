@class IKImageLayer, CATextLayer;

@interface IKRotationLayer : CALayer {
    IKImageLayer *_imageLayer;
    double _rotationAngle;
    double _oldRotationAngle;
    CATextLayer *_textLayer;
}

+ (id)defaultActionForKey:(id)a0;
+ (id)addRotationLayer:(id)a0;
+ (BOOL)registerLayerWithView:(id)a0;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void)ikMouseDown:(id)a0;
- (void)setup:(id)a0;

@end
