@class NSString, NSObject;
@protocol OS_dispatch_queue, LACDTONotificationFactory, LACDTONotificationManagerDelegate;

@interface LACDTONotificationManager : NSObject <LACUNManagerDelegate> {
    NSObject<OS_dispatch_queue> *_replyQueue;
    id<LACDTONotificationFactory> _notificationFactory;
}

@property (weak, nonatomic) id<LACDTONotificationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_securityDelayManager;
- (void)cancelPreviousNewSecurityDelayRequiredNotificationWithCompletion:(id /* block */)a0;
- (void)cancelPreviousSecurityDelayFinishedNotificationForPendingEvaluation:(id)a0 scheduledOnly:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithReplyQueue:(id)a0;
- (id)initWithReplyQueue:(id)a0 notificationFactory:(id)a1;
- (void)notificationManager:(id)a0 didRespondToNotification:(id)a1 fromCategory:(id)a2 withAction:(id)a3 completionHandler:(id /* block */)a4;
- (void)postNewSecurityDelayRequiredNotificationWithCompletion:(id /* block */)a0;
- (void)scheduleSecurityDelayFinishedNotificationForPendingEvaluation:(id)a0 after:(double)a1 validity:(double)a2 completion:(id /* block */)a3;

@end
