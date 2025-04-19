@class NSTextField, NSString, NSScrollView, NSTimer;

@interface GLUTClipboardController : NSWindowController <NSWindowDelegate> {
    NSScrollView *_scrollView;
    NSTextField *_infoText;
    NSTimer *_updateTimer;
    int _lastChangeCount;
    BOOL _firstTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (BOOL)validateMenuItem:(id)a0;
- (void)windowDidDeminiaturize:(id)a0;
- (void)windowDidLoad;
- (void)windowWillClose:(id)a0;
- (void)windowWillMiniaturize:(id)a0;
- (void)toggleWindow:(id)a0;
- (void)_checkPasteboard;
- (void)_getTextView:(id *)a0 description:(id *)a1 fromPasteboard:(id)a2 type:(id)a3;
- (void)_clearAutoupdateTimer;
- (void)_getImageView:(id *)a0 description:(id *)a1 fromPasteboard:(id)a2 type:(id)a3;
- (void)_getUnknownView:(id *)a0 description:(id *)a1 fromPasteboard:(id)a2 type:(id)a3;
- (void)_installAutoupdateTimer;
- (BOOL)isClipboardWindowVisible;
- (void)updateClipboardWindow;

@end
