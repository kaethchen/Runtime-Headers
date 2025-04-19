@class NSTextField, CNContact, NSString, ABCardViewStyleProvider;

@interface CNContactSharingEnabledWarningViewController : NSViewController <CNContactCardWidget>

@property (readonly, nonatomic) NSTextField *warningLabel;
@property (readonly, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSString *warningMessage;
@property (retain, nonatomic) ABCardViewStyleProvider *styleProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelWithText:(id)a0;
+ (id)lockGlyphAttachmentText;
+ (id)whitespaceText;

- (id)init;
- (void).cxx_destruct;
- (id)attributedStringValue;
- (void)loadView;
- (void)viewDidLoad;
- (void)setContact:(id)a0;
- (id)paragraphStyle;
- (double)desiredHeight;
- (void)setupWarningLabel;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (void)updateWarningLabel;
- (id)warningMessageText;

@end
