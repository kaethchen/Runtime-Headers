@class NSString, NSArray, PKAccountService, NSSet, NSMutableDictionary, PKCatalog, NSMutableArray, PKPassLibrary, PKPaymentService;
@protocol PKGroupsControllerDelegate;

@interface PKGroupsController : NSObject <PKPassLibraryDelegate, PKAccountServiceObserver> {
    PKPassLibrary *_passLibrary;
    PKPaymentService *_paymentService;
    unsigned long long _filters;
    unsigned long long _passTypeMask;
    NSSet *_allowedPassUniqueIDs;
    NSMutableArray *_groups;
    NSMutableDictionary *_groupsByGroupID;
    NSMutableDictionary *_indicesByGroupID;
    NSMutableDictionary *_groupIDsByPassUniqueID;
    NSMutableDictionary *_groupIDsByExpiredPassUniqueID;
    BOOL _suppressRemoteUpdates;
    BOOL _enqueueRemoteUpdates;
    PKCatalog *_catalogBeforeReordering;
    NSMutableArray *_enqueuedUpdates;
    NSArray *_localPasses;
    NSSet *_expressPassConfigurations;
    BOOL _limitedMode;
    BOOL _activePassesOnly;
    int _expressPassesInformationToken;
    PKAccountService *_accountService;
}

@property (nonatomic) BOOL reorderingEnabled;
@property (readonly, nonatomic) BOOL filteringEnabled;
@property (readonly, nonatomic) NSArray *filteredPassUniqueIDs;
@property (readonly, nonatomic) NSArray *expiredSectionPasses;
@property (readonly, nonatomic) NSMutableDictionary *passAnnotationsByUniqueId;
@property (nonatomic) BOOL shouldSeparatePaymentPasses;
@property (weak, nonatomic) id<PKGroupsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)groups;
- (id)passes;
- (unsigned long long)groupCount;
- (void)accountRemoved:(id)a0;
- (void)accountAdded:(id)a0;
- (void)accountChanged:(id)a0;
- (void)addLocalPasses:(id)a0;
- (void)_moveGroup:(id)a0 fromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2 notify:(BOOL)a3;
- (BOOL)containsExpiredPassWithUniqueID:(id)a0;
- (void)enableRemoteUpdates;
- (long long)expiredSectionPassesCount;
- (id)groupAtIndex:(unsigned long long)a0;
- (unsigned long long)groupIndexForPassUniqueID:(id)a0;
- (void)handleUserPassArchive:(id)a0;
- (void)handleUserPassDelete:(id)a0;
- (void)handleUserPassRecover:(id)a0;
- (void)handleUserPassesDelete:(id)a0;
- (unsigned long long)indexOfGroup:(id)a0;
- (unsigned long long)indexOfSeparationGroup;
- (id)initLimited;
- (id)initWithPassLibrary:(id)a0;
- (id)initWithPassTypeMask:(unsigned long long)a0 passFilters:(unsigned long long)a1 allowedPassUniqueIDs:(id)a2;
- (void)loadGroupsSynchronously;
- (void)loadGroupsWithCompletion:(id /* block */)a0;
- (void)moveGroupAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)movePass:(id)a0 inGroup:(id)a1 toIndex:(unsigned long long)a2;
- (void)objectSettingsDidChangeNotification:(id)a0;
- (void)passLibrary:(id)a0 receivedUpdatedCatalog:(id)a1 passes:(id)a2 states:(id)a3;
- (id)passWithUniqueID:(id)a0;
- (void)reloadGroups;
- (void)reloadGroupsWithCompletion:(id /* block */)a0;
- (void)suppressRemoteUpdates:(BOOL)a0;

@end
