@class IKNCustomLayer, IKNImageViewHandler, CALayer, IKPlaceholderLayer;

@interface IKNImageLayer : CALayer {
    IKPlaceholderLayer *_placeholderLayer;
    CALayer *_leftShadowLayer;
    CALayer *_bottomShadowLayer;
    CALayer *_rightShadowLayer;
}

@property IKNImageViewHandler *imageViewHandler;
@property (nonatomic) double rotation;
@property (readonly) double width;
@property (readonly) double height;
@property (readonly) IKNCustomLayer *templateLayer;
@property (readonly) IKNCustomLayer *alphaLayer;
@property (nonatomic) struct CGSize { double width; double height; } noImageSize;

- (void)adjustToViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)autoResizeToViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)installAlphaLayerWithGray:(double)a0 alpha:(double)a1;
- (void)installPlaceHolderLayer:(id)a0;
- (void)installTemplateLayer:(id)a0;
- (void)removeAlphaLayer;
- (void)removePlaceHolderLayer;
- (void)removeTemplateLayer;
- (void)setImage:(struct CGImage { } *)a0 imageProperties:(id)a1;
- (void)updateAlphaLayer;
- (void)updateLayerContents:(struct CGImage { } *)a0;
- (void)updatePlaceholderLayer;
- (void)updateShadowLayers;
- (void)updateTemplateLayer;

@end
