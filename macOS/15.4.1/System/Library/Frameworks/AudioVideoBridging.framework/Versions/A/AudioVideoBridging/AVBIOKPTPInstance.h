@class NSString, NSArray, IOKInterestNotification, IOKNotificationPort, IOKService, NSObject, TSgPTPClock, NSPointerArray;
@protocol OS_dispatch_queue;

@interface AVBIOKPTPInstance : NSObject <TSClockClient> {
    NSPointerArray *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientsLock;
    NSPointerArray *_avbInstances;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _avbInstancesLock;
    TSgPTPClock *_gPTPClock;
    IOKService *_service;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serviceLock;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    IOKNotificationPort *_notificationPort;
    IOKInterestNotification *_interestNotification;
}

@property (copy, nonatomic) NSArray *gptpPath;
@property (nonatomic) unsigned long long grandmasterIdentity;
@property (nonatomic) unsigned short localSyncPort;
@property (readonly, nonatomic) unsigned long long clockIdentifier;
@property (readonly, copy, nonatomic) NSArray *ports;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availablegPTPClockIdentifiers;
+ (id)clockNameForClockIdentifier:(unsigned long long)a0;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0;
+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;
+ (id)serviceForClockIdentifier:(unsigned long long)a0;
+ (id)diagnosticInfoForServiceNoPorts:(id)a0;
+ (id)iokitInterfaceMatchingDictionaryForInterfaceName:(id)a0;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)service;
- (id)ports;
- (id)clockName;
- (void)didProcessSync:(id)a0;
- (id)_gptpPath;
- (unsigned long long)_grandmasterIdentity;
- (void)_handleInterestNotification:(unsigned int)a0 withArgument:(void *)a1;
- (BOOL)addLinkLayerPortOnInterfaceNamed:(id)a0 allocatedPortNumber:(unsigned short *)a1 error:(id *)a2;
- (BOOL)addReverseSyncOnInterfaceNamed:(id)a0 withDomainNumner:(unsigned char)a1 syncInterval:(unsigned int)a2 error:(id *)a3;
- (void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1 forClock:(id)a2;
- (void)didChangeLocalPortWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1 forClock:(id)a2;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1 forClock:(id)a2;
- (void)finalizeNotifications;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (id)initWithClockIdentifier:(unsigned long long)a0 pid:(int)a1;
- (id)portWithPortNumber:(unsigned short)a0;
- (BOOL)removeLinkLayerPortFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeReverseSyncFromInterfaceNamed:(id)a0 withDomainNumner:(unsigned char)a1 error:(id *)a2;
- (void)addAVBPTPInstance:(id)a0;
- (void)removeAVBPTPInstance:(id)a0;

@end
