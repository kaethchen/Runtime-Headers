@class PHFetchResult, PXSuggestionsDataSource, NSPredicate, PXLibraryFilterState, NSString;

@interface PXSuggestionsDataSourceManager : PXSectionedDataSourceManager <PXChangeObserver, PXPhotoLibraryUIChangeObserver>

@property (class, readonly, nonatomic) NSPredicate *baseFetchPredicate;

@property (readonly, nonatomic) PHFetchResult *fetchResult;
@property (readonly, copy, nonatomic) id /* block */ fetchResultProvider;
@property (readonly, nonatomic) unsigned short dataSourceType;
@property (readonly, nonatomic) PXSuggestionsDataSource *dataSource;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typePredicateForDataSourceType:(unsigned short)a0;
+ (id)mostRecentCreationDateForPXSuggestionDataSourceType:(unsigned short)a0;

- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)createInitialDataSource;
- (id)_createNewDataSourceWithFetchResult:(id)a0;
- (void)_handleChangeWithDetails:(id)a0;
- (void)_resetDataSource;
- (id)initWithDataSourceType:(unsigned short)a0 libraryFilterState:(id)a1;
- (id)initWithLibraryFilterState:(id)a0 fetchResultProvider:(id /* block */)a1;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;

@end
