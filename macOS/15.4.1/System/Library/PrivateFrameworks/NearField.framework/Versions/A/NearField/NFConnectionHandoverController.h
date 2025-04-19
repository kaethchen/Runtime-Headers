@class NSObject;
@protocol OS_dispatch_queue;

@interface NFConnectionHandoverController : NSObject {
    unsigned char _version;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _type;
    long long _state;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) BOOL initiator;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)startWithCustomBroadcastData:(id)a0;

@end
