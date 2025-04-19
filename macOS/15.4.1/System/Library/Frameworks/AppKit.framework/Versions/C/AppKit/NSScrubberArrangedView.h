@interface NSScrubberArrangedView : NSView {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _flagLock;
    unsigned char _selected : 1;
    unsigned char _highlighted : 1;
}

@property (getter=isSelected) BOOL selected;
@property (getter=isHighlighted) BOOL highlighted;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (id)initWithCoder:(id)a0;
- (void)_arrangedViewCommonInit;
- (id)_preferredAppearance;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
