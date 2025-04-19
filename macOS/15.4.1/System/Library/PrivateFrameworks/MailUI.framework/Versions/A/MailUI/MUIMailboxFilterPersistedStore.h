@class NSString, NSMutableDictionary, EFCancelationToken;

@interface MUIMailboxFilterPersistedStore : NSObject <MUIMailboxFilterStore>

@property (retain, nonatomic) NSMutableDictionary *storage;
@property (readonly, copy, nonatomic) NSString *storagePath;
@property (readonly, nonatomic) EFCancelationToken *cancelationToken;
@property (readonly, nonatomic) NSMutableDictionary *viewModelPool;
@property (copy, nonatomic) id /* block */ defaultsRepresentationProvider;
@property (copy, nonatomic) id /* block */ filterRepresentationProvider;
@property (retain, nonatomic) Class mailboxFilterClass;
@property (retain, nonatomic) Class filterProviderClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_load;
- (void)_write;
- (id)_cleanStorageToWrite;
- (id)_filterViewModelForContext:(id)a0;
- (id)_filtersForContext:(id)a0 provider:(id)a1;
- (void)_setFilters:(id)a0 forContext:(id)a1 provider:(id)a2;
- (id)filterViewModelForContext:(id)a0;
- (id)initWithBaseStoragePath:(id)a0 defaultsRepresentationProvider:(id /* block */)a1 filterRepresentationProvider:(id /* block */)a2 mailboxFilterClass:(Class)a3 filterProviderClass:(Class)a4;

@end
