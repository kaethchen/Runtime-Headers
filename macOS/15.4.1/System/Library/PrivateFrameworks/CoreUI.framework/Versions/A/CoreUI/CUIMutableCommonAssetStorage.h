@class NSMutableDictionary;

@interface CUIMutableCommonAssetStorage : CUICommonAssetStorage {
    NSMutableDictionary *_bitmapInfo;
    unsigned char _useBitmapIndex : 1;
    unsigned char _enableLargeCarKeyWorkaround : 1;
}

@property (nonatomic) BOOL useBitmapIndex;

- (void)dealloc;
- (void)setUuid:(id)a0;
- (id)initWithPath:(id)a0;
- (BOOL)_saveBitmapInfo;
- (void)setEnableLargeCarKeyWorkaround:(BOOL)a0;
- (void)_allocateExtendedMetadata;
- (BOOL)_writeOutKeyFormatWithWorkaround;
- (void)removeAssetForKey:(id)a0;
- (void)removeAssetForKey:(const void *)a0 withLength:(unsigned long long)a1;
- (BOOL)removeAssetName:(id)a0;
- (BOOL)removeAssetNameKey:(const void *)a0 withLength:(unsigned long long)a1;
- (void)setAppearanceIdentifier:(unsigned short)a0 forName:(id)a1;
- (BOOL)setAsset:(id)a0 forKey:(id)a1;
- (BOOL)setAsset:(id)a0 forKey:(const void *)a1 withLength:(unsigned long long)a2;
- (void)setAssociatedChecksum:(unsigned int)a0;
- (void)setAuthoringTool:(id)a0;
- (void)setCatalogGlobalData:(id)a0;
- (void)setColor:(struct _rgbquad { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3 : 8; })a0 forName:(const char *)a1 excludeFromFilter:(BOOL)a2;
- (void)setColorSpaceID:(unsigned int)a0;
- (void)setDeploymentPlatform:(id)a0;
- (void)setDeploymentPlatformVersion:(id)a0;
- (void)setExternalTags:(id)a0;
- (void)setFontName:(id)a0 baselineOffset:(float)a1 forFontSelector:(id)a2;
- (void)setFontSize:(float)a0 forFontSizeSelector:(id)a1;
- (void)setKeyFormatData:(id)a0;
- (void)setKeySemantics:(int)a0;
- (void)setLocalizationIdentifier:(unsigned short)a0 forName:(id)a1;
- (void)setRenditionCount:(unsigned int)a0;
- (void)setRenditionKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0 hotSpot:(struct CGPoint { double x0; double x1; })a1 forName:(const char *)a2;
- (void)setSchemaVersion:(unsigned int)a0;
- (void)setStorageVersion:(unsigned int)a0;
- (void)setThinningArguments:(id)a0;
- (void)setVersionString:(const char *)a0;
- (BOOL)updateBitmapInfo;
- (BOOL)writeToDisk;
- (BOOL)writeToDiskAndCompact:(BOOL)a0;

@end
