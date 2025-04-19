@class NSArray, PXSharedLibraryStatusProvider, NSDiffableDataSourceSnapshot, NSString, PXSharedLibraryRule;
@protocol PXSharedLibraryRulePeopleDataManagerDelegate;

@interface PXSharedLibraryRulePeopleDataManager : PXObservable <PXChangeObserver> {
    PXSharedLibraryRule *_currentSharedLibraryRule;
    NSDiffableDataSourceSnapshot *_currentSnapshot;
}

@property (readonly, nonatomic) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot;
@property (readonly, nonatomic) NSArray *currentPersonIdentifiers;
@property (readonly, nonatomic) NSString *statusMessage;
@property (weak, nonatomic) id<PXSharedLibraryRulePeopleDataManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateCurrentSnapshot;
- (id)initWithSharedLibraryStatusProvider:(id)a0;

@end
