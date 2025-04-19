@interface CUINamedRenditionInfo : NSObject <NSCopying> {
    void *_bitmap;
    const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *_keyFormat;
    long long _platform;
}

+ (int)subtypeFromIndexWithPlatform:(long long)a0 andIndex:(unsigned short)a1;
+ (int)subtypeToIndexWithPlatform:(long long)a0 andInput:(unsigned short)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)numberOfBitsSet;
- (id)bitwiseAndWith:(id)a0;
- (id)archivedData;
- (int)attributePresent:(int)a0 withValue:(unsigned short)a1;
- (id)bitwiseOrWith:(id)a0 forAttribute:(int)a1;
- (void)clearAttributePresent:(int)a0 withValue:(unsigned short)a1;
- (BOOL)containsVectorGlyphInterpolationSources;
- (BOOL)containsVectorGlyphWithWeight:(long long)a0 size:(long long)a1;
- (BOOL)contentEqualForAttribute:(int)a0 withRenditionInfo:(id)a1;
- (BOOL)contentPresentForAttribute:(int)a0;
- (void)decrementValue:(long long *)a0 forAttribute:(int)a1;
- (BOOL)diverseContentPresentForAttribute:(int)a0;
- (unsigned short)getClosestValueOfAttribute:(int)a0 withValue:(unsigned short)a1;
- (unsigned short)getValueOfAttribute:(int)a0;
- (void)incrementIndex:(unsigned long long *)a0 inValues:(id)a1 forAttribute:(int)a2;
- (id)initWithData:(id)a0 keyFormat:(const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)a1 andPlatform:(long long)a2;
- (id)initWithKeyFormat:(const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)a0 andPlatform:(long long)a1;
- (BOOL)isEqualToNamedRenditionInfo:(id)a0;
- (void)setAttributePresent:(int)a0 withValue:(unsigned short)a1;

@end
