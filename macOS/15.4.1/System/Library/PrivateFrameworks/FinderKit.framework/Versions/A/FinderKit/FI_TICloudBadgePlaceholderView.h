@interface FI_TICloudBadgePlaceholderView : FI_TUpdateLayerView {
    BOOL _isMouseDown;
    struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _clickHandler;
}

@property (getter=isSelected) BOOL selected;
@property (getter=isDimmed) BOOL dimmed;
@property (getter=isActive) BOOL active;
@property int context;
@property (nonatomic) int badge;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)image;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)initCommon;
- (void)setClickHandler:(const void *)a0;

@end
