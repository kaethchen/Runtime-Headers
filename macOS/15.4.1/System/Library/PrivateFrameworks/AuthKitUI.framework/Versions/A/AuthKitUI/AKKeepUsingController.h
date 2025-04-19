@class NSString, NSButton, NSTextField;

@interface AKKeepUsingController : NSViewController

@property (retain, nonatomic) NSString *existingAccount;
@property (nonatomic) NSTextField *titleLabel;
@property (nonatomic) NSTextField *bodyLabel;
@property (nonatomic) NSButton *useOtherAccountButton;
@property (nonatomic) NSButton *useExistingAccountButton;
@property (copy, nonatomic) id /* block */ useExistingAction;
@property (copy, nonatomic) id /* block */ useOtherAction;
@property (nonatomic) long long serviceType;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)keepUsingExistingAccountbuttonPressed:(id)a0;
- (void)useOtherAccountButtonPressed:(id)a0;

@end
