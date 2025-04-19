@interface ISDimmingConversion : NSObject {
    struct CGImage { } *_cgImage;
    struct __CFData { } *_data;
    const void *_ucharSamples;
    int _width;
    int _height;
    int _numberOfSamples;
    unsigned int _alphaInfo;
    BOOL _hasDimmingParameters;
    BOOL _isDimmable;
    float _highlightBrightnessAdjustmentFactor;
    BOOL _shouldAdjustHighlightBrightness;
    float _meanBrightnessAfterHighlightAdjustment;
    BOOL _shouldAdjustMeanBrightness;
    void *_ucharDimmed;
}

@property (nonatomic) float targetHighlightBrightnessLevel;
@property (nonatomic) float targetMeanBrightnessLevel;
@property (nonatomic) float minMeanBrightnessAdjustmentFactor;
@property (readonly, nonatomic) BOOL isDimmable;

- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (BOOL)_computeDimmedImage;
- (void)_computeDimmingParameters;
- (BOOL)_prepareSamplesIfNeeded;
- (struct CGImage { } *)createDimmedImage;

@end
