@class NSArray;

@interface GameCenterUI.ActivityFeedAchievementView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ stackAchievementCards;
    void /* unknown type, empty encoding */ didHideOutOfBoundsCard;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ contentBackgroundView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ sharedView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ achievementCardContainer;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ achievementConfettiView;
@property (nonatomic, readonly) NSArray *stackAchievementCards;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
