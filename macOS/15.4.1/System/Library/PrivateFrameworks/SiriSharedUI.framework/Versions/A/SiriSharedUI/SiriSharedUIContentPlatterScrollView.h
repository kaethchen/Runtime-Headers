@protocol SiriSharedUIContentPlatterScrollViewDelegate, SiriSharedUIContentViewSizeProviding;

@interface SiriSharedUIContentPlatterScrollView : SiriSharedUIStandardScrollView

@property (nonatomic) BOOL adjustContentSizeOnNextLayout;
@property (nonatomic, getter=isAutomaticScrollingEnabled) BOOL automaticScrollingEnabled;
@property (nonatomic) BOOL isInAmbientInteractivity;
@property (weak, nonatomic) id<SiriSharedUIContentPlatterScrollViewDelegate> platterDelegate;
@property (weak, nonatomic) id<SiriSharedUIContentViewSizeProviding> contentViewSizeProvider;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_sharedInit;
- (id)_parentScrollView;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;

@end
