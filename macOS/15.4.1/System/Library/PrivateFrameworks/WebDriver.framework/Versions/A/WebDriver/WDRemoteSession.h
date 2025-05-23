@class NSString, WDSessionNotificationManager, WDToplevelBrowsingContext, WDBrowsingContext, WDRemoteSessionHost, NSMutableDictionary;
@protocol WDSessionHost;

@interface WDRemoteSession : NSObject <WDSession> {
    WDSessionNotificationManager *_notificationManager;
    BOOL _automaticInspectionEnabled;
    BOOL _automaticProfilingEnabled;
    BOOL _usesStrictFileInteractabilityChecks;
    id /* block */ _handleProtocolEventsBlock;
    unsigned long long _browsingContextClearedHandler;
    WDToplevelBrowsingContext *_currentToplevelBrowsingContext;
    WDBrowsingContext *_currentBrowsingContext;
    NSMutableDictionary *_lastRequestedFilesPerElement;
    NSMutableDictionary *_cachedElementsPerBrowsingContext;
    long long _currentKeyModifiers;
    unsigned long long _pageLoadTimeout;
    unsigned long long _elementSearchTimeout;
    unsigned long long _asynchronousScriptTimeout;
    long long _pageLoadStrategy;
    long long _userPromptHandlerStrategy;
}

