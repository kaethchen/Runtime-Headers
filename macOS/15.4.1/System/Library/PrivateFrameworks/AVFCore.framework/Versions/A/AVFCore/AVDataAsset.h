@class AVDispatchOnce, NSDictionary, AVAssetInspectorLoader, NSArray;

@interface AVDataAsset : AVAsset {
    NSDictionary *_initializationOptions;
    AVAssetInspectorLoader *_loader;
    AVDispatchOnce *_allocateTracksOnceOnly;
    NSArray *_tracks;
}

+ (unsigned long long)_dataLengthLimit;
+ (id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)a0 figAssetCreationFlags:(unsigned long long *)a1;

- (void)dealloc;
- (id)tracks;
- (id)initWithData:(id)a0 contentType:(id)a1;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (BOOL)_requiresInProcessOperation;
- (id)initWithData:(id)a0 contentType:(id)a1 options:(id)a2;
- (unsigned long long)referenceRestrictions;

@end
