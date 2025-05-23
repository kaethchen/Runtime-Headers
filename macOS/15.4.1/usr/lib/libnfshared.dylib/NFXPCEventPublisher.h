@class NSString, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface NFXPCEventPublisher : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_event_publisher> *publisher;
@property (retain, nonatomic) NSString *streamName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *pendingSendEvents;
@property (retain, nonatomic) NSMutableSet *tokens;
@property (nonatomic) BOOL receivedInitialBarrier;

- (void).cxx_destruct;
- (void)handleEventWithAction:(unsigned int)a0 token:(unsigned long long)a1 descriptor:(id)a2;
- (id)initWithStreamName:(id)a0 queue:(id)a1;
- (void)sendXpcNotificationEvent:(id)a0;
- (void)sendXpcNotificationEventWithDictionary:(id)a0;
- (void)sendXpcNotificationEventWithString:(id)a0;

@end
