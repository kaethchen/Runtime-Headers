@interface FI_TNotificationCenterObserverGlue : NSObject {
    struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _invokeSimple;
    struct function<void (NSNotification *)> { struct __value_func<void (NSNotification *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _invokeWithNote;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)invoke:(id)a0;
- (id)initSimple:(const void *)a0;
- (id)initWithNote:(const void *)a0;

@end
