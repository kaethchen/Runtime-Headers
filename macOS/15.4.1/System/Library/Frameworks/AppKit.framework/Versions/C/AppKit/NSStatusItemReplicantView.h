@interface NSStatusItemReplicantView : NSView {
    id /* block */ drawBlock;
    id /* block */ shadowDrawBlock;
}

@property (copy) id /* block */ drawBlock;
@property (copy) id /* block */ shadowDrawBlock;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
