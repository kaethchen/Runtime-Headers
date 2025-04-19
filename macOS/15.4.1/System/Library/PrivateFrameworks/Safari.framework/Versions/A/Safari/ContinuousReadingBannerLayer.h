@class NSString, NSImage, CALayer, NSAttributedString;

@interface ContinuousReadingBannerLayer : CALayer <CALayerDelegate> {
    CALayer *_backgroundLayer;
    CALayer *_bannerIconImageLayer;
    CALayer *_bannerTextLayer;
    NSAttributedString *_bannerTextTitle;
    double _scaleFactor;
}

@property (retain, nonatomic) NSImage *icon;
@property (nonatomic) BOOL iconDrawsDropShadowAndMask;
@property (copy, nonatomic) NSAttributedString *itemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)bannerHeight;

- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)setContentsScale:(double)a0;
- (void)resizeWithOldSuperlayerSize:(struct CGSize { double x0; double x1; })a0;
- (id)bannerTextLayer;
- (double)_ascenderForFontForBannerTextLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_bannerIconImageViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_bannerTextLayerFrame;
- (id)_createImageLayer;
- (id)_createTextLayer;
- (double)_currentMaximumBannerTextLayerWidth;
- (id)_fontForBannerTextLayer;
- (void)_layOutIcon;
- (void)_layOutLayers;
- (void)_layOutTextLayer;
- (double)_maxTextLayerXCoordinate;
- (id)_textAttributesForBannerTextLayer;
- (void)_updateBannerIconImageLayer;
- (id)bannerIconImageLayer;
- (id)initWithWidth:(double)a0 scaleFactor:(double)a1;

@end
