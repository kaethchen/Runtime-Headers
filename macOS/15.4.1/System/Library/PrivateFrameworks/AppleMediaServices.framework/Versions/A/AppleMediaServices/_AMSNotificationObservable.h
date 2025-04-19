@interface _AMSNotificationObservable : AMSObservable

- (BOOL)cancel;
- (void)_receivedNotification:(id)a0;
- (id)initWithNotification:(id)a0 object:(id)a1;
- (BOOL)sendCompletion;

@end
