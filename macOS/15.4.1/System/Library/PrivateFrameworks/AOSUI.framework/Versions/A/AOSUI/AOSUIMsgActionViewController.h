@class NSButton, NSString, NSTextField;

@interface AOSUIMsgActionViewController : AOSUISpyglassBaseViewController

@property (retain, nonatomic) NSTextField *messageTitle;
@property (retain, nonatomic) NSTextField *messageDescription;
@property (retain, nonatomic) NSButton *actionTitle;
@property (copy) NSString *localizedTitle;
@property (copy) NSString *localizedDescription;
@property (copy) NSString *localizedActionTitle;
@property (copy) id /* block */ actionHandler;

- (void).cxx_destruct;
- (id)nibName;
- (id)nibBundle;
- (void)viewDidLoad;
- (id)initWithAccountManager:(id)a0;
- (void)helpPressed:(id)a0;
- (void)actionButtonPressed:(id)a0;
- (void)_setGenericStrings;

@end
