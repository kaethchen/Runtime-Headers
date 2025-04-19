@class NSString, NSWindow, NSThemeWidgetSharedWindowRemoteButton;

@interface NSLocalWindowSharingWindowController : NSWindowController <NSThemeWidgetSharedWindowRemoteButtonDelegate> {
    NSThemeWidgetSharedWindowRemoteButton *_widget;
}

@property (readonly) NSWindow *hostWindow;
@property (readonly, weak) NSWindow *sharedWindow;
@property (weak) NSWindow *surrogateWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)hostButtonRevealAmountDidChange;
- (void)endSharingForWindow;
- (void)hostButtonDidChange;
- (void)hostFullScreenStatusDidChange;
- (id)initWithSharedWindow:(id)a0;
- (id)menuItemsForWindowSharingSharedWindowRemoteButton:(id)a0;
- (void)remoteServiceDidInvalidate:(id)a0;
- (void)setMenuIsOpen:(BOOL)a0;
- (void)updateStyle;
- (void)windowDidLoad;

@end
