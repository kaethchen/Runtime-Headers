@class NSXPCConnection, SCRVisualsCaptionWindow, SCRVisualsRemoteDelegate, SCRVisualsHUDWindow, SCRFocusCursorDrawingOptions, SCRVisualsRotorWindow, SCRVisualsSearchWindow, SCRVisualsPreferences, SCRVisualsBrailleWindow, SCRVisualsOverlayWindow, SCRVisualsMenuWindow;
@protocol AXVisualsAgentInterface;

@interface SCRVisualsManager : NSObject

@property (retain, nonatomic, setter=_setVisualsPreferences:) SCRVisualsPreferences *_visualsPreferences;
@property (retain, nonatomic, setter=_setVisualsAgent:) id<AXVisualsAgentInterface> _visualsAgent;
@property (retain, nonatomic, setter=_setVisualsAgentConnection:) NSXPCConnection *_visualsAgentConnection;
@property (retain, nonatomic, setter=_setAgentDelegate:) SCRVisualsRemoteDelegate *_agentDelegate;
@property (retain, nonatomic, setter=_setLastDrawnCursorOptions:) SCRFocusCursorDrawingOptions *_lastDrawnCursorOptions;
@property (nonatomic) BOOL activeVisualsEnabled;
@property (readonly, nonatomic) SCRVisualsCaptionWindow *captionWindow;
@property (readonly, nonatomic) SCRVisualsHUDWindow *hudWindow;
@property (readonly, nonatomic) SCRVisualsMenuWindow *menuWindow;
@property (readonly, nonatomic) SCRVisualsRotorWindow *rotorWindow;
@property (readonly, nonatomic) SCRVisualsSearchWindow *searchWindow;
@property (readonly, nonatomic) SCRVisualsOverlayWindow *overlayWindow;
@property (readonly, nonatomic) SCRVisualsBrailleWindow *brailleWindow;
@property (nonatomic) BOOL screenCurtainEnabled;
@property (nonatomic) BOOL tileVisualsEnabled;

+ (void)queueOnMainThreadWithLowerPriority:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0;
- (void)displayDidReconfigure;
- (void)_drawCursorWithOptions:(id)a0;
- (void)_hideRemoteVisualsBeforeShutdown;
- (void)_initializeVisualsAgent;
- (void)_initializeVisualsWindowsWithUserDefaults:(id)a0 enableOutputVisuals:(BOOL)a1;
- (void)_setVisualsEnabled:(BOOL)a0;
- (void)_updateCursorIfNeededWithOptions:(id)a0;
- (void)_visualsFontSizeChanged:(id)a0;
- (void)drawCursorWithOptions:(id)a0;
- (id)initWithUserDefaults:(id)a0 enableOutputVisuals:(BOOL)a1;
- (void)prepareForShutdown;
- (void)restoreVisualStates;
- (void)showEnabledVisuals;

@end
