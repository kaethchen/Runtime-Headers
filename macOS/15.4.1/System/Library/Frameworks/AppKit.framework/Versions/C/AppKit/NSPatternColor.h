@class NSImage;

@interface NSPatternColor : NSColor {
    NSImage *_patternImage;
    struct CGColor { } *_patternColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)set;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)redactedDescription;
- (long long)type;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
- (void)setFill;
- (id)colorUsingType:(long long)a0;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (id)_initWithCGPatternColor:(struct CGColor { } *)a0;
- (id)colorSpaceName;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)initWithImage:(id)a0;
- (id)patternImage;

@end
