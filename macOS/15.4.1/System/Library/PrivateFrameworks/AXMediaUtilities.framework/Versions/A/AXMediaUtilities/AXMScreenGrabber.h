@interface AXMScreenGrabber : NSObject

- (id)grabScreenWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1 options:(id)a2 metrics:(id)a3 error:(id *)a4;
- (void)recordScreenForDuration:(double)a0 completion:(id /* block */)a1;

@end
