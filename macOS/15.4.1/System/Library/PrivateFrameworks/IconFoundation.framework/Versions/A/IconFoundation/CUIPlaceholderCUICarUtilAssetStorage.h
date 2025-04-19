@interface CUIPlaceholderCUICarUtilAssetStorage : CUIPlaceholderCUIMutableCommonAssetStorage

- (BOOL)_formatStorageKeyArrayBytes:(void *)a0 length:(unsigned long long)a1 fromKey:(struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a2;
- (void)_initDefaultHeaderVersion:(double)a0 versionString:(const char *)a1;
- (id)_newRenditionKeyDataFromKey:(struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (BOOL)caAllowSubimageOfImage:(struct CGImage { } *)a0;
- (id)initWithPath:(id)a0 forWriting:(BOOL)a1;
- (id)lookupAssetForKey:(struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (id)themeStore;

@end
