@class NSView, NSPopupMenuWindow, NSCocoaMenuImpl;
@protocol NSContextMenuWindowProtocol, NSContextMenuLifecycleProtocol;

@interface NSRemoteContextMenuImpl : NSRemoteMenuImpl <NSContextMenuClientProtocol, NSContextMenuLifecycleProtocol, NSMenuRemoteViewDelegate> {
    void /* unknown type, empty encoding */ remoteView;
    void /* unknown type, empty encoding */ focusedItemFrame;
}

@property (nonatomic, retain) id<NSContextMenuWindowProtocol> windowProxy;
@property (nonatomic, retain) NSView *view;
@property (nonatomic, readonly) NSPopupMenuWindow *_hostWindow;
@property (nonatomic, readonly) NSCocoaMenuImpl<NSContextMenuLifecycleProtocol> *deepestPresentedSubmenu;
@property (nonatomic, readonly) BOOL shouldSendLifecycleNotifications;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_initTrackingSessionIfNeeded;
- (BOOL)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithMenu:(id)a0;
- (void)loadView;
- (void)makeVisible;
- (void)performTransaction:(id)a0;
- (void)remoteServiceDidInvalidate:(id)a0;
- (void)resignVisible;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)willMoveToWindow;
- (void)windowDidChangeFrameTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 focusedItem:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
