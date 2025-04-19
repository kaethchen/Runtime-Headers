@class NSString;

@interface BRDarwinNotifySender : NSObject {
    NSString *_eventName;
    int _token;
    unsigned long long _lastState;
}

@property (readonly, nonatomic) unsigned long long lastState;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initForEventName:(id)a0;
- (void)notifyChangedState:(unsigned long long)a0;

@end
