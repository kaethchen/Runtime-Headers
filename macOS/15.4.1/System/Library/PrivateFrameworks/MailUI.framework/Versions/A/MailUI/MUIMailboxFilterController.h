@class MUIMailboxFilterPersistedStore, MUIMailboxFilterViewModel;

@interface MUIMailboxFilterController : NSObject

@property (readonly, nonatomic) MUIMailboxFilterPersistedStore *store;
@property (readonly, nonatomic) MUIMailboxFilterViewModel *viewModel;

- (void).cxx_destruct;
- (id)initWithMailboxes:(id)a0 focus:(id)a1 baseStoragePath:(id)a2 defaultsRepresentationProvider:(id /* block */)a3 filterRepresentationProvider:(id /* block */)a4 mailboxFilterClass:(Class)a5 filterProviderClass:(Class)a6 isFilteringAvailable:(BOOL)a7;
- (void)reselectFocusedAccounts;
- (void)updateWithFilterContext:(id)a0;

@end
