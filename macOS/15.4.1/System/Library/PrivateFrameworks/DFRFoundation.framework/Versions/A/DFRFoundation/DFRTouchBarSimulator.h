@class DFRTouchBar;

@interface DFRTouchBarSimulator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _style;
    DFRTouchBar *_touchBar;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 properties:(id)a1;

@end
