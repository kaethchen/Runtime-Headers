@class NSString, NSMutableDictionary, NSDictionary, NSNumberFormatter, WDHTTPDriverInterface;

@interface WDW3CRouteHandler : NSObject <WDHTTPRouteHandler> {
    WDHTTPDriverInterface *_driver;
    NSMutableDictionary *_sessionQueueStates;
    NSDictionary *_inputSourceStates;
    BOOL _didAddHandlersForUnsupportedMethods;
    NSMutableDictionary *_supportedMethodsByPath;
    NSNumberFormatter *_numberFormatter;
}

@property (readonly, copy, nonatomic) NSString *version;

- (void).cxx_destruct;
- (id)initWithDriver:(id)a0;
- (void)_addHandlerForCommandWithMethod:(long long)a0 path:(id)a1 responseBlock:(id /* block */)a2;
- (void)_addHandlerForSessionCommandWithMethod:(long long)a0 path:(id)a1 target:(id)a2 selector:(SEL)a3;
- (void)_addHandlersForUnknownCommands;
- (void)_addUnimplementedCommandWithMethod:(long long)a0 path:(id)a1;
- (void)_finalizeRoutes;
- (void)_addHandlerForCommandWithMethod:(long long)a0 path:(id)a1 target:(id)a2 selector:(SEL)a3;
- (void)_addHandlerForUnsupportedMethod:(long long)a0 withPath:(id)a1;
- (void)_addHandlersForUnsupportedMethods;
- (void)_closeSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)_createSessionFromFirstMatchAtIndex:(unsigned long long)a0 firstMatchList:(id)a1 accumulatedErrors:(id)a2 completionHandler:(id /* block */)a3;
- (void)_dequeueNextCommandForSession:(id)a0;
- (void)_ensureElementIsKeyboardInteractable:(id)a0 inSession:(id)a1 completionHandler:(id /* block */)a2;
- (void)_ensureElementIsScrolledIntoViewAndDisplayed:(id)a0 inSession:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_ensureHandlerErrorIsEmpty:(id)a0 orSendResponse:(id)a1 relatedSession:(id)a2;
- (BOOL)_ensurePayload:(id)a0 fromRequest:(id)a1 hasOptionalParameter:(id)a2 allowedTypes:(id)a3 orSendResponse:(id)a4 withErrorCode:(long long)a5 relatedSession:(id)a6;
- (BOOL)_ensurePayload:(id)a0 fromRequest:(id)a1 hasOptionalParameter:(id)a2 ofType:(long long)a3 orSendResponse:(id)a4 withErrorCode:(long long)a5 relatedSession:(id)a6;
- (BOOL)_ensurePayload:(id)a0 fromRequest:(id)a1 hasRequiredParameter:(id)a2 ofType:(long long)a3 orSendResponse:(id)a4 withErrorCode:(long long)a5 relatedSession:(id)a6;
- (BOOL)_ensurePayload:(id)a0 hasOptionalParameter:(id)a1 ofType:(long long)a2;
- (BOOL)_ensureRequest:(id)a0 hasURLParameter:(id)a1 ofType:(long long)a2 orSendResponse:(id)a3 withErrorCode:(long long)a4 relatedSession:(id)a5;
- (BOOL)_ensureSessionErrorIsEmpty:(id)a0 forRequest:(id)a1 orSendResponse:(id)a2 relatedSession:(id)a3;
- (void)_evaluateInternalAsyncJavaScriptFunction:(id)a0 withArguments:(id)a1 sourceURL:(id)a2 inBrowsingContext:(id)a3 relatedSession:(id)a4 completionHandler:(id /* block */)a5;
- (void)_evaluateInternalJavaScriptFunction:(id)a0 withArguments:(id)a1 sourceURL:(id)a2 inBrowsingContext:(id)a3 relatedSession:(id)a4 completionHandler:(id /* block */)a5;
- (id)_extractCapabilitiesFromSession:(id)a0;
- (BOOL)_extractFunctionBody:(id *)a0 andArguments:(id *)a1 fromRequest:(id)a2 orSendResponse:(id)a3 relatedSession:(id)a4;
- (BOOL)_extractInteractionSteps:(id *)a0 andInputSources:(id *)a1 fromPayload:(id)a2 inSession:(id)a3 error:(id *)a4;
- (void)_fetchAttributesOfElement:(id)a0 inSession:(id)a1 completionHandler:(id /* block */)a2;
- (void)_fetchToplevelBrowsingContextsInSession:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_findSession:(id *)a0 fromRequest:(id)a1 orSendResponse:(id)a2;
- (void)_handleAcceptAlert:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleAddAuthenticator:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleAddCookie:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleAddCredential:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleAttachDebugger:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleBack:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleCloseWindow:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleDeleteAllCookies:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleDeleteCookie:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleDeleteSession:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleDismissAlert:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleElementClear:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleElementClick:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleElementSendKeys:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleExecuteAsyncScript:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleExecuteScript:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleFindElement:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleFindElementFromElement:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleFindElementFromShadowRoot:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleFindElements:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleFindElementsFromElement:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleFindElementsFromShadowRoot:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleForward:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleFullscreenWindow:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGenerateTestReport:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetActiveElement:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetAlertText:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetAllCookies:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetComputedLabel:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetComputedRole:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetCredentials:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetCurrentURL:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetElementAttribute:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetElementCSSValue:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetElementProperty:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetElementRect:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetElementShadowRoot:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetElementTagName:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetElementText:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetNamedCookie:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetPageSource:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetPermissions:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetTimeouts:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetTitle:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetWindowHandle:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetWindowHandles:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleGetWindowRect:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleIsElementEnabled:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleIsElementSelected:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleMaximizeWindow:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleMinimizeWindow:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleNavigateTo:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleNewSession:(id)a0 response:(id)a1;
- (void)_handleNewWindow:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handlePerformActions:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleRefresh:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleReleaseActions:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleRemoveAllCredentials:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleRemoveAuthenticator:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleRemoveCredential:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleRequestForUnimplementedCommand:(id)a0 response:(id)a1;
- (void)_handleRequestForUnknownCommand:(id)a0 response:(id)a1;
- (void)_handleRequestForUnsupportedMethod:(id)a0 response:(id)a1;
- (void)_handleSendAlertText:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleSetPermissions:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleSetTimeouts:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleSetUserVerified:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleSetWindowRect:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleStatus:(id)a0 response:(id)a1;
- (void)_handleSwitchToFrame:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleSwitchToParentFrame:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleSwitchToWindow:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleTakeElementScreenshot:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleTakeScreenshot:(id)a0 response:(id)a1 relatedSession:(id)a2;
- (void)_handleUserPromptsInSession:(id)a0 completionHandler:(id /* block */)a1;
- (id)_keyInteractionsFromSequence:(id)a0 inSession:(id)a1;
- (void)_markSupportedCommandMethod:(long long)a0 path:(id)a1;
- (id)_matchCapabilities:(id)a0 error:(id *)a1;
- (void)_maybeProcessEnqueuedRequestForSession:(id)a0;
- (id)_mergeCapabilities:(id)a0 withCapabilities:(id)a1 error:(id *)a2;
- (BOOL)_parseAction:(id)a0 intoInputSource:(id *)a1 withStates:(id *)a2 inSession:(id)a3 error:(id *)a4;
- (BOOL)_parseCharKey:(id *)a0 andVirtualKey:(id *)a1 fromString:(id)a2;
- (BOOL)_parseElement:(id *)a0 fromURLParameter:(id)a1 ofRequest:(id)a2 orSendResponse:(id)a3 relatedSession:(id)a4;
- (BOOL)_parseMouseButton:(long long *)a0 fromNumber:(id)a1;
- (BOOL)_parsePayload:(id *)a0 fromRequest:(id)a1 orSendResponse:(id)a2 relatedSession:(id)a3;
- (BOOL)_parseSearchStrategy:(long long *)a0 andQuery:(id *)a1 fromPayloadOfRequest:(id)a2 orSendResponse:(id)a3 relatedSession:(id)a4;
- (id)_processCapabilities:(id)a0 error:(id *)a1;
- (id)_queueForSession:(id)a0;
- (void)_sendResponse:(id)a0 withError:(id)a1 relatedSession:(id)a2;
- (void)_sendResponse:(id)a0 withPayload:(id)a1 relatedSession:(id)a2;
- (void)_switchToParentBrowsingContextInSession:(id)a0 completionHandler:(id /* block */)a1;
- (id)_translateAutomationPayload:(id)a0 toClientPayloadInSession:(id)a1;
- (id)_translateCapabilitiesIntoSessionOptions:(id)a0 error:(id *)a1;
- (BOOL)_translateCapability:(id)a0 withValue:(id)a1 intoOptions:(id)a2;
- (id)_translateClientPayload:(id)a0 toAutomationPayloadInSession:(id)a1;
- (BOOL)_validateCapabilities:(id)a0 error:(id *)a1;
- (void)setupDefaultRoutes;

@end
