@class ICTextFindingResult, ICMacBaseTextView, NSImage;

@interface ICPaperDocumentTextAttachmentView : NSView <ICTextPreviewProvider, NSSharingServiceDelegate, NSMenuItemValidation, ICAttachmentViewOpening> {
    void /* unknown type, empty encoding */ attachmentChangeNotifications;
    void /* unknown type, empty encoding */ task;
    void /* unknown type, empty encoding */ liveStreamMessenger;
    void /* unknown type, empty encoding */ participantDetailsDataSource;
    void /* unknown type, empty encoding */ showParticipantCursors;
    void /* unknown type, empty encoding */ textualContextProvider;
    void /* unknown type, empty encoding */ viewProvider;
    void /* unknown type, empty encoding */ paperViewController;
    void /* unknown type, empty encoding */ paperIdentifier;
    void /* unknown type, empty encoding */ textContainer;
    void /* unknown type, empty encoding */ titleObserver;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ paperContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_paperViewControllerDelegate;
    void /* unknown type, empty encoding */ markupService;
    void /* unknown type, empty encoding */ idleTimeInterval;
    void /* unknown type, empty encoding */ isRevertingChanges;
    void /* unknown type, empty encoding */ isUpgradingLegacyAttachment;
    void /* unknown type, empty encoding */ $__lazy_storage_$_paperDidSaveSelectorDelayer;
    void /* unknown type, empty encoding */ markupViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_smallBrickView;
    void /* unknown type, empty encoding */ displayMode;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ textAttachment;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)unload;
- (void)copy:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)resetCursorRects;
- (void)share:(id)a0;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sharingService:(id)a0 sourceFrameOnScreenForShareItem:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (BOOL)validateMenuItem:(id)a0;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)openAttachment:(id)a0;
- (void)quickLook:(id)a0;
- (void)deleteAttachment:(id)a0;
- (void)markup:(id)a0;
- (void)beginQuickLook:(id)a0;
- (void)changeSize:(id)a0;
- (void)dismissMarkup:(id)a0;
- (void)imageForTextPreviewUsingFindingResult:(ICTextFindingResult *)a0 inTextView:(ICMacBaseTextView *)a1 completion:(void (^)(NSImage *))a2;
- (void)openAttachment;
- (void)paperDidSaveDidQuiesce;
- (void)renameAttachment:(id)a0;
- (void)toggleThumbnails:(id)a0;

@end
