@interface _NSInfiniteColorGamut : NSColorGamut

+ (void)initialize;
+ (id)infiniteGamut;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEmpty;
- (BOOL)isEqualToGamut:(id)a0;
- (id)unionWithGamut:(id)a0;
- (BOOL)containsCGColor:(struct CGColor { } *)a0;
- (BOOL)containsGamut:(id)a0;
- (id)intersectionWithGamut:(id)a0;
- (BOOL)intersectsGamut:(id)a0;
- (BOOL)isInfinite;
- (double)volume;

@end
