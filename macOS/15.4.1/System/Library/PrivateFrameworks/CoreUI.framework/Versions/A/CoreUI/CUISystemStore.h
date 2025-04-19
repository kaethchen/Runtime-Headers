@interface CUISystemStore : CUIStructuredThemeStore <NSCoding>

+ (id)systemCarBundle;
+ (BOOL)isUsingSharedSystemCache;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidateCache;
- (id)_systemCarPath;
- (id)assetDataFromCacheWithKeySignature:(id)a0;
- (BOOL)assetExistsForKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (void)cacheAssetData:(id)a0 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1 withSignature:(id)a2;
- (id)catalogGlobals;
- (BOOL)getPhysicalColor:(struct _colordef { unsigned int x0; unsigned int x1; struct _rgbquad { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3 : 8; } x2; } *)a0 withName:(id)a1;
- (id)lookupAssetForKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (id)lookupAssetForKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0 withSignature:(id)a1;

@end
