@class NSString, NSMutableArray, NSObject;
@protocol OS_os_log, OS_xpc_event_publisher, _CDXPCEventPublisherDelegate, OS_dispatch_queue;

@interface _CDXPCEventPublisher : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_event_publisher> *publisher;
@property (retain, nonatomic) NSString *streamName;
@property (retain, nonatomic) id<_CDXPCEventPublisherDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) const char *os_variant_diagnostic_subsystem;
@property (retain, nonatomic) NSMutableArray *pendingSendEvents;

+ (id)eventPublisherWithStreamName:(const char *)a0 delegate:(id)a1 queue:(id)a2 log:(id)a3;
+ (id)eventPublisherWithStreamName:(const char *)a0 delegate:(id)a1 queue:(id)a2 log:(id)a3 os_variant_diagnostic_subsystem:(const char *)a4;

- (void).cxx_destruct;
- (void)sendEvent:(id)a0 toSubscriber:(id)a1 handler:(id /* block */)a2;
- (void)activatePublisherWithStreamName:(const char *)a0;
- (void)addToken:(unsigned long long)a0 descriptor:(id)a1 userID:(unsigned int)a2;
- (void)handleEventWithAction:(unsigned int)a0 token:(unsigned long long)a1 descriptor:(id)a2;
- (id)initWithStreamName:(id)a0 delegate:(id)a1 queue:(id)a2 log:(id)a3 os_variant_diagnostic_subsystem:(const char *)a4;
- (void)removeToken:(unsigned long long)a0;
- (void)sendEvent:(id)a0 toSubscriber:(id)a1 replyHandler:(id /* block */)a2;

@end
