@protocol PEResourceLoaderDelegate;

@interface PEResourceLoadRequest : NSObject <NSCopying>

@property (nonatomic, setter=_setResolvedVersion:) long long _resolvedVersion;
@property (nonatomic) BOOL assetLoadingAsRaw;
@property (nonatomic) BOOL requireLocalResources;
@property (nonatomic) BOOL requireAdjustments;
@property (nonatomic) BOOL skipLivePhotoImageAndAVAsset;
@property (weak, nonatomic) id<PEResourceLoaderDelegate> delegate;
@property (nonatomic) long long version;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) BOOL requireOriginalsDownloaded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_assertWorkVersionResolved;
- (BOOL)_isWorkVersionResolved;
- (BOOL)_needsLoadAdjustments;
- (void)_resolveVersionIfNeededWithWorkVersion:(long long)a0;

@end
