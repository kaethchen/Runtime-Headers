@class NSImageView, NSTextField, NSLayoutConstraint, NSColor;

@interface GKDashboardTurnCell : GKDashboardPlayerCell

@property (nonatomic) NSTextField *dateLabel;
@property (nonatomic) NSTextField *turnLabel;
@property (nonatomic) NSImageView *actionIndicatorView;
@property (nonatomic) NSLayoutConstraint *dateToNameConstraint;
@property (nonatomic) NSLayoutConstraint *turnToNameConstraint;
@property (retain, nonatomic) NSColor *dateColor;
@property (retain, nonatomic) NSColor *turnColor;
@property (nonatomic) double dateToNameConstant;
@property (nonatomic) double turnToNameConstant;
@property (nonatomic) long long displayIndex;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (struct CGSize { double x0; double x1; })defaultSizeForTurnDetail;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)configureForMatch:(id)a0;
- (void)configureForParticipant:(id)a0 inMatch:(id)a1;
- (void)setOnDarkBackground:(BOOL)a0;
- (BOOL)wantsLocalPlayerAction:(id)a0;

@end
