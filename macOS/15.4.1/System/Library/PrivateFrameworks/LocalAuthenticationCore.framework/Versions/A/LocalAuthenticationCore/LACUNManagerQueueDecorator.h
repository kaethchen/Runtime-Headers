@class NSString, NSObject;
@protocol LACUNManagerDelegate, OS_dispatch_queue, LACUNManager;

@interface LACUNManagerQueueDecorator : NSObject <LACUNManagerDelegate, LACUNManager> {
    id<LACUNManagerDelegate> _delegate;
    id<LACUNManager> _manager;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<LACUNManagerDelegate> delegate;

- (void).cxx_destruct;
- (void)cancelAllNotificationsWithCompletion:(id /* block */)a0;
- (void)cancelNotificationsWithIdentifiers:(id)a0 scheduledOnly:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithManager:(id)a0 replyQueue:(id)a1;
- (id)initWithManager:(id)a0 workQueue:(id)a1 replyQueue:(id)a2;
- (void)notificationManager:(id)a0 didRespondToNotification:(id)a1 fromCategory:(id)a2 withAction:(id)a3 completionHandler:(id /* block */)a4;
- (void)postNotification:(id)a0 completion:(id /* block */)a1;

@end
