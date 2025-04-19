@class NSTextField, PDFDocument, NSString, NSSecureTextField, NSButton;

@interface PDFEncryptionOptionsEditor : NSViewController {
    NSString *_userPassword;
    NSString *_ownerPassword;
    BOOL _viewHasAppeared;
    BOOL _savedRequiresPasswordToOpen;
    NSString *_savedUserPassword;
    NSString *_savedOwnerPassword;
    unsigned long long _savedAccessPermissions;
}

@property (nonatomic) BOOL requiresPasswordToOpen;
@property (getter=isUserPasswordValid) BOOL userPasswordValid;
@property (getter=isOwnerPasswordValid) BOOL ownerPasswordValid;
@property BOOL allowsPrinting;
@property BOOL allowsCopying;
@property BOOL allowsDocumentChanges;
@property BOOL allowsDocumentAssembly;
@property BOOL allowsContentAccessibility;
@property BOOL allowsCommenting;
@property BOOL allowsFormFieldEntry;
@property (retain) NSSecureTextField *userPasswordField1;
@property (retain) NSSecureTextField *userPasswordField2;
@property (retain) NSTextField *userPasswordErrorMsg;
@property (retain) NSSecureTextField *ownerPasswordField1;
@property (retain) NSSecureTextField *ownerPasswordField2;
@property (retain) NSTextField *ownerPasswordErrorMsg;
@property (retain) NSButton *resetButton;
@property BOOL showsOKCancelButtons;
@property (retain, nonatomic) PDFDocument *document;
@property (copy, nonatomic) NSString *userPassword;
@property (copy, nonatomic) NSString *ownerPassword;
@property (nonatomic) unsigned long long accessPermissions;

- (id)init;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)_ownerPasswordChanged:(id)a0;
- (void)_userPasswordChanged:(id)a0;
- (void)applyButtonClicked:(id)a0;
- (void)cancelButtonClicked:(id)a0;
- (void)requirePasswordToOpenChecked:(id)a0;
- (void)resetButtonClicked:(id)a0;

@end
