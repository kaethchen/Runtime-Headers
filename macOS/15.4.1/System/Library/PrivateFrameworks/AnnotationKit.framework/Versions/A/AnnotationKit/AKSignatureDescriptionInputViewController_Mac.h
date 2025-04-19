@class NSButton, NSString, NSTextField;
@protocol AKSignatureCustomDescriptionDelegate;

@interface AKSignatureDescriptionInputViewController_Mac : NSViewController

@property (retain) NSButton *doneButton;
@property (retain) NSTextField *inputTextField;
@property (copy) NSString *customDescription;
@property (weak) id<AKSignatureCustomDescriptionDelegate> customDescriptionDelegate;

- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (BOOL)control:(id)a0 textShouldBeginEditing:(id)a1;
- (id)nibName;
- (void)done:(id)a0;
- (id)nibBundle;
- (void)viewDidLoad;
- (id)initWithDescription:(id)a0;

@end
