@interface _UIFontCacheKey : NSObject <NSCopying> {
    unsigned long long _hash;
}

+ (id)newFontCacheKeyWithFontDescriptor:(id)a0 pointSize:(double)a1 textStyleForScaling:(id)a2 pointSizeForScaling:(double)a3 maximumPointSizeAfterScaling:(double)a4 textLegibility:(BOOL)a5;
+ (id)newFontCacheKeyWithFontName:(id)a0 traits:(int)a1 pointSize:(double)a2;
+ (id)newFontCacheKeyWithTextStyle:(id)a0 contentSizeCategory:(id)a1 textLegibility:(BOOL)a2;
+ (id)newSystemFontCacheKeyWithDesign:(id)a0 weight:(double)a1 width:(id)a2 pointSize:(double)a3 monospacedDigits:(BOOL)a4;
+ (id)newSystemFontCacheKeyWithTraits:(int)a0 pointSize:(double)a1;
+ (id)newSystemFontCacheKeyWithTraits:(int)a0 pointSize:(double)a1 width:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_hash;
- (BOOL)_isEqualToKey:(id)a0;
- (void)_precalculateHash;

@end
