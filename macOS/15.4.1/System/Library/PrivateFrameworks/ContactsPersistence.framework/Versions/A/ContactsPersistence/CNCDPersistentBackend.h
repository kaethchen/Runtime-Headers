@class NSString, CNPersistentStoreCoordinatorCache;
@protocol CNAccountCollection, CNCDIOSLegacyIdentifierRegistration;

@interface CNCDPersistentBackend : NSObject <CNCDPersistenceBackend>

@property (readonly, nonatomic) CNPersistentStoreCoordinatorCache *pscCache;
@property (readonly, nonatomic) id<CNAccountCollection> accountCollection;
@property (readonly) id<CNCDIOSLegacyIdentifierRegistration> iOSLegacyIdentifierRegistrar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (id)backendWithAccountCollection:(id)a0;

- (void).cxx_destruct;
- (id)defaultContainer;
- (id)allAccountContainers;
- (void)applyDiff:(id)a0 toContainerWithIdentifier:(id)a1;
- (id)initWithPersistentStoreCache:(id)a0 accountCollection:(id)a1;
- (id)makeManagedObjectContextWithConcurrencyType:(unsigned long long)a0;
- (id)makePersistenceContextWithNotificationSource:(id)a0;
- (id)makePersistentStoreCoordinator;
- (void)repairPersistenceStackIfNecessary;

@end
