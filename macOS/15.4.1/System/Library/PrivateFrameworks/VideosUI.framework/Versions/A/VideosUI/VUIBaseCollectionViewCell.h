@class NSString, NSView, CALayer, NSColor;
@protocol VUICollectionViewCellInteractor;

@interface VUIBaseCollectionViewCell : NSCollectionViewItem <VUICollectionCellEventIntercepting>

@property (nonatomic, getter=isBeingDisplayed) BOOL beingDisplayed;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *highlightedBackgroundColor;
@property (nonatomic) BOOL shouldAppearSelected;
@property (readonly, nonatomic) NSView *vuiContentView;
@property (readonly, nonatomic) NSView *vuiCellView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } vuiBounds;
@property (readonly, nonatomic) CALayer *vuiLayer;
@property (weak, nonatomic) id<VUICollectionViewCellInteractor> vuiCollectionViewCellInteractor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)willBeDisplayed;
- (void)loadView;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)setHighlightState:(long long)a0;
- (void)viewDidLayout;
- (void)didSelect;
- (void)didEndDisplaying;
- (BOOL)vui_highlighted;
- (BOOL)vui_addSubview:(id)a0 oldView:(id)a1;
- (void)vui_cellDidEndDisplaying;
- (void)vui_cellDidSelect;
- (void)vui_cellWillBeDisplayed;
- (void)vui_layoutIfNeeded;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;
- (BOOL)vui_selected;
- (void)vui_setHighlighted:(BOOL)a0;
- (void)vui_setNeedsLayout;
- (void)vui_setSelected:(BOOL)a0;
- (void)vui_setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(void *)a2;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
