@class NSView;

@interface NCCustomAlertBackgroundView : NSView {
    NSView *_materialView;
    NSView *_contentView;
}

@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } shadowInset;
@property (nonatomic) BOOL dark;
@property (readonly) NSView *contentView;

+ (id)createCardView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)effectiveAppearance;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createMaterialView;

@end
