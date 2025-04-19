@class NSString;

@interface GameCenterUI.AchievementCard : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ backgroundEffectsGroup;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ tapHandler;
}

@property (class, nonatomic, readonly) NSString *titleTextStyle;
@property (class, nonatomic, readonly) NSString *subtitleTextStyle;
@property (class, nonatomic, readonly) long long maxFriendAvatars;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ backgroundView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ gradient;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ border;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ badge;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ subtitleLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ friendsWhoAchievedThis;
@property (nonatomic) void /* unknown type, empty encoding */ alwaysShowShadow;
@property (nonatomic, copy) NSString *backgroundEffectsGroup;
@property (nonatomic, retain) void /* unknown type, empty encoding */ hostView;
@property (nonatomic, copy) id /* block */ tapHandler;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)menuForEvent:(id)a0;
- (void)setContentHidden:(BOOL)a0;
- (void)didTap;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)configureFriendsWhoHaveThisView:(id)a0;

@end
