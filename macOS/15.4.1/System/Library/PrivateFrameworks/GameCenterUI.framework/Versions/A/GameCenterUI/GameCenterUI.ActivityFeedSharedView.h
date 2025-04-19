@class NSDate;

@interface GameCenterUI.ActivityFeedSharedView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ componentData;
    void /* unknown type, empty encoding */ linkClickedTimestamp;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ playerGroupView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ playerGroupSubartworkView;
@property (nonatomic, copy) NSDate *linkClickedTimestamp;
@property (nonatomic) void /* unknown type, empty encoding */ linkClickInterval;

+ (id)createLaunchGameLinkWith:(id)a0 linkPosition:(long long)a1;
+ (id)createShowAchievementLinkWith:(id)a0 linkPosition:(long long)a1;
+ (id)createShowLeaderboardLinkWith:(id)a0 linkPosition:(long long)a1;
+ (id)createShowPlayerProfileLinkWith:(id)a0 linkPosition:(long long)a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)clickedOnLink:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measureToFit:(struct CGSize { double x0; double x1; })a0 with:(id)a1;

@end
