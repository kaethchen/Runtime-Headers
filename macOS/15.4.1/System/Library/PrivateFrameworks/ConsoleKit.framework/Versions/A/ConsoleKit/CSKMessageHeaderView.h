@class NSTextField, CSKBadgeLabel, CSKExtendedTextField;

@interface CSKMessageHeaderView : CSKHeaderView

@property (weak, nonatomic) CSKExtendedTextField *processTextField;
@property (weak, nonatomic) NSTextField *subsystemTextField;
@property (weak, nonatomic) NSTextField *categoryTextField;
@property (weak, nonatomic) NSTextField *timeTextField;
@property (weak, nonatomic) NSTextField *volatileBadgeLabel;
@property (weak, nonatomic) CSKBadgeLabel *typeBadgeLabel;

- (void).cxx_destruct;
- (void)updateViewWithMessage:(id)a0;

@end
