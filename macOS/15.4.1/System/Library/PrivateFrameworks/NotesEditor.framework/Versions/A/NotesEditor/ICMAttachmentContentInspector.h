@class NSTextField, NSString, NSView, ICAttachment, NSTimer, NSPopUpButton, NSTextView, NSImageView, NSButton, NSBox;

@interface ICMAttachmentContentInspector : NSWindowController <NSWindowRestoration>

@property (weak, nonatomic) NSView *contentView;
@property (retain, nonatomic) NSString *overrideMediaURLString;
@property (weak, nonatomic) NSTextField *attachmentTitleLabel;
@property (weak, nonatomic) NSTextField *attachmentIdentifierLabel;
@property (weak, nonatomic) NSTextField *attachmentUserTitleLabel;
@property (weak, nonatomic) NSImageView *imageView;
@property (weak, nonatomic) NSImageView *noteTitleImageView;
@property (weak, nonatomic) NSTextField *noteTitleLabel;
@property (weak, nonatomic) NSImageView *noteIdentifierImageView;
@property (weak, nonatomic) NSTextField *noteIdentifierLabel;
@property (weak, nonatomic) NSTextField *utiLabel;
@property (weak, nonatomic) NSTextField *typeLabel;
@property (weak, nonatomic) NSTextField *rectLabel;
@property (weak, nonatomic) NSTextField *orientationLabel;
@property (weak, nonatomic) NSTextField *quadLabel;
@property (weak, nonatomic) NSTextView *summaryTextView;
@property (weak, nonatomic) NSBox *handwritingSummaryBox;
@property (weak, nonatomic) NSTextView *handwritingSummaryTextView;
@property (weak, nonatomic) NSBox *imageClassificationSummaryBox;
@property (weak, nonatomic) NSTextView *imageClassificationSummaryTextView;
@property (weak, nonatomic) NSBox *ocrSummaryBox;
@property (weak, nonatomic) NSTextView *ocrSummaryTextView;
@property (weak, nonatomic) NSTextView *additionalIndexableTextView;
@property (weak, nonatomic) NSTextField *parentTitleLabel;
@property (weak, nonatomic) NSTextField *parentIdLabel;
@property (weak, nonatomic) NSPopUpButton *subAttachmentsPopupButton;
@property (weak, nonatomic) NSButton *generatePKDrawingDataButton;
@property (retain, nonatomic) ICAttachment *tempAttachment;
@property (weak, nonatomic) NSTextField *urlLabel;
@property (weak, nonatomic) NSButton *urlButton;
@property (weak, nonatomic) NSButton *clearSummaryButton;
@property (weak, nonatomic) NSButton *clearHandwritingSummaryButton;
@property (weak, nonatomic) NSButton *clearImageClassificationSummaryButton;
@property (weak, nonatomic) NSButton *clearOcrSummaryButton;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) NSButton *inspectButton;
@property (nonatomic) BOOL regenerateMetadataOnClose;
@property (retain, nonatomic) ICAttachment *attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)restoreWindowWithIdentifier:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
+ (id)sharedAttachmentContentInspector;

- (void).cxx_destruct;
- (void)window:(id)a0 willEncodeRestorableState:(id)a1;
- (void)windowDidLoad;
- (void)windowWillClose:(id)a0;
- (void)urlButtonPressed:(id)a0;
- (void)savePKDrawingDataButtonPressed:(id)a0;
- (void)attachmentViewDidDropAttachment:(id)a0;
- (void)clearHandwritingSummaryButtonPressed:(id)a0;
- (void)clearImageClassificationSummaryButtonPressed:(id)a0;
- (void)clearOcrSummaryButtonPressed:(id)a0;
- (void)clearSummaryButtonPressed:(id)a0;
- (void)inspectParentButtonPressed:(id)a0;
- (void)setUpSubAttachmentsButtonForAttachment:(id)a0;
- (void)subAttachmentsPopupButtonDidChange:(id)a0;
- (void)updateViewsToMatchAttachment;

@end
