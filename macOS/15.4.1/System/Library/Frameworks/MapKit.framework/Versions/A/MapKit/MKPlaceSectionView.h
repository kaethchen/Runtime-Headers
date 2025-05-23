@class NSArray, MKViewWithHairline, MKPlaceSectionItemView;
@protocol MKPlaceSectionViewDelegate;

@interface MKPlaceSectionView : _MKStackView {
    unsigned long long _trackingSelectForRow;
    MKViewWithHairline *_hairLineView;
}

@property (weak, nonatomic) id<MKPlaceSectionViewDelegate> delegate;
@property (retain, nonatomic) MKPlaceSectionItemView *headerView;
@property (copy, nonatomic) NSArray *rowViews;
@property (retain, nonatomic) MKPlaceSectionItemView *footerView;
@property (nonatomic) BOOL highlightsTouches;
@property (nonatomic) BOOL showsBottomHairline;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)_mapkit_layoutMarginsDidChange;
- (void)_tappedRow:(id)a0 at:(unsigned long long)a1;
- (void)_touchesBeganForRow:(id)a0 at:(unsigned long long)a1;
- (void)_touchesCancelledForRow:(id)a0 at:(unsigned long long)a1;
- (void)_updateHairlineInsets;
- (void)_updateViewsAnimated:(BOOL)a0;
- (void)_updateViewsAnimated:(BOOL)a0 isNeedLayout:(BOOL)a1;
- (unsigned long long)indexOfRowAt:(struct CGPoint { double x0; double x1; })a0;
- (void)infoCardThemeChanged;
- (id)rowAt:(struct CGPoint { double x0; double x1; })a0;
- (void)setFooterView:(id)a0 animated:(BOOL)a1;
- (void)setHeaderView:(id)a0 animated:(BOOL)a1;
- (void)setRowViews:(id)a0 animated:(BOOL)a1;
- (void)setRowViews:(id)a0 animated:(BOOL)a1 isNeedLayout:(BOOL)a2;

@end
