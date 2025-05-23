@class NSPasteboard;
@protocol WebDeviceOrientationProvider, WebFormDelegate, WebNotificationProvider, WebGeolocationProvider;

@interface WebViewPrivate : NSObject {
    struct RefPtr<WebCore::Page, WTF::RawPtrTraits<WebCore::Page>, WTF::DefaultRefDerefTraits<WebCore::Page>> { struct Page *m_ptr; } page;
    struct RefPtr<WebViewGroup, WTF::RawPtrTraits<WebViewGroup>, WTF::DefaultRefDerefTraits<WebViewGroup>> { struct WebViewGroup *m_ptr; } group;
    id UIDelegate;
    struct RetainPtr<id> { void *m_ptr; } UIDelegateForwarder;
    id resourceProgressDelegate;
    id downloadDelegate;
    id policyDelegate;
    struct RetainPtr<id> { void *m_ptr; } policyDelegateForwarder;
    id frameLoadDelegate;
    struct RetainPtr<id> { void *m_ptr; } frameLoadDelegateForwarder;
    id<WebFormDelegate> formDelegate;
    id editingDelegate;
    struct RetainPtr<id> { void *m_ptr; } editingDelegateForwarder;
    id scriptDebugDelegate;
    id historyDelegate;
    struct RetainPtr<WebInspector> { void *m_ptr; } inspector;
    struct RetainPtr<WebNodeHighlight> { void *m_ptr; } currentNodeHighlight;
    struct RetainPtr<WebImmediateActionController> { void *m_ptr; } immediateActionController;
    struct RetainPtr<NSTouchBar> { void *m_ptr; } _currentTouchBar;
    struct RetainPtr<NSTouchBar> { void *m_ptr; } _plainTextTouchBar;
    struct RetainPtr<NSTouchBar> { void *m_ptr; } _richTextTouchBar;
    struct RetainPtr<NSTouchBar> { void *m_ptr; } _passwordTextTouchBar;
    struct RetainPtr<WebTextTouchBarItemController> { void *m_ptr; } _textTouchBarItemController;
    struct RetainPtr<NSCandidateListTouchBarItem> { void *m_ptr; } _richTextCandidateListTouchBarItem;
    struct RetainPtr<NSCandidateListTouchBarItem> { void *m_ptr; } _plainTextCandidateListTouchBarItem;
    struct RetainPtr<NSCandidateListTouchBarItem> { void *m_ptr; } _passwordTextCandidateListTouchBarItem;
    struct RetainPtr<AVTouchBarPlaybackControlsProvider> { void *m_ptr; } mediaTouchBarProvider;
    struct RetainPtr<AVTouchBarScrubber> { void *m_ptr; } mediaPlaybackControlsView;
    BOOL _canCreateTouchBars;
    BOOL _isUpdatingTextTouchBar;
    BOOL _startedListeningToCustomizationEvents;
    BOOL _isCustomizingTouchBar;
    BOOL _isDeferringTextTouchBarUpdates;
    BOOL _needsDeferredTextTouchBarUpdate;
    struct unique_ptr<WebCore::TextIndicatorWindow, std::default_delete<WebCore::TextIndicatorWindow>> { struct __compressed_pair<WebCore::TextIndicatorWindow *, std::default_delete<WebCore::TextIndicatorWindow>> { struct TextIndicatorWindow *__value_; } __ptr_; } textIndicatorWindow;
    BOOL hasInitializedLookupObserver;
    struct RetainPtr<WebWindowVisibilityObserver> { void *m_ptr; } windowVisibilityObserver;
    BOOL windowOcclusionDetectionEnabled;
    struct RetainPtr<NSEvent> { void *m_ptr; } pressureEvent;
    struct RefPtr<WebCore::ValidationBubble, WTF::RawPtrTraits<WebCore::ValidationBubble>, WTF::DefaultRefDerefTraits<WebCore::ValidationBubble>> { struct ValidationBubble *m_ptr; } formValidationBubble;
    BOOL shouldMaintainInactiveSelection;
    BOOL allowsUndo;
    float zoomMultiplier;
    BOOL zoomsTextOnly;
    struct RetainPtr<NSString> { void *m_ptr; } applicationNameForUserAgent;
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } userAgent;
    BOOL userAgentOverridden;
    struct RetainPtr<WebPreferences> { void *m_ptr; } preferences;
    struct RetainPtr<NSWindow> { void *m_ptr; } hostWindow;
    int programmaticFocusCount;
    struct WebResourceDelegateImplementationCache { void /* function */ *didReceiveAuthenticationChallengeFunc; void /* function */ *canAuthenticateAgainstProtectionSpaceFunc; void /* function */ *identifierForRequestFunc; void /* function */ *willSendRequestFunc; void /* function */ *didReceiveResponseFunc; void /* function */ *didReceiveContentLengthFunc; void /* function */ *didFinishLoadingFromDataSourceFunc; void /* function */ *didFailLoadingWithErrorFromDataSourceFunc; void /* function */ *didLoadResourceFromMemoryCacheFunc; void /* function */ *willCacheResponseFunc; void /* function */ *plugInFailedWithErrorFunc; void /* function */ *shouldUseCredentialStorageFunc; void /* function */ *shouldPaintBrokenImageForURLFunc; } resourceLoadDelegateImplementations;
    struct WebFrameLoadDelegateImplementationCache { void /* function */ *didCreateJavaScriptContextForFrameFunc; void /* function */ *didClearWindowObjectForFrameFunc; void /* function */ *didClearWindowObjectForFrameInScriptWorldFunc; void /* function */ *didClearInspectorWindowObjectForFrameFunc; void /* function */ *windowScriptObjectAvailableFunc; void /* function */ *didHandleOnloadEventsForFrameFunc; void /* function */ *didReceiveServerRedirectForProvisionalLoadForFrameFunc; void /* function */ *didCancelClientRedirectForFrameFunc; void /* function */ *willPerformClientRedirectToURLDelayFireDateForFrameFunc; void /* function */ *didChangeLocationWithinPageForFrameFunc; void /* function */ *didPushStateWithinPageForFrameFunc; void /* function */ *didReplaceStateWithinPageForFrameFunc; void /* function */ *didPopStateWithinPageForFrameFunc; void /* function */ *willCloseFrameFunc; void /* function */ *didStartProvisionalLoadForFrameFunc; void /* function */ *didReceiveTitleForFrameFunc; void /* function */ *didCommitLoadForFrameFunc; void /* function */ *didFailProvisionalLoadWithErrorForFrameFunc; void /* function */ *didFailLoadWithErrorForFrameFunc; void /* function */ *didFinishLoadForFrameFunc; void /* function */ *didFirstLayoutInFrameFunc; void /* function */ *didFirstVisuallyNonEmptyLayoutInFrameFunc; void /* function */ *didLayoutFunc; void /* function */ *didReceiveIconForFrameFunc; void /* function */ *didFinishDocumentLoadForFrameFunc; void /* function */ *didDisplayInsecureContentFunc; void /* function */ *didRunInsecureContentFunc; void /* function */ *didDetectXSSFunc; void /* function */ *didRemoveFrameFromHierarchyFunc; } frameLoadDelegateImplementations;
    struct WebScriptDebugDelegateImplementationCache { BOOL didParseSourceExpectsBaseLineNumber; BOOL exceptionWasRaisedExpectsHasHandlerFlag; void /* function */ *didParseSourceFunc; void /* function */ *failedToParseSourceFunc; void /* function */ *exceptionWasRaisedFunc; } scriptDebugDelegateImplementations;
    struct WebHistoryDelegateImplementationCache { void /* function */ *navigatedFunc; void /* function */ *clientRedirectFunc; void /* function */ *serverRedirectFunc; void /* function */ *deprecatedSetTitleFunc; void /* function */ *setTitleFunc; void /* function */ *populateVisitedLinksFunc; } historyDelegateImplementations;
    BOOL closed;
    BOOL shouldCloseWithWindow;
    BOOL mainFrameDocumentReady;
    BOOL drawsBackground;
    BOOL tabKeyCyclesThroughElementsChanged;
    BOOL becomingFirstResponder;
    BOOL becomingFirstResponderFromOutside;
    BOOL usesPageCache;
    struct RetainPtr<NSColor> { void *m_ptr; } backgroundColor;
    struct RetainPtr<NSString> { void *m_ptr; } mediaStyle;
    BOOL hasSpellCheckerDocumentTag;
    long long spellCheckerDocumentTag;
    struct RetainPtr<WebPluginDatabase> { void *m_ptr; } pluginDatabase;
    struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::DefaultHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id>>, WTF::HashTableTraits, WTF::ShouldValidateKey::Yes> { struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>>, WTF::DefaultHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RetainPtr<id>>::KeyValuePairTraits, WTF::HashTraits<unsigned long>, WTF::ShouldValidateKey::Yes> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } identifierMap;
    BOOL _keyboardUIModeAccessed;
    int _keyboardUIMode;
    BOOL shouldUpdateWhileOffscreen;
    BOOL needsOneShotDrawingSynchronization;
    BOOL postsAcceleratedCompositingNotifications;
    struct unique_ptr<WebViewRenderingUpdateScheduler, std::default_delete<WebViewRenderingUpdateScheduler>> { struct __compressed_pair<WebViewRenderingUpdateScheduler *, std::default_delete<WebViewRenderingUpdateScheduler>> { struct WebViewRenderingUpdateScheduler *__value_; } __ptr_; } renderingUpdateScheduler;
    NSPasteboard *insertionPasteboard;
    struct RetainPtr<NSImage> { void *m_ptr; } _mainFrameIcon;
    struct CGSize { double width; double height; } lastLayoutSize;
    struct RetainPtr<WebVideoFullscreenController> { void *m_ptr; } fullscreenController;
    struct Vector<WTF::RetainPtr<WebVideoFullscreenController>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } fullscreenControllersExiting;
    struct RefPtr<WebCore::PlaybackSessionModelMediaElement, WTF::RawPtrTraits<WebCore::PlaybackSessionModelMediaElement>, WTF::DefaultRefDerefTraits<WebCore::PlaybackSessionModelMediaElement>> { struct PlaybackSessionModelMediaElement *m_ptr; } playbackSessionModel;
    struct RefPtr<WebCore::PlaybackSessionInterfaceMac, WTF::RawPtrTraits<WebCore::PlaybackSessionInterfaceMac>, WTF::DefaultRefDerefTraits<WebCore::PlaybackSessionInterfaceMac>> { struct PlaybackSessionInterfaceMac *m_ptr; } playbackSessionInterface;
    struct RetainPtr<WebFullScreenController> { void *m_ptr; } newFullscreenController;
    id<WebGeolocationProvider> _geolocationProvider;
    id<WebDeviceOrientationProvider> m_deviceOrientationProvider;
    id<WebNotificationProvider> _notificationProvider;
    struct unique_ptr<WebSelectionServiceController, std::default_delete<WebSelectionServiceController>> { struct __compressed_pair<WebSelectionServiceController *, std::default_delete<WebSelectionServiceController>> { struct WebSelectionServiceController *__value_; } __ptr_; } _selectionServiceController;
    BOOL interactiveFormValidationEnabled;
    int validationMessageTimerMagnification;
    float customDeviceScaleFactor;
    struct unique_ptr<WebCore::AlternativeTextUIController, std::default_delete<WebCore::AlternativeTextUIController>> { struct __compressed_pair<WebCore::AlternativeTextUIController *, std::default_delete<WebCore::AlternativeTextUIController>> { struct AlternativeTextUIController *__value_; } __ptr_; } m_alternativeTextUIController;
    struct RetainPtr<NSData> { void *m_ptr; } sourceApplicationAuditData;
    BOOL _didPerformFirstNavigation;
    struct unique_ptr<WebMediaPlaybackTargetPicker, std::default_delete<WebMediaPlaybackTargetPicker>> { struct __compressed_pair<WebMediaPlaybackTargetPicker *, std::default_delete<WebMediaPlaybackTargetPicker>> { struct WebMediaPlaybackTargetPicker *__value_; } __ptr_; } m_playbackTargetPicker;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
