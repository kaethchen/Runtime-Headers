@class AVDispatchOnce, AVWeakReference, NSURL, AVAssetInspector, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader {
    struct OpaqueFigAsset { } *_figAsset;
    int _figAssetCreationStatus;
    AVWeakReference *_weakReferenceToAsset;
    AVAssetInspector *_assetInspector;
    AVDispatchOnce *_assetInspectorOnce;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSMutableArray *_loadingBatches;
    BOOL _loadingCanceled;
    BOOL _registeredForFigAssetNotifications;
    BOOL _prefersNominalDurations;
    long long _fragmentMinderAssociationCount;
    NSURL *_URL;
}

+ (id)_figAssetTrackPropertiesForKeys;
+ (id)_figAssetMediaSelectionPropertiesArray;
+ (id)_figAssetPropertiesForKeys;
+ (id)_figAssetTrackMediaSelectionPropertiesArray;
+ (void)_mapAssetKeys:(id)a0 toFigAssetPropertySet:(id)a1 figAssetTrackPropertySet:(id)a2 callerName:(id)a3;

- (void)dealloc;
- (id)URL;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)asset;
- (id)resolvedURL;
- (unsigned long long)downloadToken;
- (long long)fragmentCount;
- (id)variants;
- (BOOL)isReadable;
- (id)_loadingBatches;
- (void)_addFigAssetNotifications;
- (Class)_classForTrackInspectors;
- (id)_completionHandlerQueue;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (struct OpaqueFigAsset { } *)_figAsset;
- (double)_fragmentMindingInterval;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)a0;
- (BOOL)_isStreaming;
- (long long)_loadStatusForProperty:(id)a0 figAsset:(struct OpaqueFigAsset { } *)a1 error:(id *)a2;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (BOOL)_prefersNominalDurations;
- (void)_removeFigAssetNotifications;
- (void)_setFragmentMindingInterval:(double)a0;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (long long)_statusOfValueForKey:(id)a0 error:(id *)a1 firstNonLoadedDependencyKey:(id *)a2;
- (id)assetInspector;
- (void)cancelLoading;
- (id)contentKeySpecifiersEligibleForPreloading;
- (id)figChapterGroupInfo;
- (id)figChapters;
- (long long)firstFragmentSequenceNumber;
- (BOOL)hasProtectedContent;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0 forAsset:(id)a1;
- (id)initWithURL:(id)a0 figAssetCreationFlags:(unsigned long long)a1 figAssetCreationOptions:(id)a2 avAssetInitializationOptions:(id)a3 forAsset:(id)a4 figErr:(int *)a5;
- (BOOL)isAssociatedWithFragmentMinder;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (id)lyrics;
- (id)originalNetworkContentURL;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;

@end
