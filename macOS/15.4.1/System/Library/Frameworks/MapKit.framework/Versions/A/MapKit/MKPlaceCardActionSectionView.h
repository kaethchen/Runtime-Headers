@class NSButton, MKPlaceCardActionItem, NSLayoutConstraint;
@protocol MKPlaceCardActionSectionViewDelegate;

@interface MKPlaceCardActionSectionView : MKPlaceSectionRowView {
    BOOL _useMarginLayout;
    BOOL _usingSmallFonts;
    NSLayoutConstraint *_heightAnchor;
    NSLayoutConstraint *_leftButtonYConstraint;
    NSLayoutConstraint *_rightButtonYConstraint;
    NSLayoutConstraint *_platterSizeConstraint;
}

@property (retain, nonatomic) MKPlaceCardActionItem *leftItem;
@property (retain, nonatomic) MKPlaceCardActionItem *rightItem;
@property (nonatomic) BOOL singleItemIsFullWidth;
@property (retain, nonatomic) NSButton *leftButton;
@property (retain, nonatomic) NSButton *rightButton;
@property (weak, nonatomic) id<MKPlaceCardActionSectionViewDelegate> delegate;

+ (id)_font:(BOOL)a0;
+ (void)_setButtonString:(id)a0 forActionItem:(id)a1 isLeftItem:(BOOL)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)currentLeftItem;
- (void)_contentSizeDidChange;
- (void)_leftButtonIsPressed:(id)a0;
- (id)_makePlaceActionButtonWithActionItem:(id)a0 isLeftItem:(BOOL)a1 useSmallFonts:(BOOL)a2;
- (void)_rightButtonIsPressed:(id)a0;
- (void)_setUpViewWithButtons;
- (id)glyphFont;
- (id)initWithLeftActionItem:(id)a0 rightActionItem:(id)a1 useSmallFonts:(BOOL)a2 singleItemIsFullWidth:(BOOL)a3;
- (id)initWithLeftActionItem:(id)a0 rightActionItem:(id)a1 useSmallFonts:(BOOL)a2 singleItemIsFullWidth:(BOOL)a3 useMarginLayout:(BOOL)a4;
- (void)setTopHairlineHidden:(BOOL)a0;

@end
