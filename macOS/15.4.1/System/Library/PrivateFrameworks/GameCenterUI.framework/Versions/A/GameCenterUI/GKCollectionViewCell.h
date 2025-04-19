@class GKStaticRenderContentView, NSView, NSArray, CALayer, GKHairlineView, NSLayoutConstraint;

@interface GKCollectionViewCell : NSUICollectionViewCell {
    BOOL _shouldDisplaySwipeToEditAccessories;
    double _contentOriginX;
}

@property (retain, nonatomic) NSView *staticContentView;
@property (retain, nonatomic) GKStaticRenderContentView *contentRenderView;
@property (retain, nonatomic) CALayer *leftGradientMask;
@property (nonatomic) BOOL doesAbutLeftEdge;
@property (retain, nonatomic) GKHairlineView *topHairline;
@property (retain, nonatomic) GKHairlineView *bottomHairline;
@property (retain, nonatomic) NSArray *editActionsConstraints;
@property (retain, nonatomic) NSArray *hairlineConstraints;
@property (retain, nonatomic) NSLayoutConstraint *contentLeftConstraint;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;
@property (retain, nonatomic) id representedItem;
@property (readonly, nonatomic) NSView *interactiveContentView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRectForText;
@property (retain, nonatomic) NSArray *editActions;
@property (nonatomic) double editingContentOriginX;

+ (void)registerCellClassesWithCollectionView:(id)a0;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setNeedsDisplay;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)configureContextMenu:(id)a0 indexPath:(id)a1;
- (void)applyGradientMaskIfNeeded;
- (void)didUpdateModel;
- (void)prepareHairlineConstraintsIfNeeded;
- (void)resetEditingContentOrigin;
- (void)setShouldDisplaySwipeToEditAccessories:(BOOL)a0;
- (void)shutActionPaneAnimated:(BOOL)a0 completion:(id /* block */)a1;

@end
