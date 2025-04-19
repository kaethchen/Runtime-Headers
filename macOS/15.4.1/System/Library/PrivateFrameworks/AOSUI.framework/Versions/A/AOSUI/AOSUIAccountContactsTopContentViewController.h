@class NSString, NSTextField;

@interface AOSUIAccountContactsTopContentViewController : NSViewController

@property (weak) NSTextField *titleField;
@property (weak) NSTextField *detailField;
@property (copy) NSString *titleText;
@property (copy) NSString *detailText;

- (void).cxx_destruct;
- (id)nibName;
- (id)nibBundle;
- (void)viewDidLoad;

@end
