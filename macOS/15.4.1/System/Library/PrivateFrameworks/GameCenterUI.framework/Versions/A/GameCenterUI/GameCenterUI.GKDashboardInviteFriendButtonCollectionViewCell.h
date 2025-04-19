@interface GameCenterUI.GKDashboardInviteFriendButtonCollectionViewCell : NSUICollectionViewCell {
    void /* unknown type, empty encoding */ $__lazy_storage_$_button;
    void /* unknown type, empty encoding */ clickHandler;
    void /* unknown type, empty encoding */ separator;
}

@property (nonatomic, copy) id /* block */ clickHandler;

+ (struct CGSize { double x0; double x1; })sizeWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleButtonClick;

@end