@property (readonly, nonatomic) WDRemoteSessionHost *remoteHost;
@property (nonatomic) BOOL automaticInspectionEnabled;
@property (nonatomic) BOOL automaticProfilingEnabled;
@property (nonatomic) BOOL acceptInsecureCertificates;
@property (nonatomic) BOOL allowsInsecureMediaCapture;
@property (nonatomic) BOOL suppressICECandidateFiltering;
@property (readonly, nonatomic) WDSessionNotificationManager *notificationManager;
@property (readonly, nonatomic) id<WDSessionHost> sessionHost;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) WDToplevelBrowsingContext *currentToplevelBrowsingContext;
@property (readonly, copy, nonatomic) WDBrowsingContext *currentBrowsingContext;
@property (readonly, nonatomic) long long currentPressedKeyModifiers;
@property (nonatomic) unsigned long long pageLoadTimeout;
@property (nonatomic) unsigned long long elementSearchTimeout;
@property (nonatomic) unsigned long long asynchronousScriptTimeout;
@property (nonatomic) long long pageLoadStrategy;
@property (nonatomic) long long userPromptHandlerStrategy;
@property (nonatomic) BOOL usesStrictFileInteractabilityChecks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)terminate;
- (void)deleteAllCookiesWithCompletionHandler:(id /* block */)a0;
- (void)goForwardWithCompletionHandler:(id /* block */)a0;
- (void)changeWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forToplevelBrowsingContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)_fetchSelectedFilesForFileInputElement:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleEventFromBackend:(id)a0 withParameters:(id)a1;
- (void)_resetStateAfterSwitchingToBrowsingContext:(id)a0;
- (void)_setFilesToSelect:(id)a0 forFileInputElement:(id)a1 completionHandler:(id /* block */)a2;
- (void)acceptCurrentJavaScriptDialogWithCompletionHandler:(id /* block */)a0;
- (void)addAuthenticatorWithProtocol:(id)a0 transport:(id)a1 hasResidentKey:(BOOL)a2 hasUserVerification:(BOOL)a3 isUserConsenting:(BOOL)a4 isUserVerified:(BOOL)a5 extensions:(id)a6 userVerificationMethods:(id)a7 completionHandler:(id /* block */)a8;
- (void)addCredentialToAuthenticatorID:(id)a0 credentialID:(id)a1 isResidentCredential:(BOOL)a2 relyingPartyID:(id)a3 privateKey:(id)a4 userHandle:(id)a5 signCount:(id)a6 largeBlob:(id)a7 completionHandler:(id /* block */)a8;
- (void)addSingleCookie:(id)a0 completionHandler:(id /* block */)a1;
- (void)attachDebuggerWithCompletionHandler:(id /* block */)a0;
- (void)cancelInteractionsWithCompletionHandler:(id /* block */)a0;
- (void)closeToplevelBrowsingContextWithCompletionHandler:(id /* block */)a0;
- (void)computeLayoutForElement:(id)a0 coordinateSystem:(long long)a1 scrollIntoViewIfNeeded:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)createToplevelBrowsingContextWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)deleteSingleCookieMatchingName:(id)a0 completionHandler:(id /* block */)a1;
- (void)didConnectToRemote;
- (void)dismissCurrentJavaScriptDialogWithCompletionHandler:(id /* block */)a0;
- (void)enterFullscreenForToplevelBrowsingContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)evaluateJavaScriptFunction:(id)a0 withArguments:(id)a1 expectingImplicitCallbackArgument:(BOOL)a2 forceUserGesture:(BOOL)a3 browsingContext:(id)a4 callbackTimeout:(unsigned long long)a5 completionHandler:(id /* block */)a6;
- (void)evaluateJavaScriptFunction:(id)a0 withArguments:(id)a1 expectingImplicitCallbackArgument:(BOOL)a2 forceUserGesture:(BOOL)a3 browsingContext:(id)a4 completionHandler:(id /* block */)a5;
- (void)evaluateJavaScriptFunction:(id)a0 withArguments:(id)a1 expectingImplicitCallbackArgument:(BOOL)a2 forceUserGesture:(BOOL)a3 callbackTimeout:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)evaluateJavaScriptFunction:(id)a0 withArguments:(id)a1 expectingImplicitCallbackArgument:(BOOL)a2 forceUserGesture:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)fetchAllCookiesWithCompletionHandler:(id /* block */)a0;
- (void)fetchPropertiesForAllToplevelBrowsingContextsWithCompletionHandler:(id /* block */)a0;
- (void)fetchPropertiesForToplevelBrowsingContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)findAllNodesUsingStrategy:(long long)a0 withQuery:(id)a1 completionHandler:(id /* block */)a2;
- (void)findAllNodesUsingStrategy:(long long)a0 withQuery:(id)a1 relativeToAncestorElement:(id)a2 completionHandler:(id /* block */)a3;
- (void)findFirstNodeUsingStrategy:(long long)a0 withQuery:(id)a1 completionHandler:(id /* block */)a2;
- (void)findFirstNodeUsingStrategy:(long long)a0 withQuery:(id)a1 relativeToAncestorElement:(id)a2 completionHandler:(id /* block */)a3;
- (void)generateTestReportWithMessage:(id)a0 group:(id)a1 completionHandler:(id /* block */)a2;
- (void)getComputedLabel:(id)a0 completionHandler:(id /* block */)a1;
- (void)getComputedRole:(id)a0 completionHandler:(id /* block */)a1;
- (void)getCredentialsForAuthenticatorID:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPermissionsWithCompletionHandler:(id /* block */)a0;
- (void)goBackWithCompletionHandler:(id /* block */)a0;
- (id)initWithRemoteHost:(id)a0;
- (void)isShowingJavaScriptDialogWithCompletionHandler:(id /* block */)a0;
- (void)maximizeWindowForToplevelBrowsingContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)messageOfCurrentJavaScriptDialogWithCompletionHandler:(id /* block */)a0;
- (void)minimizeWindowForToplevelBrowsingContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)navigateToURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)performInteractions:(id)a0 withInputSources:(id)a1 completionHandler:(id /* block */)a2;
- (void)performKeyboardInteractions:(id)a0 completionHandler:(id /* block */)a1;
- (void)reloadWithCompletionHandler:(id /* block */)a0;
- (void)removeAllCredentialForAuthenticatorID:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAuthenticatorID:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeCredentialForAuthenticatorID:(id)a0 credentialID:(id)a1 completionHandler:(id /* block */)a2;
- (void)resolveChildBrowsingContextWithElement:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolveChildBrowsingContextWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolveChildBrowsingContextWithOrdinal:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)resolveParentBrowsingContextWithCompletionHandler:(id /* block */)a0;
- (void)restoreWindowForToplevelBrowsingContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)selectFiles:(id)a0 forFileInputElement:(id)a1 allowsMultipleSelection:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)selectOptionElement:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPermissions:(id)a0 completionHandler:(id /* block */)a1;
- (void)setUserInput:(id)a0 forCurrentJavaScriptPromptWithCompletionHandler:(id /* block */)a1;
- (void)setUserVerifiedForAuthenticatorID:(id)a0 isUserVerified:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)switchToBrowsingContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)switchToToplevelBrowsingContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)takeScreenshotOfElement:(id)a0 scrollIntoView:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)takeScreenshotWithBounds:(long long)a0 completionHandler:(id /* block */)a1;
- (void)waitForPendingNavigationsWithCompletionHandler:(id /* block */)a0;

@end
