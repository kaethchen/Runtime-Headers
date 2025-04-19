@class NSOrderedSet, MSPSharingRestorationStorage, NSDictionary, NSMutableSet, NSObject, NSUUID;
@protocol MSPSharedTripContactControllerDelegate, OS_dispatch_queue, MSPSharedTripXPCServer;

@interface MSPSharedTripContactController : NSObject {
    NSOrderedSet *_activeContacts;
    NSOrderedSet *_activeHandles;
    NSDictionary *_serviceNamesByActiveHandle;
    NSMutableSet *_pendingContacts;
    id<MSPSharedTripXPCServer> _sharedTripServer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSUUID *_sessionIdentifier;
}

@property (weak, nonatomic) id<MSPSharedTripContactControllerDelegate> delegate;
@property (readonly, nonatomic) NSOrderedSet *activeContactsValues;
@property (readonly, nonatomic) MSPSharingRestorationStorage *archivedSharingStorage;

- (void).cxx_destruct;
- (void)reset;
- (void)_reset;
- (unsigned long long)_activeCapabilityTypeForContact:(id)a0 serviceName:(id *)a1;
- (id)_archivedSharingStorage;
- (BOOL)_contactIsActive:(id)a0;
- (void)_didStartSharingWithContact:(id)a0 withCapabilityType:(unsigned long long)a1 serviceName:(id)a2 error:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
- (void)_notifyDelegateContactsChanged;
- (void)_shareWithContactValue:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_stopAllSharingWithReason:(unsigned long long)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_stopSharingWithContactValue:(id)a0 reason:(unsigned long long)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)_updateActiveSharingHandles:(id)a0 serviceNames:(id)a1;
- (unsigned long long)activeCapabilityTypeForContact:(id)a0 serviceName:(id *)a1;
- (BOOL)contactIsActive:(id)a0;
- (id)initWithSharedTripServer:(id)a0;
- (void)shareWithContactValue:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)stopAllSharingWithReason:(unsigned long long)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)stopSharingWithContactValue:(id)a0 reason:(unsigned long long)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)updateActiveSharingHandles:(id)a0 serviceNames:(id)a1;

@end
