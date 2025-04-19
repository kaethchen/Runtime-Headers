@class NSString;

@interface BU_TBlockAnimationDelegate : NSObject <NSAnimationDelegate> {
    struct function<void (NSAnimation *, float)> { struct __value_func<void (NSAnimation *, float)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _progressCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)animation:(id)a0 didReachProgressMark:(float)a1;
- (id)initWithAnimation:(id)a0 progressCallback:(struct function<void (NSAnimation *, float)> { struct __value_func<void (NSAnimation *, float)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a1;

@end
