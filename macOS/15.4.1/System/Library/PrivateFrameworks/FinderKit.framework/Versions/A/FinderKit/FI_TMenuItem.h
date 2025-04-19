@interface FI_TMenuItem : NSMenuItem

@property (nonatomic) struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } actionToInvoke;
@property (nonatomic) struct function<bool (FI_TMenuItem *)> { struct __value_func<bool (FI_TMenuItem *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } validator;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (id)initWithTitle:(id)a0 keyEquivalent:(id)a1 actionToInvoke:(const void *)a2;
- (id)initWithTitle:(id)a0 keyEquivalent:(id)a1 actionToInvoke:(const void *)a2 validator:(const void *)a3;
- (void)invokeGlue:(id)a0;

@end
