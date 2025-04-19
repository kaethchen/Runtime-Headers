@interface FI_TTitleViewBadge : FI_TUpdateLayerView

@property (getter=isDimmed) BOOL isClicked;
@property (nonatomic) struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } clickHandler;
@property (nonatomic) struct function<NSImage *(CGRect, bool, bool, bool, bool)> { struct __value_func<NSImage *(CGRect, bool, bool, bool, bool)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } getImage;
@property (nonatomic) struct function<bool ()> { struct __value_func<bool ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } stateMatcher;
@property (nonatomic) struct function<CGSize (NSFont *)> { struct __value_func<CGSize (NSFont *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } imageSizeConfigurator;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)initCommon;

@end
