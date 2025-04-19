@class NSArray, NSDictionary, AVCompositionInternal;

@interface AVComposition : AVAsset <NSSecureCoding, NSMutableCopying> {
    AVCompositionInternal *_priv;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, copy, nonatomic) NSDictionary *URLAssetInitializationOptions;

+ (void)initialize;
+ (BOOL)expectsPropertyRevisedNotifications;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)tracksWithMediaType:(id)a0;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForTrackInspectors;
- (BOOL)_clientProvidesNaturalSize;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (int)_createEmptyMutableCompositionIfNeeded;
- (struct OpaqueFigAsset { } *)_figAsset;
- (id)_initWithComposition:(id)a0;
- (void)_loadAssetInspectorAndLoaderOnce;
- (id)_mediaSelectionGroupDictionaries;
- (struct OpaqueFigMutableComposition { } *)_mutableComposition;
- (id)_mutableTracks;
- (id)_newTrackForIndex:(long long)a0;
- (void)_setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_setURLAssetInitializationOptions:(id)a0 error:(id *)a1;
- (id)trackWithTrackID:(int)a0;
- (id)tracksWithMediaCharacteristic:(id)a0;

@end
