@class NSObject, DFRTouchBar;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface DFRDisplayStream : NSObject {
    BOOL _firstFrame;
    BOOL _running;
    BOOL _legacyTouchBarSim;
    DFRTouchBar *_touchBar;
    id /* block */ _handler;
    NSObject<OS_dispatch_source> *_source;
    struct _mach_right_send { unsigned int mrs_name; } _sendRight;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTouchBar:(struct __DFRTouchBar { } *)a0 properties:(id)a1 queue:(id)a2 handler:(id /* block */)a3;

@end
