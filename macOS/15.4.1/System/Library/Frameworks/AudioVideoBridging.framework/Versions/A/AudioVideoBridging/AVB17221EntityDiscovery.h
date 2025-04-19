@class NSString, IOKConnection, AVBInterface, IOKNotificationPort, IOKInterestNotification, NSMutableDictionary, IOKMatchingNotification, IOKService, NSObject;
@protocol AVB17221EntityDiscoveryDelegate, OS_dispatch_queue;

@interface AVB17221EntityDiscovery : NSObject {
    IOKService *_service;
    IOKConnection *_connection;
    IOKNotificationPort *_notificationPort;
    IOKMatchingNotification *_localArrivalNotification;
    IOKMatchingNotification *_localDepatureNotification;
    IOKMatchingNotification *_remoteArrivalNotification;
    IOKMatchingNotification *_remoteDepatureNotification;
    IOKInterestNotification *_interestNotification;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_callbackActionQueue;
    NSMutableDictionary *_localEntities;
    NSMutableDictionary *_remoteEntities;
}

@property (weak) AVBInterface *interface;
@property (copy) NSString *interfaceName;
@property (weak) id<AVB17221EntityDiscoveryDelegate> discoveryDelegate;

+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (id)commonInit;
- (id)initWithInterfaceName:(id)a0;
- (BOOL)discoverEntity:(unsigned long long)a0;
- (BOOL)addLocalEntity:(id)a0 error:(id *)a1;
- (BOOL)changeEntityWithEntityID:(unsigned long long)a0 toNewGPTPGrandmasterID:(unsigned long long)a1 error:(id *)a2;
- (void)cleanupIOKit;
- (BOOL)discoverEntities;
- (void)entityDiscoveryTerminated;
- (void)primeIterators;
- (BOOL)removeLocalEntity:(unsigned long long)a0 error:(id *)a1;

@end
