@class NSMutableDictionary;

@interface WDSessionNotificationManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *handlers;

- (id)init;
- (void).cxx_destruct;
- (void)dispatchNotification:(id)a0 payload:(id)a1;
- (unsigned long long)registerForNotification:(id)a0 handler:(id /* block */)a1;
- (void)unregisterHandler:(unsigned long long)a0;

@end
