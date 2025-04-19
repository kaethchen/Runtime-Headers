@class NSArray;

@interface GameCenterUI.ActivityFeedAddFriendSuggestionView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ smallPlayerCards;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ scrollView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ stackView;
@property (nonatomic, copy) NSArray *smallPlayerCards;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measureToFit:(struct CGSize { double x0; double x1; })a0 with:(id)a1;

@end
