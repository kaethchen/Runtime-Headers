@class NSURL, NSString, AVAssetCollectionInternal;

@interface AVAssetCollection : NSObject <AVAsynchronousKeyValueLoading> {
    AVAssetCollectionInternal *_internal;
}

@property (readonly, retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) unsigned long long assetCount;

+ (id)assetCollectionWithURL:(id)a0 options:(id)a1;
+ (id)_URLByRemovingFragmentFromURL:(id)a0;
+ (id)_fragmentParamsFromURL:(id)a0;
+ (id)baseCollectionURLFromURL:(id)a0;
+ (unsigned long long)indexHintFromURL:(id)a0;
+ (BOOL)isURLForAssetInCollection:(id)a0;
+ (BOOL)isURLForCollection:(id)a0;

- (void)dealloc;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)_avAssetCollectionTypeFromFigType:(id)a0;
- (id)_avassetWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (id)_avassetWithFigAsset:(struct OpaqueFigAsset { } *)a0 optionalCreationURL:(id)a1;
- (struct OpaqueFigAsset { } *)_copyFigAssetForURL:(id)a0 options:(id)a1 figErr:(int *)a2;
- (id)_inspectorLoader;
- (void)_willDeallocOrFinalize;
- (id)assetsWithIndexes:(id)a0 options:(id)a1;
- (void)cancelLoading;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (id)weakReference;

@end
