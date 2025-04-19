@class PXPhotosViewModel, NSString, PXSharedLibrarySharingSuggestionsCountsManager;
@protocol PXPhotosSectionHeaderLayoutViewProvider, PXPhotosSectionHeaderLayoutProviderInvalidationDelegate;

@interface PXSharingSuggestionSectionHeaderLayoutProvider : NSObject <PXChangeObserver, PXPhotosSectionHeaderLayoutProvider> {
    PXSharedLibrarySharingSuggestionsCountsManager *_countsManager;
}

@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, weak, nonatomic) id<PXPhotosSectionHeaderLayoutViewProvider> viewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> invalidationDelegate;
@property (weak, nonatomic) id<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> topHeaderInvalidationDelegate;
@property (readonly, nonatomic) double topHeaderMinimumHeight;

- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithViewModel:(id)a0 viewProvider:(id)a1;
- (void)_configureHeaderLayout:(id)a0 forDataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2;
- (void)_getTitle:(id *)a0 subtitle:(id *)a1 isNew:(BOOL *)a2 forDataSource:(id)a3 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a4;
- (void)configureSectionHeaderLayout:(id)a0 inAssetSectionLayout:(id)a1 forSectionedLayout:(id)a2;
- (id)createSectionHeaderLayoutForSectionedLayout:(id)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2 spec:(id)a3 outAlignment:(unsigned long long *)a4;
- (id)floatingHeaderSnapshotForSectionedLayout:(id)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2;
- (void)sectionedLayout:(id)a0 headerLayout:(id)a1 didChangeDataSource:(id)a2 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a3 hasSectionChanges:(BOOL)a4;

@end
