@interface SCRHIDProperties : NSObject {
    struct __IOHIDEventSystemClient { } *_client;
    struct __IOHIDServiceClient { } *_service;
}

- (void)dealloc;
- (id)init;
- (double)keyRepeatDelay;
- (double)doubleClickSpeedDelay;
- (double)initialKeyRepeatDelay;

@end
