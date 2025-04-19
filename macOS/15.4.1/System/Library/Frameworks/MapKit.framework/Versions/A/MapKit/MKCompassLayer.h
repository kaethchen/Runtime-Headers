@class CALayer;

@interface MKCompassLayer : CALayer {
    CALayer *_discLayer;
    CALayer *_ringLayer;
    CALayer *_headingLayer;
    struct CGImage { } *_currentDiscImage2D;
    struct CGImage { } *_currentDiscImage3D;
    struct CGImage { } *_currentDiscMaskImage;
    struct CGImage { } *_currentRingImage;
    struct CGImage { } *_currentRingMaskImage;
    struct CGImage { } *_currentHeadingImage;
}

@property (nonatomic) long long usage;
@property (nonatomic) BOOL wants2dText;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)updateAppearance;
- (void)setHeading:(double)a0;
- (void)_unloadResources;
- (void)setPitch:(double)a0 allowsPitch:(BOOL)a1;
- (void)updateDisplay;

@end
