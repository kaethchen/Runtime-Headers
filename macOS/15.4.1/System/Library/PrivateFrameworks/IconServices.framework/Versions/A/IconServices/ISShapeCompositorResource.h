@class IFColor, NSString;

@interface ISShapeCompositorResource : NSObject <ISScalableCompositorResource>

@property (retain) IFColor *fillColor;
@property (retain) IFColor *lineColor;
@property double lineWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)circleShape;
+ (double)continuousCornerRadiusForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)continuousRoundedRectShape;
+ (id)tvOSRoundedRectShape;

- (void).cxx_destruct;
- (id)_init;
- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
