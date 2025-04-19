@class IOKConnection, IOKNotificationPort, AVBInterface, IOKInterestNotification, IOKService, NSObject;
@protocol OS_dispatch_queue;

@interface AVB1722MAAP : NSObject {
    IOKService *_service;
    IOKConnection *_connection;
    IOKNotificationPort *_notificationPort;
    IOKInterestNotification *_interestNotification;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_userClientSyncQueue;
    int _userClientAccessCount;
}

@property (weak) AVBInterface *interface;

+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (void)serviceTerminated;
- (BOOL)allocateMulticastMAC:(id)a0 error:(id *)a1;
- (void)beginProtectedUserClientCall;
- (void)callbackWithArgs:(unsigned long long *)a0 argCount:(unsigned int)a1;
- (BOOL)deallocateMulticastMAC:(id)a0 error:(id *)a1;
- (void)endProtectedUserClientCall;

@end
