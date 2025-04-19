@class NSColor, LPTextViewStyle, LPPointUnit;

@interface LPTapToLoadViewStyle : NSObject

@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *tapHighlightColor;
@property (readonly, nonatomic) LPTextViewStyle *caption;
@property (retain, nonatomic) LPPointUnit *width;
@property (retain, nonatomic) LPPointUnit *height;

- (void).cxx_destruct;
- (id)initWithPlatform:(long long)a0 sizeClass:(unsigned long long)a1 fontScalingFactor:(double)a2;

@end
