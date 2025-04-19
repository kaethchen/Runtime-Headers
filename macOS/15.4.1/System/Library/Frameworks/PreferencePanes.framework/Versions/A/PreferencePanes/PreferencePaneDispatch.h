@class NSString, NSXPCConnection, NSPreferencePane, NSView;

@interface PreferencePaneDispatch : NSObject <PreferencePaneLegacyProtocol> {
    id /* block */ _replyToShouldUnselectBlock;
    NSXPCConnection *_connection;
    unsigned long long _savedReplyToShouldUnselect;
    NSString *_legacyPreferencePanePath;
    id _eventMonitor;
    NSView *_shieldView;
}

@property int hostPID;
@property (retain) NSPreferencePane *prefPaneObject;
@property (retain) NSXPCConnection *connection;
@property (readonly) NSString *legacyPreferencePanePath;
@property BOOL allowLegacyInteface;

+ (id)sharedDispatch;

- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (void)setConnection:(id)a0;
- (oneway void)didHide;
- (oneway void)didBecomeActive;
- (oneway void)didSelect;
- (oneway void)didUnselect;
- (oneway void)willSelect;
- (oneway void)willUnselect;
- (oneway void)authorize;
- (oneway void)didResignActive;
- (oneway void)willBecomeActive;
- (oneway void)willResignActive;
- (oneway void)shouldUnselect:(id /* block */)a0;
- (void)_cancelPaneSwitchNotification:(id)a0;
- (void)_finishPaneSwitchNotification:(id)a0;
- (void)_suddenTerminationStateShouldChangeNotification:(id)a0;
- (void)_switchToPaneNotification:(id)a0;
- (void)_toggleTouchBarControlStripCustomizationPaletteNotification:(id)a0;
- (void)authorizationViewDidDismissAgent;
- (void)authorizationViewWillShowAgent;
- (oneway void)didUnhide;
- (oneway void)getHasElementForKey:(id)a0 reply:(id /* block */)a1;
- (oneway void)getHelpMenuItems:(id /* block */)a0;
- (oneway void)handleOpenAEData:(id)a0;
- (id)legacyPreferencePanePath;
- (oneway void)openDocumentAtPath:(id)a0;
- (oneway void)replyToShouldUnselect:(id /* block */)a0;
- (oneway void)revealElementForKey:(id)a0;
- (oneway void)setLegacyPreferencePanePath:(id)a0;
- (oneway void)willHide;
- (oneway void)willSelectWithReply:(id /* block */)a0;
- (oneway void)willUnhide;

@end
