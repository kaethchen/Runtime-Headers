@class NSTextField, NSString, NSView, NSURL, NSWindow, FILocationPopUp, NSButton;

@interface NSMovePanel : NSPanel {
    NSURL *_initialURL;
    NSView *_movePanelContentView;
    FILocationPopUp *_movePopUp;
    NSTextField *_movePopUpLabel;
    double _movePopUpLabelLastIntrinsicWidth;
    NSButton *_cancelButton;
    NSButton *_moveButton;
    NSWindow *_parentWindow;
    id /* block */ _completionHandler;
    unsigned char _retained : 1;
}

@property (copy) NSURL *initialURL;
@property (copy) NSURL *directoryURL;
@property (copy) NSString *prompt;
@property (copy) NSString *title;
@property (copy) NSString *fileName;
@property (copy) NSString *movePopupFieldLabel;
@property (readonly) NSURL *finalURL;

+ (struct CGSize { double x0; double x1; })_minContentRectSize;
+ (id)movePanel;
+ (void)newDocument:(id)a0;

- (void)dealloc;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPrompt:(id)a0;
- (void)setTitle:(id)a0;
- (void)_okForMoveMode:(id /* block */)a0;
- (void)ok:(id)a0;
- (void)cancel:(id)a0;
- (unsigned long long)finderLocationPopUpMenuOptions:(id)a0;
- (void)setContentView:(id)a0;
- (struct CGSize { double x0; double x1; })_adjustMinContentSizeForMinFrameSize;
- (void)_closeAndCallCompletionHandlerWithReturnCode:(long long)a0;
- (void)_completeMoveForReturnCode:(long long)a0;
- (struct CGSize { double x0; double x1; })_computeMinSizeForSimpleMovePanel;
- (void)_configureMovePopUp;
- (void)_didEndSheet:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)_didPresentErrorWithRecovery:(BOOL)a0 contextInfo:(void *)a1;
- (struct { unsigned int x0[8]; })_hostAppAuditToken;
- (void)_initContentView;
- (BOOL)_isModalWindowOrSheetRunning;
- (void)_layoutAndResizeMovePanelIfNecessary;
- (void)_removeExtraRetainIfNeeded;
- (BOOL)_sendToDelegateValidateFilenameOrURL:(id)a0 error:(id *)a1;
- (id)_ubiquityContainerURLs;
- (void)_updateOkButtonEnabledState;
- (void)beginWithCompletionHandler:(id /* block */)a0;
- (void)dismissWindow:(long long)a0;
- (void)finderLocationPopUp:(id)a0 didChangeToDirectoryURL:(id)a1;
- (void)finderLocationPopUpOtherLocation:(id)a0;
- (id)finderLocationPopUpRequestRecentPlaces:(id)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)newDocument:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (id)prompt;

@end
