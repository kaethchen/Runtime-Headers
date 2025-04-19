@class PPTController, NSString, NSTouchBar, NSObject, AppControllerTouchBarProvider;

@interface BrowserApplication : NSApplication <ASSavedAccountContextProviding, AppControllerTouchBarProviderDelegate, NSTouchBarProvider> {
    BOOL _isClosingAllWindows;
    BOOL _isDockBouncingSuppressed;
    NSObject *_terminateSender;
    SEL _currentAction;
    AppControllerTouchBarProvider *_touchBarProvider;
    long long _activeWindowRestorationCount;
    BOOL _sentDidBeginTerminationNotification;
    PPTController *_pptController;
}

@property (readonly, nonatomic, getter=isRestoringWindows) BOOL restoringWindows;
@property (nonatomic, getter=isTryingToTerminate) BOOL tryingToTerminate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

- (id)init;
- (void).cxx_destruct;
- (void)finishLaunching;
- (void)_applicationWillTerminate:(id)a0;
- (BOOL)_globalCanQuietAndSafeQuit;
- (short)_handleAEQuit;
- (void)_setShouldRestoreStateOnNextLaunch:(BOOL)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityAttributeValue:(id)a0 forParameter:(id)a1;
- (id)accessibilityParameterizedAttributeNames;
- (void)accessibilityPerformAction:(id)a0;
- (struct _NSModalSession { } *)beginModalSessionForWindow:(id)a0;
- (void)endModalSession:(struct _NSModalSession { } *)a0;
- (id)makeWindowsPerform:(SEL)a0 inOrder:(BOOL)a1;
- (id)nextEventMatchingMask:(unsigned long long)a0 untilDate:(id)a1 inMode:(id)a2 dequeue:(BOOL)a3;
- (void)orderFrontStandardAboutPanel:(id)a0;
- (id)orderedWindows;
- (long long)requestUserAttention:(unsigned long long)a0;
- (BOOL)restoreWindowWithIdentifier:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)runTest:(id)a0 options:(id)a1;
- (BOOL)sendAction:(SEL)a0 to:(id)a1 from:(id)a2;
- (void)sendEvent:(id)a0;
- (id)targetForAction:(SEL)a0 to:(id)a1 from:(id)a2;
- (void)terminate:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (SEL)currentAction;
- (void)_reportSafariBlockingQuitReason;
- (void)_sendDidBeginTerminationNotification;
- (BOOL)anyWindowsVisible;
- (void)closeAllWindows:(id)a0;
- (void)createNewPrivateBrowsingWindowFromTouchBarProvider:(id)a0;
- (void)createNewWindowFromTouchBarProvider:(id)a0;
- (BOOL)isClosingAllWindows;
- (BOOL)isDockBouncingSuppressed;
- (id)savedAccountContextForWebPageID:(unsigned long long)a0;
- (void)setDockBouncingSuppressed:(BOOL)a0;
- (void)tryToCloseAllWindows;
- (void)tryToTerminate;

@end
