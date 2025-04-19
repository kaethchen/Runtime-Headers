@class NSString, PXPersonsSectionedDataSource, PXPhotoLibraryLocalDefaults, PHPhotoLibrary;

@interface PXPersonsSectionedDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver>

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXPhotoLibraryLocalDefaults *localDefaults;
@property (readonly, nonatomic) PXPersonsSectionedDataSource *dataSource;
@property (nonatomic) unsigned long long peopleHomeSortingType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reloadData;
- (id)initWithPhotoLibrary:(id)a0;
- (id)createInitialDataSource;
- (long long)_personTypeForSection:(long long)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;

@end
