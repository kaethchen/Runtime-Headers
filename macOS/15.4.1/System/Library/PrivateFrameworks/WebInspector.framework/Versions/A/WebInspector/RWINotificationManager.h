@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface RWINotificationManager : NSObject <RWINotifier>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlersQueue;
@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (nonatomic) unsigned long long nextRegistrationID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendQueue;

- (id)init;
- (void).cxx_destruct;
- (void)sendNotification:(id)a0;
- (unsigned long long)registerNotificationHandlerOnQueue:(id)a0 handler:(id /* block */)a1;
- (BOOL)unregisterNotificationHandler:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)registerNotificationHandler:(id /* block */)a0;

@end
