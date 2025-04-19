@class NSMutableArray;

@interface AVMovableView : NSView {
    NSMutableArray *_autoresizingMaskLayoutConstraints;
    unsigned long long _autoresizingMask;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialViewFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialSuperviewBounds;
}

@property (getter=isMovable) BOOL movable;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)restoreStateWithCoder:(id)a0;
- (void)addAutoresizingMaskLayoutConstraints;
- (void)removeAutoresizingMaskLayoutConstraints;
- (void)setAutoresizingMask:(unsigned long long)a0 viewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 superviewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
