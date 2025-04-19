@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface LSSettingsStore : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *observerQueue;
@property (readonly) NSMutableSet *observerSet;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)addChangeObserver:(id /* block */)a0;
- (void)removeChangeObserver:(id)a0;
- (BOOL)resetUserElectionsWithError:(id *)a0;
- (BOOL)setUserElection:(unsigned char)a0 forExtensionKey:(id)a1 error:(id *)a2;
- (id)settingsStoreConfigurationForProcessWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (unsigned char)userElectionForExtensionKey:(id)a0;

@end
