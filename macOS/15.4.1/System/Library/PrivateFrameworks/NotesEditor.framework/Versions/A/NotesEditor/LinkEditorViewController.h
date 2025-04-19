@class NSViewController, ICNote, NSView, ICNAEventReporter, NSString;

@interface LinkEditorViewController : NSViewController <ICLinkAcceleratorControllerDelegate, NSTokenFieldDelegate, NSTokenTextFieldDelegation> {
    void /* unknown type, empty encoding */ clickEventListener;
    void /* unknown type, empty encoding */ singleWidthSpace;
    void /* unknown type, empty encoding */ textSelection;
    void /* unknown type, empty encoding */ _viewModel;
    void /* unknown type, empty encoding */ linkTextChanged;
    void /* unknown type, empty encoding */ selectedNoteChange;
    void /* unknown type, empty encoding */ selectedURLChange;
    void /* unknown type, empty encoding */ selectedURLTextChange;
    void /* unknown type, empty encoding */ currentQueryString;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } lastSelectedRangeForAccelerator;
@property (nonatomic, readonly) BOOL languageHasSpaces;
@property (nonatomic, readonly) long long writingDirection;
@property (nonatomic, readonly) ICNote *note;
@property (nonatomic, readonly) NSViewController *acceleratorHostingViewController;
@property (nonatomic, readonly) NSView *acceleratorHostingView;
@property (nonatomic, readonly) ICNAEventReporter *eventReporter;
@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic, weak) void /* unknown type, empty encoding */ verticalStackView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ tokenField;
@property (nonatomic, weak) void /* unknown type, empty encoding */ nameTextField;
@property (nonatomic, weak) void /* unknown type, empty encoding */ useNoteTitleCheckbox;
@property (nonatomic, weak) void /* unknown type, empty encoding */ okButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ removeButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ noteTitleStackView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ addLinkStackView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ nameStackView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ windowTitleString;
@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ addApproach;
@property (nonatomic, retain) void /* unknown type, empty encoding */ linkAcceleratorController;
@property (nonatomic, copy) NSString *currentQueryString;

+ (void)dismissIn:(id)a0 completion:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (void)cancelOperation:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (id)tokenField:(id)a0 displayStringForRepresentedObject:(id)a1;
- (BOOL)tokenField:(id)a0 hasMenuForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 setUpTokenAttachmentCell:(id)a1 forRepresentedObject:(id)a2;
- (id)tokenField:(id)a0 shouldAddObjects:(id)a1 atIndex:(long long)a2;
- (unsigned long long)tokenField:(id)a0 styleForRepresentedObject:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayout;
- (void)doneAction;
- (void)setupObservers;
- (void)updateVisibility;
- (void)cancelButtonAction:(id)a0;
- (void)cancelAction:(id)a0;
- (void)insertAndDismissWithCompletion:(id /* block */)a0;
- (void)okButtonAction:(id)a0;
- (void)acceleratorOriginNeedsUpdate;
- (void)didSelectNoteSuggestionWithIdentifier:(id)a0 title:(id)a1;
- (void)handleClickWithEvent:(id)a0;
- (void)linkTitleChanged:(id)a0;
- (void)noteDecryptedStatusDidChange;
- (void)removeButtonAction:(id)a0;
- (void)removeLink;
- (void)selectedSuggestionWithSelection:(id)a0;
- (void)selectedURLWithSelection:(id)a0;
- (void)useTitleCheckboxAction:(id)a0;
- (void)validateSelection;

@end
