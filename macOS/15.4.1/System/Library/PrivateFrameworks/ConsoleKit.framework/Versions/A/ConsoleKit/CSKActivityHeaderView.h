@class NSTextField, CSKBadgeLabel, CSKExtendedTextField;

@interface CSKActivityHeaderView : CSKHeaderView

@property (weak, nonatomic) CSKExtendedTextField *processTextField;
@property (weak, nonatomic) NSTextField *activityIDTextField;
@property (weak, nonatomic) NSTextField *parentActivityIDTextField;
@property (weak, nonatomic) NSTextField *timeTextField;
@property (weak, nonatomic) NSTextField *volatileBadgeLabel;
@property (weak, nonatomic) CSKBadgeLabel *detachedBadgeLabel;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)updateViewWithActivity:(id)a0;

@end
