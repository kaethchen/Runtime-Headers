@class SLSGUIClient, NSObject;
@protocol OS_dispatch_semaphore;

@interface SLSDisplayManager : NSObject

@property BOOL connected;
@property (retain, nonatomic) SLSGUIClient *client;
@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property BOOL enabled;
@property (nonatomic) void *registeredNotifiers;
@property BOOL runningInServer;
@property (nonatomic) unsigned char lastPowerStateNotification;

+ (void)broadcastPowerStateChangeEvent:(unsigned char)a0 payload:(id)a1;

- (void)dealloc;
- (id)init;
- (id)initWith:(id *)a0;
- (void)deliverPowerStateNotification:(unsigned char)a0 payload:(id)a1;
- (void)dispatchPowerStateNotification:(unsigned char)a0 payload:(id)a1;
- (BOOL)idleDisplays:(id *)a0;
- (BOOL)registerPowerStateNotification:(id *)a0 registrationID:(id)a1 sendInitialState:(BOOL)a2 queue:(id)a3 refcon:(void *)a4 notificationOption:(unsigned int)a5 notificationBlock:(id /* block */)a6 notificationPayloadBlock:(id /* block */)a7;
- (BOOL)unregisterPowerStateNotification:(id *)a0 registrationID:(id)a1 notificationOption:(unsigned int)a2;

@end
