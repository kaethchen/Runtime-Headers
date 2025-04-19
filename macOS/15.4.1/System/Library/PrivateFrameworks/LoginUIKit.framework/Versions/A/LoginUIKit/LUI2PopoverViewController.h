@interface LUI2PopoverViewController : LUI2ViewController

- (void)hide;
- (void)presentUsingViewController:(id)a0 asPopoverRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 preferredEdge:(unsigned long long)a3 behavior:(long long)a4;
- (void)shake;

@end
