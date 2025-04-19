@interface PXLikeSharedAlbumAssetsAction : PXAssetsAction

@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic, getter=isLike) BOOL like;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)currentValueForAssets:(id)a0;
+ (BOOL)toggledValueForAssets:(id)a0;

- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)initWithAssets:(id)a0;
- (id)actionNameLocalizationKey;
- (id)initWithAssets:(id)a0 like:(BOOL)a1;
- (void)markAssetsAsLiked:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
