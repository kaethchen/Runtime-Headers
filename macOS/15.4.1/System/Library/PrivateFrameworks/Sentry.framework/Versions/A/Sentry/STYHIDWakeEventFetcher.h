@class NSDateFormatter;

@interface STYHIDWakeEventFetcher : NSObject {
    struct __IOHIDEventSystemClient { } *_eventSystemRef;
    NSDateFormatter *_formatter;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)firstHidWakeEventAfter:(unsigned long long)a0 before:(unsigned long long)a1;

@end
