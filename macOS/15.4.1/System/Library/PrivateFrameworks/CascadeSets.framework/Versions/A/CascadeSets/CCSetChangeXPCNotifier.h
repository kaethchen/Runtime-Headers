@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface CCSetChangeXPCNotifier : NSObject <CCSetChangeNotifierProtocol> {
    NSObject<OS_xpc_event_publisher> *_publisher;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_tokens;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_handlePublisherAction:(unsigned int)a0 token:(unsigned long long)a1 descriptor:(id)a2;
- (void)notifyChangeToSet:(id)a0;

@end
