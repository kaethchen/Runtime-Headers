@class NSString;

@interface AVAssetCollectionInspector : AVFigObjectInspector <NSCopying> {
    struct OpaqueFigAssetCollection { } *_figCollection;
}

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) unsigned long long assetCount;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_cleanUpUncollectables;
- (id)_figAssetCreationOptionsFromAVFOptions:(id)a0;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (struct OpaqueFigAsset { } *)copyFigAssetAtIndex:(unsigned long long)a0 options:(id)a1 figErr:(int *)a2;
- (struct OpaqueFigAsset { } *)copyFigAssetWithURL:(id)a0 options:(id)a1 figErr:(int *)a2;
- (id)initWithFigCollection:(struct OpaqueFigAssetCollection { } *)a0;

@end
