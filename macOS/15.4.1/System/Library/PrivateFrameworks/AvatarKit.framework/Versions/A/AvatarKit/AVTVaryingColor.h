@class NSColor;

@interface AVTVaryingColor : NSObject {
    NSColor *_baseColor;
    NSColor *_variationMinColor;
    NSColor *_variationMaxColor;
}

- (void).cxx_destruct;
- (id)colorByApplyingVariation:(float)a0;

@end
