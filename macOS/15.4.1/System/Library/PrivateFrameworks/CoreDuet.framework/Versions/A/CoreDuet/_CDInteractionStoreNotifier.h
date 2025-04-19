@class NSMutableDictionary, _CDXPCEventPublisher, NSObject;
@protocol OS_dispatch_queue;

@interface _CDInteractionStoreNotifier : NSObject <_CDXPCEventPublisherDelegate> {
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
    _CDXPCEventPublisher *_interactionRecordedEventPublisher;
    _CDXPCEventPublisher *_interactionDeletedEventPublisher;
    NSMutableDictionary *_interactionStoreRecordedEventSubscribersByToken;
    NSMutableDictionary *_interactionStoreDeletedEventSubscribersByToken;
    BOOL _isRootProcess;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)addSubscriber:(id)a0;
- (void)deleteAll;
- (void)deleted:(id)a0;
- (id)filterInteractionsForUser:(id)a0;
- (void)handleXPCNotificationEvent:(id)a0;
- (void)postPackedMechanisms:(unsigned long long)a0;
- (void)publishDeletedXPCEvent:(id)a0;
- (void)publishRecordedXPCEvent:(id)a0;
- (void)recorded:(id)a0;
- (void)removeSubscriberWithToken:(unsigned long long)a0 streamName:(id)a1;

@end
