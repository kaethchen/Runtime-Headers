@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BRDarwinNotifyReceiver : NSObject {
    NSString *_eventName;
    int _token;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _lastState;
}

@property (readonly, nonatomic) unsigned long long lastState;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initForEventName:(id)a0 withQueue:(id)a1 handler:(id /* block */)a2;

@end
