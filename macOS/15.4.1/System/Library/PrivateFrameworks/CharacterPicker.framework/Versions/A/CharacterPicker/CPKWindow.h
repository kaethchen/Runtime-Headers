@class NSButton;

@interface CPKWindow : NSPanel {
    id _privateData;
}

@property (retain) NSButton *showCVButton;

- (void)dealloc;
- (void)close;
- (void)transform;
- (id)_cornerMask;
- (void)animationDidEnd:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)cancelOperation:(id)a0;
- (void)windowDidBecomeKey:(id)a0;
- (id)_privateStorage;
- (void)_characterViewerButtonClicked:(id)a0;
- (void)_characterViewerDidOpen:(id)a0;
- (void)_characterViewerWillOpen:(id)a0;
- (void)_delayedStartAnimation:(id)a0;
- (void)_detachedWindowClosed:(id)a0;
- (void)_didCancelOperation:(id)a0;
- (void)_prepareDeallocatingParentPopover:(id)a0;
- (void)_titlebarClicked:(id)a0;
- (void)activateUnderlyingApplication;
- (void)characterDidSelected:(id)a0;
- (id)initWithParentPopover:(id)a0;
- (id)localViewController;
- (void)prepareTransformFromPopover:(BOOL)a0;
- (void)setLastKeyWindow:(id)a0 bringBack:(BOOL)a1;
- (void)windowWillClosed:(id)a0;

@end
