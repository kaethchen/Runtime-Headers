@class NSTextField, NSMutableDictionary, NSMutableArray, NSString, GKTokenField, NSButton, NSLayoutConstraint;
@protocol GKComposeRecipientViewDelegate;

@interface GKComposeRecipientView : NSView <GKTokenFieldDelegate, NSTokenFieldCellDelegate, NSTokenTextFieldDelegation, NSTokenAttachmentDelegate>

@property (weak) GKTokenField *tokenField;
@property (weak) NSTextField *label;
@property (weak) NSButton *addRecipientButton;
@property (weak) NSLayoutConstraint *tokenFieldHeightConstraint;
@property (retain, nonatomic) NSMutableDictionary *tokenMap;
@property (retain, nonatomic) NSMutableArray *tokens;
@property (weak, nonatomic) id<GKComposeRecipientViewDelegate> delegate;
@property (nonatomic) BOOL deferSizeChangeNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)create;

- (void).cxx_destruct;
- (BOOL)control:(id)a0 textShouldBeginEditing:(id)a1;
- (void)awakeFromNib;
- (BOOL)becomeFirstResponder;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)textField:(id)a0 textView:(id)a1 shouldSelectCandidateAtIndex:(unsigned long long)a2;
- (id)tokenField:(id)a0 displayStringForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 setUpTokenAttachmentCell:(id)a1 forRepresentedObject:(id)a2;
- (id)tokenField:(id)a0 shouldAddObjects:(id)a1 atIndex:(unsigned long long)a2;
- (void)setPlaceholderText:(id)a0;
- (void)addRecipient:(id)a0;
- (void)removeRecipient:(id)a0;
- (void)checkSizeChanged;
- (void)didBecomeFirstResponder;
- (void)didResignFirstResponder;
- (void)highlightRecipients:(id)a0;
- (void)requestToAdd:(id)a0;

@end
