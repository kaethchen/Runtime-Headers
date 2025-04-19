@class ACAccount, NSString, NSArray, NSSet, RMUILegacyProfilesViewModelProvider, RMUIPluginViewModelProvider, RMObserverStore;

@interface RMUIConfigurationInterface : NSObject

@property (retain) RMObserverStore *observerStore;
@property (readonly, copy, nonatomic) NSString *mdmProfileIdentifier;
@property (readonly, copy, nonatomic) NSArray *declarationsPayloadIdentifiers;
@property (readonly, copy, nonatomic) NSSet *filterDeclarationIdentifiers;
@property (retain, nonatomic) RMUILegacyProfilesViewModelProvider *legacyProfilesProvider;
@property (retain, nonatomic) RMUIPluginViewModelProvider *pluginProvider;
@property (retain, nonatomic) NSArray *privProfileViewModels;
@property (retain, nonatomic) NSArray *privPluginSectionViewModels;
@property (retain, nonatomic) NSArray *privPluginViewModels;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) ACAccount *rmAccount;
@property (readonly, nonatomic) NSArray *profileViewModels;
@property (readonly, nonatomic) NSArray *pluginSectionViewModels;
@property (readonly, nonatomic) NSArray *pluginViewModels;
@property (readonly, nonatomic) NSString *scopeHeading;
@property (readonly, nonatomic) NSString *passcodeDeclarationsHeading;
@property (readonly, nonatomic) NSString *profileDeclarationsHeading;
@property (readonly, nonatomic) NSString *pluginDeclarationsHeading;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)initWithScope:(long long)a0;
- (id)viewModels;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)initForTest:(long long)a0;
- (void)_activateConfiguration:(id)a0 observerStore:(id)a1 completionHandler:(id /* block */)a2;
- (void)_deactivateConfiguration:(id)a0 observerStore:(id)a1 completionHandler:(id /* block */)a2;
- (void)_loadObserverStoreForDDMWithCompletion:(id /* block */)a0;
- (void)_loadObserverStoreForDeclarationsPayloadWithCompletion:(id /* block */)a0;
- (void)_loadObserverStoreWithCompletion:(id /* block */)a0;
- (void)_reloadUIWithCompletion:(id /* block */)a0;
- (void)_reloadViewModelsWithCompletion:(id /* block */)a0;
- (long long)_rmManagementScope;
- (long long)_rmStoreScope;
- (id)accountDeclarationsHeading;
- (id)initWithAccount:(id)a0 scope:(long long)a1;
- (id)initWithAccount:(id)a0 scope:(long long)a1 initialLoad:(BOOL)a2;
- (id)initWithDeclarationsPayloadIdentifier:(id)a0 scope:(long long)a1;
- (id)initWithDeclarationsPayloadIdentifier:(id)a0 scope:(long long)a1 initialLoad:(BOOL)a2;
- (id)initWithDeclarationsPayloadIdentifiers:(id)a0 scope:(long long)a1 initialLoad:(BOOL)a2;
- (id)initWithMDMProfileIdentifier:(id)a0 scope:(long long)a1;
- (id)initWithMDMProfileIdentifier:(id)a0 scope:(long long)a1 initialLoad:(BOOL)a2;
- (void)reloadNotificationPosted:(id)a0;
- (void)setConfigurationActivated:(BOOL)a0 forViewModel:(id)a1 completionHandler:(id /* block */)a2;

@end
