@class NSString;

@interface GameCenterUI.GKContentUnavailableView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ messageLabel;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ buttonTitle;
    void /* unknown type, empty encoding */ buttonAction;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, copy) id /* block */ buttonAction;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)dispatchAction;

@end
