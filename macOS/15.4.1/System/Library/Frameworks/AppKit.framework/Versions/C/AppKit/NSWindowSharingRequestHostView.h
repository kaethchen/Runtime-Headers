@class NSWindow, NSRemoteView;

@interface NSWindowSharingRequestHostView : NSView <NSRemoteViewDelegate, WindowSharingRequestHostProtocol> {
    long long _requestState;
    NSRemoteView *_remoteView;
    NSWindow *_targetWindow;
    id /* block */ _requestCompletionHandler;
}

@property (readonly) BOOL shouldRetainExportedObject;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (id)exportedInterface;
- (void)_didEncounterFailureCondition;
- (id)_remoteViewCreatingIfNeeded;
- (void)_runServiceAndRequestSharingFromWindowID:(long long)a0 destWindowID:(long long)a1 title:(id)a2 image:(id)a3;
- (void)_runServiceAndRequestTransferFromWindowID:(long long)a0 toWindowID:(long long)a1 alwaysAllow:(BOOL)a2;
- (id)_serviceViewControllerProxy;
- (void)cancelRequest;
- (void)detachFromTargetWindow;
- (void)getWindowToShareWithCompletionHandler:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)requestFinishedWithResponse:(long long)a0;
- (void)requestSharingFromWindow:(id)a0 window:(id)a1 title:(id)a2 image:(id)a3 completionHandler:(id /* block */)a4;
- (void)requestTransferFromWindow:(id)a0 toWindow:(id)a1 alwaysAllow:(BOOL)a2 withCompletionHandler:(id /* block */)a3;
- (id)serviceViewControllerInterface;
- (void)viewDidInvalidate:(id)a0;

@end
