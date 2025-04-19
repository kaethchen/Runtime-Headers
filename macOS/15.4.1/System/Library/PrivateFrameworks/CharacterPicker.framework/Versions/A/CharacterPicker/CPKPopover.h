@class NSUUID, CPKPrivateStorage;
@protocol CPKTargetProvider, CPKPopoverDelegate;

@interface CPKPopover : NSPopover

@property (nonatomic) long long reason;
@property (nonatomic) BOOL notifyDelegatesOnChangeEvents;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) CPKPrivateStorage *privateStorage;
@property (weak) id<CPKPopoverDelegate> CPKDelegate;
@property (weak) id<CPKTargetProvider> CPKTargetProvider;
@property (retain) id CPKUserInfo;

+ (id)characterPickerToolbarItem:(id)a0;
+ (id)logArrayForLogType:(id)a0;
+ (void)logCurrentTimeWithLabel:(id)a0 forLogType:(id)a1;
+ (id)performanceLogWithBaseTime:(double)a0;
+ (id)transformWindowButtonToExpand:(BOOL)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancelOperation:(id)a0;
- (id)detachableWindowForPopover:(id)a0;
- (id)initWithDataSource:(id)a0;
- (void)makeKeyWindow;
- (BOOL)popoverShouldDetach:(id)a0;
- (id)searchString;
- (void)setDataSource:(id)a0;
- (void)showRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 preferredEdge:(unsigned long long)a2;
- (void)activateApplication;
- (void)closeWithReason:(long long)a0;
- (void)_showPopoverByCallingSuperclass;
- (void)transformWindow;
- (BOOL)_isValidTarget:(id)a0;
- (id)_actionTarget;
- (void)_characterViewerDidOpen:(id)a0;
- (void)_characterViewerWillOpen:(id)a0;
- (void)_emojiBarDidDismiss:(id)a0;
- (void)_externalCharacterViewerWindowOpened:(id)a0;
- (void)_externalCharacterViewerWindowRevertedToPicker:(id)a0;
- (void)_insertSelectedCharacter:(id)a0 toTarget:(id)a1;
- (void)_popoverDidClose:(id)a0;
- (void)_popoverDidOpen:(id)a0;
- (void)_popoverWillClose:(id)a0;
- (void)_popoverWillOpen;
- (void)_postCharacterPickerOpenedNotification;
- (void)_showPopoverFromToolbarItem:(id)a0;
- (void)_showPopoverFromToolbarMenu:(id)a0;
- (void)_targetTextViewSelectionChanged:(id)a0;
- (id)alternateLargeWindow;
- (void)autoCloseIfNecessary;
- (void)characterDidSelected:(id)a0;
- (id)detachedWindowCreate:(BOOL)a0;
- (void)didInsertImageGlyph:(id)a0;
- (void)informClosingDetachedWindow:(id)a0;
- (void)insertEmojiTextAttachment:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 target:(id)a2;
- (void)insertEntityAsTextAttachment:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 target:(id)a2;
- (BOOL)isTemporarilyHidden;
- (void)reopen;
- (void)setAlternateLargeWindow:(id)a0;
- (void)setDataSource:(id)a0 usingBlockOnMainThread:(id /* block */)a1;
- (void)setDetachedWindowLevel:(long long)a0;
- (void)setDisplayAsWindow:(BOOL)a0 preferredLoc:(struct CGPoint { double x0; double x1; })a1;
- (void)setEmojiIMViewState:(id)a0;
- (void)setShowOpeningAnimation:(BOOL)a0;
- (void)setShowingLargeWindow:(BOOL)a0;
- (BOOL)showingLargeWindow;
- (void)startExternalEventMonitoring;
- (void)stopExternalEventMonitoring;
- (void)temporarilyClose;
- (void)windowWillClosed:(id)a0;

@end
