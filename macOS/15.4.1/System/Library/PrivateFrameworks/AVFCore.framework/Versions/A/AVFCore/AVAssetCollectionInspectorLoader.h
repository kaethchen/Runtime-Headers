@class NSString, AVWeakReference, NSURL, AVAssetCollectionInspector, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVAssetCollectionInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
    AVWeakReference *_weakReference;
    NSURL *_URL;
    BOOL _loadingCanceled;
    NSObject<OS_dispatch_queue> *loadingQ;
    NSMutableArray *loadingBatches;
    struct OpaqueFigAssetCollection { } *_optionalFigCollection;
    int _figCollectionCreateErr;
    AVAssetCollectionInspector *_optionalInspector;
    NSObject<OS_dispatch_queue> *completionHandlerQ;
}

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) unsigned long long assetCount;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_loadingBatches;
- (void)_cleanUpUncollectables;
- (id)_completionHandlerQ;
- (id)_figPropertiesByKey;
- (long long)_loadStatusForProperty:(id)a0 returningError:(int *)a1;
- (id)_loadingQ;
- (struct OpaqueFigAssetCollection { } *)_loadingQOnly_figCollection;
- (id)_mapFigErrorCodeToNSError:(int)a0;
- (void)cancelLoading;
- (struct OpaqueFigAsset { } *)copyFigAssetAtIndex:(unsigned long long)a0 options:(id)a1 figErr:(int *)a2;
- (struct OpaqueFigAsset { } *)copyFigAssetWithURL:(id)a0 options:(id)a1 figErr:(int *)a2;
- (id)initWithFigCollectionAtURL:(id)a0;
- (id)inspector;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;

@end
