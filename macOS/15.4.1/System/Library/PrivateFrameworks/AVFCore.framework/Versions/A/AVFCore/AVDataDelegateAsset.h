@class AVDataDelegateAssetInternal;
@protocol AVAssetDataDelegate;

@interface AVDataDelegateAsset : AVAsset {
    AVDataDelegateAssetInternal *_dataDelegateAsset;
}

@property (readonly, weak, nonatomic) id<AVAssetDataDelegate> dataDelegate;

+ (id)assetWithDataDelegate:(id)a0 contentType:(id)a1 contentSize:(long long)a2 options:(id)a3;
+ (BOOL)supportsPlayerItems;

- (void)dealloc;
- (id)tracks;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (id)initWithDataDelegate:(id)a0 contentType:(id)a1 contentSize:(long long)a2 options:(id)a3;

@end
