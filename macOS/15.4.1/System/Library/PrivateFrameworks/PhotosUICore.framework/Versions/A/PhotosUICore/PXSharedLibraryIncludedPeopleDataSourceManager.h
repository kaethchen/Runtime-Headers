@class NSString, PXSharedLibraryIncludedPeopleDataSource, NSMutableSet, NSMutableArray, PXSharedLibraryAssistantViewModel;

@interface PXSharedLibraryIncludedPeopleDataSourceManager : PXSectionedDataSourceManager <PXChangeObserver> {
    NSMutableSet *_removedParticipants;
    NSMutableArray *_infos;
    NSMutableArray *_infosWithBothPeopleAndParticipants;
    NSMutableArray *_infosWithoutPeople;
}

@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly, nonatomic) PXSharedLibraryIncludedPeopleDataSource *dataSource;
@property (nonatomic) BOOL viewModelSyncingDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeAllItems;
- (id)initWithViewModel:(id)a0;
- (void)removeInfo:(id)a0;
- (void)_resetIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)createInitialDataSource;
- (id)_infosForPersonIdentifiers:(id)a0;
- (void)_updateDataSource;
- (void)_updateDataSourceWithItemChanges:(id)a0 fromDataSourceIdentifier:(long long)a1;
- (void)_updateViewModel;
- (void)_updateViewModelInitially;
- (void)addInfos:(id)a0;
- (void)addSelectedPersonIdentifiers:(id)a0;
- (void)didCreateInitialDataSource;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (void)replaceInfo:(id)a0 withInfo:(id)a1;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (void)setDataSource:(id)a0 changeDetailsArray:(id)a1;

@end
