@class IOKNotificationPort, NSString, IOKMatchingNotification, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVBKextNotifier : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    IOKNotificationPort *_notificationPort;
    IOKMatchingNotification *_matchNotification;
    IOKMatchingNotification *_terminateNotification;
    int _found;
    NSMutableArray *_matchNotificationsArray;
    NSMutableArray *_terminateNotificationsArray;
    NSString *_identifier;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMatchingDictionary:(id)a0;
- (void)notifyWhenServiceIsUnavailable:(id /* block */)a0;
- (void)notifyWhenServiceIsAvailable:(id /* block */)a0;
- (id)initWithMatchingDictionary:(id)a0 notificationQueue:(id)a1 notificationPort:(id)a2;

@end
