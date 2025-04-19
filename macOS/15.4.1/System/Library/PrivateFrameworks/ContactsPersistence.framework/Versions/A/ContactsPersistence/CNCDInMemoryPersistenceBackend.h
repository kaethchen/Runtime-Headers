@class NSArray, NSPersistentStoreCoordinator, NSString, NSMutableArray;
@protocol CNCDIOSLegacyIdentifierRegistration;

@interface CNCDInMemoryPersistenceBackend : NSObject <CNCDPersistenceBackend>

@property (retain, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property (retain, nonatomic) NSMutableArray *containers;
@property (copy, nonatomic) NSArray *accounts;
@property (readonly) id<CNCDIOSLegacyIdentifierRegistration> iOSLegacyIdentifierRegistrar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)defaultContainer;
- (id)_makeManagedObjectContextWithConcurrencyType:(unsigned long long)a0;
- (id)addAccountContainerWithName:(id)a0 type:(long long)a1;
- (id)addAccountContainerWithName:(id)a0 type:(long long)a1 writable:(BOOL)a2;
- (id)addAccountContainerWithProvider:(id /* block */)a0;
- (id)allAccountContainers;
- (void)applyDiff:(id)a0 toContainerWithIdentifier:(id)a1;
- (id)makePersistenceContext;
- (id)makePersistenceContextWithNotificationSource:(id)a0;
- (void)repairPersistenceStackIfNecessary;
- (void)updateCachedContainersWithValuesFromPersistentStore;

@end
