@class LPPadding, LPPointUnit, LPTextViewStyle, NSColor;

@interface LPIndeterminateProgressSpinnerStyle : NSObject

@property (retain, nonatomic) LPPadding *padding;
@property (retain, nonatomic) LPPointUnit *spacing;
@property (retain, nonatomic) LPPointUnit *verticalOffset;
@property (retain, nonatomic) NSColor *indicatorColor;
@property (nonatomic) BOOL useLargeIndicatorStyle;
@property (retain, nonatomic) LPTextViewStyle *label;

- (void).cxx_destruct;
- (id)initWithPlatform:(long long)a0 sizeClass:(unsigned long long)a1 fontScalingFactor:(double)a2;

@end
