@class NSString;

@interface GameCenterUI.GKDashboardShowMoreFooterView : GameCenterUI.CollectionReusableView {
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ actionHandler;
    void /* unknown type, empty encoding */ showMoreText;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, copy) NSString *showMoreText;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)didClick:(id)a0;

@end
