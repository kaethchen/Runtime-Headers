@class IOKConnection, IOKNotificationPort, AVBInterface, IOKInterestNotification, NSString, NSObject, IOKService;
@protocol OS_dispatch_queue;

@interface AVBMRP : NSObject {
    IOKService *_service;
    IOKNotificationPort *_notificationPort;
    IOKInterestNotification *_interestNotification;
    NSString *_interfaceName;
}

@property (weak) AVBInterface *interface;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) IOKConnection *connection;

+ (id)IOClassName;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0;

- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (id)commonInit;
- (id)initWithInterfaceName:(id)a0;
- (id)localAttributes;
- (void)serviceTerminated;
- (void)callbackWithArgs:(unsigned long long *)a0 argCount:(unsigned int)a1;
- (id)remoteAttributes;
- (BOOL)sendPreregisteredAttributes;

@end
