@interface GameCenterUI.LargeTitleHeaderView : NSView <GKPlayerAvatarViewDelegate> {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ playerAvatar;
    void /* unknown type, empty encoding */ accessoryAction;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didSelectPlayerAvatarView:(id)a0;

@end
