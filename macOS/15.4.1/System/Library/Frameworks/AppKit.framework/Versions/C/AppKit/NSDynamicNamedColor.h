@class NSColor;

@interface NSDynamicNamedColor : NSCatalogColor

@property (readonly) NSColor *resolvedColor;

- (void)set;
- (Class)classForCoder;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
- (void)setFill;
- (id)colorUsingType:(long long)a0;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (double)alphaComponent;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)colorWithAlphaComponent:(double)a0;
- (BOOL)isUniform;

@end
