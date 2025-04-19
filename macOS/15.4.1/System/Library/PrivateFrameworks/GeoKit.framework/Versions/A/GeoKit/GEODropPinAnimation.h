@class CALayer;

@interface GEODropPinAnimation : NSAnimation {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pinSuperLayerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pinLayerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pinShadowLayerFrame;
    struct CGSize { double width; double height; } pinImageSize;
    struct CGSize { double width; double height; } pinShadowImageSize;
    float cos45;
    float sin45;
}

@property (nonatomic) CALayer *pinLayer;
@property (nonatomic) CALayer *pinShadowLayer;
@property (nonatomic) struct CGPoint { double x; double y; } pinDestinationCenter;

- (id)init;
- (void)setCurrentProgress:(float)a0;

@end
