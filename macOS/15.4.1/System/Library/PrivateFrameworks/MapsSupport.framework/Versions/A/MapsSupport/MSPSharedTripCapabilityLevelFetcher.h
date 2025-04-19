@class NSString, NSMutableDictionary, GEOObserverHashTable, NSMutableOrderedSet, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MSPSharedTripCapabilityLevelFetcher : NSObject <MSPSharedTripXPCCapabilityReceiving> {
    GEOObserverHashTable *_observers;
    NSMutableDictionary *_statusesByIdentifier;
    NSMutableOrderedSet *_fetchQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFetcher;

- (id)init;
- (void).cxx_destruct;
- (void)_connectionInvalidated:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)_connectionInterrupted:(id)a0;
- (void)registerObserver:(id)a0;
- (id)_processResults:(id)a0;
- (void)_openConnectionIfNeeded;
- (void)notifyObservers:(id)a0;
- (void)_fetchQueuesDidUpdate;
- (void)cancelCapabilityLevelRequestForContact:(id)a0;
- (void)cancelCapabilityLevelRequestForContacts:(id)a0;
- (unsigned long long)capabilityLevelForContact:(id)a0;
- (void)capabilityLevelsDidUpdate:(id)a0;
- (void)fetchCapabilityLevelForContact:(id)a0 timeout:(double)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)requestCapabilityLevelsForContacts:(id)a0;
- (id)serviceNameForContact:(id)a0;
- (void)verifyBlockedStatuses;

@end
