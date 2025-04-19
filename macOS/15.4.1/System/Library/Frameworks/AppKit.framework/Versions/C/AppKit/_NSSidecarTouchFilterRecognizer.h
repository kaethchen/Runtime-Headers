@interface _NSSidecarTouchFilterRecognizer : NSObject {
    long long _state;
    struct __CGEvent { } *_lastCGEvent;
}

@property long long state;
@property struct __CGEvent { } *lastCGEvent;

- (void)reset;
- (void)action;
- (void)handleCGEvent:(struct __CGEvent { } *)a0 hidEvent:(struct __IOHIDEvent { } *)a1;

@end
