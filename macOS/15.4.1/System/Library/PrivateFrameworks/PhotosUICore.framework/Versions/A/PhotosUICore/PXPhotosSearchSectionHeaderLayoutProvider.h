@class PXPhotosViewModel, NSString;
@protocol PXFilterController, PXPhotosSectionHeaderLayoutViewProvider, PXPhotosSectionHeaderLayoutProviderInvalidationDelegate;

@interface PXPhotosSearchSectionHeaderLayoutProvider : NSObject <PXFilterControllerDelegate, PXPhotosSectionHeaderLayoutProvider>

@property (readonly, nonatomic) id<PXFilterController> filterController;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, weak, nonatomic) id<PXPhotosSectionHeaderLayoutViewProvider> viewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> invalidationDelegate;
@property (weak, nonatomic) id<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> topHeaderInvalidationDelegate;
@property (readonly, nonatomic) double topHeaderMinimumHeight;

@end
