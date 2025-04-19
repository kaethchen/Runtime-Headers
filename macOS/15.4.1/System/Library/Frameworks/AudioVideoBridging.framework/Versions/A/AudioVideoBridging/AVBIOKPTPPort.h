@class IOKNotificationPort, IOKInterestNotification, NSPointerArray, IOKService, NSObject;
@protocol OS_dispatch_queue;

@interface AVBIOKPTPPort : NSObject {
    IOKService *_service;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serviceLock;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    IOKNotificationPort *_notificationPort;
    IOKInterestNotification *_interestNotification;
    NSPointerArray *_avbPorts;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _avbPortsLock;
}

@property (nonatomic) unsigned short portNumber;
@property (nonatomic) unsigned long long clockIdentifier;
@property (readonly, nonatomic) IOKService *service;
@property (readonly, nonatomic) int portType;

+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
+ (id)iokitMatchingDictionaryForPortClass:(id)a0 clockIdentifier:(unsigned long long)a1 andPortNumber:(unsigned short)a2;
+ (id)ptpPortWithClockIdentifier:(unsigned long long)a0 portNumber:(unsigned short)a1;
+ (id)ptpPortWithService:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (int)portType;
- (id)initWithService:(id)a0;
- (id)initWithMatchingDictionary:(id)a0;
- (unsigned long long)_clockIdentifier;
- (unsigned short)_portNumber;
- (void)finalizeNotifications;
- (id)initWithService:(id)a0 pid:(int)a1;
- (void)serviceTerminated;
- (void)updateProperties;
- (id)_notificationPort;
- (id)_notificationQueue;
- (void)addAVBPTPPort:(id)a0;
- (id)avbPorts;
- (void)lockAVBPorts;
- (id)propertiesForAPI;
- (void)removeAVBPTPPort:(id)a0;
- (void)unlockAVBPorts;

@end
