@class NSTextField, SSContactsTokenField, NSString, NSProgressIndicator, NSButton;
@protocol SSConnectionPromptObserver;

@interface SSConnectionAddressViewController : NSViewController <NSTextFieldDelegate>

@property id<SSConnectionPromptObserver> promptObserver;
@property (retain) SSContactsTokenField *mAddressField;
@property (retain) NSButton *mConnectButton;
@property (retain) NSProgressIndicator *mConnectingProgressSpinner;
@property (retain) NSTextField *mConnectingText;
@property (copy) NSString *addressString;
@property BOOL isConnecting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)cancelClicked:(id)a0;
- (void)connectClicked:(id)a0;
- (void)adjustViewHeightBy:(double)a0;

@end
