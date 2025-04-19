@class NSTextField;

@interface CSKMessageExtendedHeaderView : CSKMessageHeaderView

@property (weak, nonatomic) NSTextField *activityIDTextField;
@property (weak, nonatomic) NSTextField *threadIDTextField;
@property (weak, nonatomic) NSTextField *PIDTextField;

- (void).cxx_destruct;
- (void)updateViewWithMessage:(id)a0;

@end
