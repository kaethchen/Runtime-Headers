@class IASMagicPocketView;

@interface IASMagicPocketScrollView : NSScrollView

@property (retain) IASMagicPocketView *topPocketView;
@property (retain) IASMagicPocketView *bottomPocketView;
@property (retain) IASMagicPocketView *leftPocketView;
@property (retain) IASMagicPocketView *rightPocketView;
@property BOOL moreContentLeft;
@property BOOL moreContentRight;
@property BOOL moreContentUp;
@property BOOL moreContentDown;
@property (retain) id contentViewBoundsChangeNotificationToken;
@property (retain) id documentViewFrameChangeNotificationToken;
@property BOOL handleBoundsOrFrameChangePending;
@property (nonatomic) BOOL showsPocketOnBottom;
@property (nonatomic) BOOL showsPocketOnTop;
@property (nonatomic) BOOL showsPocketOnLeft;
@property (nonatomic) BOOL showsPocketOnRight;
@property (nonatomic) BOOL pocketsAreDynamic;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tile;
- (void)viewDidMoveToWindow;
- (void)_defferedHandleBoundsOrFrameChanged;
- (void)_handleBoundsOrFrameChanged;
- (void)_installNotificationObserversIfNecessary;
- (void)animatePocket:(id)a0 in:(BOOL)a1;
- (void)animateScrollToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)removeContentObserversIfNeeded;
- (void)setPocket:(id)a0 toState:(BOOL)a1;

@end
