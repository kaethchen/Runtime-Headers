@class NSString;

@interface GameCenterUI.BaseCollectionViewCell : GameCenterUI.BaseView

@property (class, nonatomic, readonly) NSString *reuseIdentifier;
@property (class, nonatomic, readonly) BOOL wantsBackgroundViews;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ contentView;
@property (nonatomic, retain) void /* unknown type, empty encoding */ backgroundView;
@property (nonatomic, retain) void /* unknown type, empty encoding */ selectedBackgroundView;
@property (nonatomic) void /* unknown type, empty encoding */ isSelected;
@property (nonatomic) void /* unknown type, empty encoding */ highlightState;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
