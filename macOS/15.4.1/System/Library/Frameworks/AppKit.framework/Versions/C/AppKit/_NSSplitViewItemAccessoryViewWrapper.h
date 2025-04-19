@class NSString, NSView, NSTitlebarSeparatorView, NSVisualEffectView, NSLayoutConstraint;

@interface _NSSplitViewItemAccessoryViewWrapper : NSView <NSSplitViewItemAccessoryView> {
    NSVisualEffectView *_effectView;
    NSView *_contentView;
    NSTitlebarSeparatorView *_titlebarSeparator;
    NSLayoutConstraint *_leadingSeparatorConstraint;
    NSLayoutConstraint *_trailingSeparatorConstraint;
    unsigned char _alignmentSatisfied : 1;
}

@property (weak) NSView *contentView;
@property (copy) NSString *groupName;
@property long long material;
@property BOOL alignmentSatisfied;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsets;
- (void)_updateSeparatorState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;

@end
