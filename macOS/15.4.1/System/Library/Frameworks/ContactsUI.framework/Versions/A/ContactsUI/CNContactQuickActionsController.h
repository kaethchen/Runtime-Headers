@class NSArray, NSDictionary, CNContact, NSMenu, NSObject, NSString;
@protocol CNCancelable, CNUIUserActionContext, CNContactQuickActionViewContainer, CNSchedulerProvider, CNKeyDescriptor, CNUIUserActionListDataSource, CNContactQuickActionsControllerDelegate, OS_os_log;

@interface CNContactQuickActionsController : NSObject <CNUIUserActionListConsumer, CNUIUserActionListDataSourceDelegate>

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;
@property (class, readonly, nonatomic) id<CNKeyDescriptor> descriptorForRequiredKeys;

@property (readonly, nonatomic) id<CNUIUserActionListDataSource> userActionListDataSource;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (retain, nonatomic) id<CNCancelable> actionDiscoveryToken;
@property (retain, nonatomic) NSDictionary *actionListModelsByActionType;
@property (readonly, nonatomic) id<CNUIUserActionContext> userActionContext;
@property (retain, nonatomic) NSMenu *disambiguationMenu;
@property (readonly, weak, nonatomic) id<CNContactQuickActionViewContainer> contactQuickActionViewContainer;
@property (weak, nonatomic) id<CNContactQuickActionsControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *actionTypes;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDataSource;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)performAction:(id)a0;
- (void)userActionListDataSource:(id)a0 didResolveInitialActionsForActionType:(id)a1 contactIdentifier:(id)a2;
- (void)userActionListDataSource:(id)a0 willResolveInitialActionsForActionType:(id)a1 contactIdentifier:(id)a2;
- (void)discoverActions;
- (id)allModelsObservable;
- (void)cleanUpAfterLatestActionDiscovery;
- (id)defaultTitleForActionType:(id)a0;
- (void)didChooseActionMenuItem:(id)a0;
- (void)disambiguationMenuDismissedExternally;
- (id)disambiguationMenuForActionType:(id)a0;
- (void)executeLongPressBehaviorForActionType:(id)a0;
- (void)executeTapBehaviorForActionType:(id)a0;
- (BOOL)hasDefaultActionForActionType:(id)a0;
- (id)initWithActionTypes:(id)a0 contactQuickActionViewContainer:(id)a1;
- (id)initWithActionTypes:(id)a0 contactQuickActionViewContainer:(id)a1 userActionListDataSource:(id)a2 schedulerProvider:(id)a3 userActionContext:(id)a4;
- (void)processDiscoveredModels:(id)a0;
- (void)reportStoredModel:(id)a0 forActionType:(id)a1 toQuickActionContainer:(id)a2;
- (void)reportStoredModelsToQuickActionContainer;
- (void)setupDisambiguationMenuForActionType:(id)a0;
- (void)showDisambiguationMenuForActionType:(id)a0;
- (void)storeDiscoveredModels:(id)a0;
- (void)tearDownDisambiguationMenu;

@end
