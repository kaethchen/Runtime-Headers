@class NSString;

@interface ABTrackingArea : NSTrackingArea {
    NSString *_ab_crashMessage;
}

- (void).cxx_destruct;
- (void)_mouseEntered:(id)a0;
- (void)_mouseExited:(id)a0;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1 owner:(id)a2 userInfo:(id)a3;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1 owner:(id)a2 userInfo:(id)a3 name:(id)a4;

@end
