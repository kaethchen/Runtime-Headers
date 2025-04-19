@class NSMutableDictionary, IMKEvent, NSBundle, NSMenu, IMKKeyboardService, NSMutableArray, IMKPreferences, IMKCandidates, NSString, IMKInputController, NSTimer, NSXPCListenerEndpoint, NSRecursiveLock, NSXPCListener, NSTask, NSXPCConnection, NSLock, NSConnection;

@interface _IMKServerPrivateLegacy : NSObject {
    NSString *_name;
    NSConnection *_connection;
    NSXPCListener *_inputMethodXPCListener;
    NSXPCConnection *_launcherXPCConnection;
    NSRecursiveLock *_imkConnectionModesLock;
    int _imkConnectionReplyWaitCount;
    NSTimer *_imkTimerForDelayedEndpointCheckin;
    Class _controllerClass;
    Class _delegateClass;
    NSMutableDictionary *_controllers;
    IMKInputController *_currentController;
    NSBundle *_bundle;
    BOOL _hasKeys;
    id _keybindings;
    NSMutableArray *_runLoopInvocations;
    NSMutableDictionary *_eventDictionaries;
    NSLock *_privateLock;
    long long _clientCount;
    NSTask *serverTask;
    id currentClientWrapper;
    id presentingClientWrapper;
    int _eventStatus;
    NSMenu *_cachedMenu;
    IMKPreferences *_preferences;
    IMKEvent *_currentIMKEvent;
    IMKKeyboardService *_keyboardService;
    id *_keyboardServiceDelegate;
}

@property (retain, nonatomic) IMKCandidates *_candidates;
@property (nonatomic) id currentClientWrapper;
@property (nonatomic) id presentingClientWrapper;
@property BOOL _stopping;
@property BOOL _isNewLaunch;
@property unsigned long long _os_signpost_id_init;
@property (readonly) NSString *_bundleIdentifier;
@property (retain, nonatomic) NSXPCListenerEndpoint *functionRowItemViewServiceXPCEndpoint;

- (void)dealloc;
- (void)replyWaitCount_decrementWithLocking;
- (void)replyWaitCount_incrementWithLocking;
- (void)replyWaitCount_lockDecrement;
- (void)replyWaitCount_lockIncrement;
- (int)replyWaitCount_testWithLocking;
- (void)replyWaitCount_unlock;
- (id)currentClientWrapper;
- (id)presentingClientWrapper;
- (void)setCurrentClientWrapper:(id)a0;
- (void)setPresentingClientWrapper:(id)a0;

@end
