@class NSTextField;

@interface GKLeaderboardListHeaderView : NSUICollectionReusableView

@property (nonatomic) NSTextField *titleLabel;
@property (nonatomic) NSTextField *subtitleLabel;

+ (double)defaultHeight;

@end
