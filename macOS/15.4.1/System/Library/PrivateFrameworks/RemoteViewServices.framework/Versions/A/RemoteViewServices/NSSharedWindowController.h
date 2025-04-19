@class NSString, NSWindow, NSRemoteServiceConnection;

@interface NSSharedWindowController : NSObject <NSRemoteServiceConnectionDelegate> {
    NSRemoteServiceConnection *_connection;
    unsigned int _remoteConnectionID;
    unsigned long long _windowRights;
    NSString *_grantToken;
    BOOL _windowRightsGrantRetried;
}

@property (readonly) NSWindow *window;
@property BOOL handleEvents;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cleanup;
- (id)_startingWindowForSendAction:(SEL)a0;
- (void)_makeKeyWindow:(BOOL)a0;
- (id)_fakeMenuItemForTarget:(id)a0 action:(SEL)a1 tag:(long long)a2;
- (void)_handleActivateSharedWindow:(id)a0;
- (void)_handleFirstResponderActionForRequest:(id)a0;
- (void)_handleFirstResponderValidateRequest:(id)a0;
- (void)_handleHideSharedWindow:(id)a0;
- (void)_handleMakeFirstResponder:(id)a0;
- (void)_handleSendEvent:(id)a0;
- (void)_handleSetupSharedWindow:(id)a0;
- (void)_panelFrameChanged:(id)a0;
- (void)_remoteHostDidAcceptRights:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; struct __CFString *x3; } *)a0;
- (void)_remoteWindowShouldChange:(id)a0;
- (BOOL)_remoteWindowShouldOrderWindow:(long long)a0 andChangeKey:(BOOL)a1 orJustOrderOut:(BOOL)a2;
- (void)_thisWindowShouldChange:(id)a0;
- (void)connection:(id)a0 didReceiveError:(id)a1;
- (void)connection:(id)a0 didReceiveRequest:(id)a1;
- (id)initWithConnection:(id)a0 andWindow:(id)a1;
- (id)initWithConnection:(id)a0 window:(id)a1 rights:(unsigned long long)a2;
- (void)someApplicationDeactivated:(id)a0;

@end
