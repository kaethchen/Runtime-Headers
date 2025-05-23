@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface IPXPCEventSubscriptionBlackhole : NSObject {
    NSString *_streamName;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_event_publisher> *_publisher;
}

- (void).cxx_destruct;
- (void)resume;
- (id)initWithStreamName:(id)a0;

@end
