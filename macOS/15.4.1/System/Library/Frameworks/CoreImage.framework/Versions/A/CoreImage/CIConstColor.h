@interface CIConstColor : CIColor

+ (id)alloc;

- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (void)encodeWithCoder:(id)a0;
- (const double *)components;
- (struct CGColor { } *)cgColor;
- (double)alpha;
- (struct CGColorSpace { } *)colorSpace;
- (unsigned long long)numberOfComponents;
- (double)red;
- (double)blue;
- (double)green;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(struct CGColorSpace { } *)a4;
- (struct CGColor { } *)rgbColor;

@end
