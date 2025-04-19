@class PXPeoplePickerDataSource, NSString, NSArray, PHFetchResult, NSMutableArray;

@interface PXPeoplePickerDataSourceManager : PXSectionedDataSourceManager <PXPeoplePickerMutableDataSourceManager, PXPhotoLibraryUIChangeObserver> {
    NSMutableArray *_selectedLocalIdentifiers;
    NSArray *_suggestedLocalIdentifiers;
    PHFetchResult *_people;
}

@property (readonly, nonatomic) PXPeoplePickerDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentDataSourceManager;

- (id)init;
- (void).cxx_destruct;
- (void)setPeople:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (id)createInitialDataSource;
- (void)deselectAllLocalIdentifiers;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void)setDisabledLocalIdentifiers:(id)a0;
- (void)setLocalIdentifiers:(id)a0 selected:(BOOL)a1;
- (void)setSuggestedLocalIdentifiers:(id)a0 withPhotoLibrary:(id)a1;

@end
