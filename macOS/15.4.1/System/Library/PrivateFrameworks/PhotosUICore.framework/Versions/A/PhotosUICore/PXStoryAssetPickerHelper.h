@class NSOrderedSet, NSViewController, NSString, PHPhotoLibrary, PXLoadingStatusManager;
@protocol PXDisplayAssetCollection, PXStoryAssetPickerHelperDelegate;

@interface PXStoryAssetPickerHelper : NSObject <PHPickerViewControllerDelegate>

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSOrderedSet *preselectedOIDs;
@property (readonly, nonatomic) BOOL preselectedAssetsHaveDefaultSortOrder;
@property (readonly, nonatomic) PXLoadingStatusManager *loadingStatusManager;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> containerCollection;
@property (readonly, nonatomic) NSViewController *pickerViewController;
@property (weak, nonatomic) id<PXStoryAssetPickerHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
