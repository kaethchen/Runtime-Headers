@class PXPhotosViewModel, NSString, NSViewController;
@protocol PXPhotosSectionBodyLayoutProviderInvalidationDelegate, PXPhotosViewControllerPresentationDelegate, PXPhotosSelectionContainer, PXSearchFeedViewControllerPresentationDelegate, PXPersonViewControllerPresentationDelegate;

@interface PXPhotosSearchBodyLayoutProvider : NSObject <PXChangeObserver, PhotosUICore.PhotosSearchResultsCollectionsViewSelectionDelegate, PXPhotosCustomSectionBodyLayoutProvider>

@property (weak, nonatomic) id<PXPhotosSelectionContainer> collectionsSelection;
@property (readonly, nonatomic) id collectionSectionProvider;
@property (weak, nonatomic) NSViewController<PXPersonViewControllerPresentationDelegate, PXPhotosViewControllerPresentationDelegate, PXSearchFeedViewControllerPresentationDelegate> *hostViewController;
@property (retain, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPhotosSectionBodyLayoutProviderInvalidationDelegate> invalidationDelegate;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)clearAssetSelections;
- (void)configureSectionBodyLayout:(id)a0 inAssetSectionLayout:(id)a1 forSectionedLayout:(id)a2;
- (id)createSectionBodyLayoutForSectionedLayout:(id)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2 spec:(id)a3 outWantsDecoration:(BOOL *)a4;
- (id)initWithCollectionSectionProvider:(id)a0;
- (void)sectionedLayout:(id)a0 bodyLayout:(id)a1 didChangeDataSource:(id)a2 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a3 hasSectionChanges:(BOOL)a4;
- (BOOL)shouldPreventFaultOutOfBodyLayout:(id)a0 inAssetSectionLayout:(id)a1;

@end
