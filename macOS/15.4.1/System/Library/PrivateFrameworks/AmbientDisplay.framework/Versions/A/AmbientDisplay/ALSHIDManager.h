@interface ALSHIDManager : NSObject {
    struct __IOHIDEventSystemClient { } *hidEventClient;
}

+ (id)singleton;

- (void)start;
- (void)stop;

@end
