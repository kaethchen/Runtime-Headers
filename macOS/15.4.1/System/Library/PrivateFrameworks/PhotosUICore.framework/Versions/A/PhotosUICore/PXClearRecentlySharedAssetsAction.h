@class NSString;

@interface PXClearRecentlySharedAssetsAction : PhotosUICore.ClearRecentCollectionAssetsAction

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSString *actionNameLocalizationKey;

- (id)initWithAssets:(id)a0;

@end
