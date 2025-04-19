@class NSMutableDictionary, _CDXPCEventPublisher, BMSource, NSObject;
@protocol OS_dispatch_queue;

@interface _CDReceiverNotifier : NSObject <_CDXPCEventPublisherDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    _CDXPCEventPublisher *_xpcPublisher;
    NSMutableDictionary *_subscribers;
    BOOL _isRootProcess;
    BMSource *_intentSource;
    BMSource *_activitySource;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)_publishXPCEvent:(id)a0 uid:(unsigned int)a1;
- (void)handleXPCNotificationEvent:(id)a0;
- (void)publishXPCEventForAppIntents:(id)a0 appActivities:(id)a1 uid:(unsigned int)a2;
- (void)publishXPCEventForDeletedIntentGroupIdentifiers:(id)a0 bundleID:(id)a1 uid:(unsigned int)a2;
- (void)publishXPCEventForDeletedIntentIdentifiers:(id)a0 bundleID:(id)a1 uid:(unsigned int)a2;
- (void)removeSubscriberWithToken:(unsigned long long)a0 streamName:(id)a1;

@end
