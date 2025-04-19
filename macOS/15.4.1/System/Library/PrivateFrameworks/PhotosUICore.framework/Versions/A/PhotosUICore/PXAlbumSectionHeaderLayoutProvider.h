@class PXPhotosViewModel, NSString, PLDateRangeFormatter;
@protocol PXPhotosSectionHeaderLayoutViewProvider, PXPhotosSectionHeaderLayoutProviderInvalidationDelegate;

@interface PXAlbumSectionHeaderLayoutProvider : NSObject <PXPhotosSectionHeaderLayoutProvider>

@property (readonly, nonatomic) PLDateRangeFormatter *dateRangeFormatter;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, weak, nonatomic) id<PXPhotosSectionHeaderLayoutViewProvider> viewProvider;
@property (nonatomic) BOOL editorialStyle;
@property (nonatomic) BOOL allowsFloatingBackground;
@property (weak, nonatomic) id<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> invalidationDelegate;
@property (weak, nonatomic) id<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> topHeaderInvalidationDelegate;
@property (readonly, nonatomic) double topHeaderMinimumHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0 viewProvider:(id)a1;
- (void)_configureHeaderLayout:(id)a0 forDataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2;
- (void)_getTitle:(id *)a0 subtitle:(id *)a1 assetCollectionReference:(id *)a2 forDataSource:(id)a3 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a4;
- (id)createSectionHeaderLayoutForSectionedLayout:(id)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2 spec:(id)a3 outAlignment:(unsigned long long *)a4;
- (id)floatingHeaderSnapshotForSectionedLayout:(id)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2;
- (void)sectionedLayout:(id)a0 headerLayout:(id)a1 didChangeDataSource:(id)a2 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a3 hasSectionChanges:(BOOL)a4;

@end
