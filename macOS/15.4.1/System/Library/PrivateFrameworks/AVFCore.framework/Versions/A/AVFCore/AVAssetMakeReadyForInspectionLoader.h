@class NSURL, AVAssetInspector, NSMutableArray;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {
    AVAssetInspector *_assetInspector;
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSMutableArray *_keysAwaitingCompletion;
    long long _status;
    int _basicInspectionFailureCode;
    NSURL *_URL;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)URL;
- (id)initWithURL:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (long long)fragmentCount;
- (long long)_status;
- (BOOL)isReadable;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (BOOL)_inspectionRequiresAFormatReader;
- (BOOL)_isStreaming;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (id)_loadValuesWhileMutexLockedForKeys:(id)a0;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (BOOL)_providesAccurateTiming;
- (void)_setStatus:(long long)a0 figErrorCode:(int)a1;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (long long)_statusOfValueWhileMutexLockedForKey:(id)a0 error:(id *)a1;
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)a0;
- (BOOL)_updateStatusWhileMutexLocked:(long long)a0 figErrorCode:(int)a1;
- (id)assetInspector;
- (void)cancelLoading;
- (id)figChapterGroupInfo;
- (long long)firstFragmentSequenceNumber;
- (BOOL)hasProtectedContent;
- (BOOL)isComposable;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)lyrics;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;

@end
