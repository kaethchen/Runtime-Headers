@interface QLSplineInspectorView : NSView {
    struct function<void (QLSplineInspectorView *, CGRect)> { struct __value_func<void (QLSplineInspectorView *, CGRect)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _draw;
    struct function<void (QLSplineInspectorView *, CGPoint)> { struct __value_func<void (QLSplineInspectorView *, CGPoint)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _mouseDown;
    struct function<void (QLSplineInspectorView *, CGPoint)> { struct __value_func<void (QLSplineInspectorView *, CGPoint)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _mouseDragged;
}

@property (nonatomic) double scale;
@property (nonatomic) long long trackingKnotIndex;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;

@end
