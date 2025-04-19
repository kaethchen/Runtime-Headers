@class NSTextField, NSString, NSWindow, NSStackView, PDFDocument, NSLayoutConstraint, NSImageView, NSButton, NSBox;

@interface PDFEncryptionOptionsViewer : NSViewController {
    id _observerCookie;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _deferredContentEdgeInsets;
    BOOL _haveDeferredContentEdgeInsets;
}

@property (retain) NSLayoutConstraint *stackViewLeadingConstraint;
@property (retain) NSLayoutConstraint *stackViewTrailingConstraint;
@property (retain) NSLayoutConstraint *stackViewTopConstraint;
@property (retain) NSLayoutConstraint *stackViewBottomConstraint;
@property (retain) NSImageView *allowsPrintingIndicator;
@property (retain) NSImageView *allowsCopyingIndicator;
@property (retain) NSImageView *allowsDocumentChangesIndicator;
@property (retain) NSImageView *allowsDocumentAssemblyIndicator;
@property (retain) NSImageView *allowsCommentingIndicator;
@property (retain) NSImageView *allowsContentAccessibilityIndicator;
@property (retain) NSImageView *allowsFormFieldEntryIndicator;
@property (retain) NSTextField *encryptionStatusText;
@property (retain) NSBox *unlockAsOwnerDivider;
@property (retain) NSStackView *unlockAsOwnerStackView;
@property (retain) NSButton *unlockAsOwnerButton;
@property (copy) NSString *ownerPassword;
@property (weak, nonatomic) PDFDocument *document;
@property (nonatomic) unsigned long long controlSize;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } contentEdgeInsets;
@property (weak) NSWindow *windowForSheet;
@property (copy) id /* block */ performEditBlock;

+ (void)initialize;
+ (id)_imageFromISTypeCode:(unsigned int)a0;
+ (void)_recursivelySetControlSize:(unsigned long long)a0 onView:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_applyControlSize;
- (void)_updateUnboundControls;
- (void)editButtonClicked:(id)a0;
- (void)unlockButtonClicked:(id)a0;

@end
