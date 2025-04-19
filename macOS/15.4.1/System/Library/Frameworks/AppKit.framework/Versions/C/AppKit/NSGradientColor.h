@class NSGradient;

@interface NSGradientColor : NSColor {
    NSGradient *_gradient;
    struct CGImage { } *_patternImageRef;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _destRect;
    struct CGColor { } *_patternColor;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)set;
- (long long)type;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
- (void)setFill;
- (id)colorUsingType:(long long)a0;
- (void)_updatePattern;
- (void)_updatePatternImage;
- (id)colorSpaceName;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)initWithGradient:(id)a0;

@end
