@class NSString;

@interface WKPreferences : NSObject <WKObject, NSCopying, NSSecureCoding> {
    struct ObjectStorage<WebKit::WebPreferences> { struct type { unsigned char __lx[128]; } data; } _preferences;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setTelephoneNumberDetectionIsEnabled:) BOOL _telephoneNumberDetectionIsEnabled;
@property (nonatomic, setter=_setStorageBlockingPolicy:) long long _storageBlockingPolicy;
@property (nonatomic, setter=_setCompositingBordersVisible:) BOOL _compositingBordersVisible;
@property (nonatomic, setter=_setCompositingRepaintCountersVisible:) BOOL _compositingRepaintCountersVisible;
@property (nonatomic, setter=_setTiledScrollingIndicatorVisible:) BOOL _tiledScrollingIndicatorVisible;
@property (nonatomic, setter=_setResourceUsageOverlayVisible:) BOOL _resourceUsageOverlayVisible;
@property (nonatomic, setter=_setVisibleDebugOverlayRegions:) unsigned long long _visibleDebugOverlayRegions;
@property (nonatomic, setter=_setLegacyLineLayoutVisualCoverageEnabled:) BOOL _legacyLineLayoutVisualCoverageEnabled;
@property (nonatomic, setter=_setContentChangeObserverEnabled:) BOOL _contentChangeObserverEnabled;
@property (nonatomic, setter=_setAcceleratedDrawingEnabled:) BOOL _acceleratedDrawingEnabled;
@property (nonatomic, setter=_setLargeImageAsyncDecodingEnabled:) BOOL _largeImageAsyncDecodingEnabled;
@property (nonatomic, setter=_setNeedsInAppBrowserPrivacyQuirks:) BOOL _needsInAppBrowserPrivacyQuirks;
@property (nonatomic, setter=_setAnimatedImageAsyncDecodingEnabled:) BOOL _animatedImageAsyncDecodingEnabled;
@property (nonatomic, setter=_setTextAutosizingEnabled:) BOOL _textAutosizingEnabled;
@property (nonatomic, setter=_setDeveloperExtrasEnabled:) BOOL _developerExtrasEnabled;
@property (nonatomic, setter=_setLogsPageMessagesToSystemConsoleEnabled:) BOOL _logsPageMessagesToSystemConsoleEnabled;
@property (nonatomic, setter=_setHiddenPageDOMTimerThrottlingEnabled:) BOOL _hiddenPageDOMTimerThrottlingEnabled;
@property (nonatomic, setter=_setHiddenPageDOMTimerThrottlingAutoIncreases:) BOOL _hiddenPageDOMTimerThrottlingAutoIncreases;
@property (nonatomic, setter=_setPageVisibilityBasedProcessSuppressionEnabled:) BOOL _pageVisibilityBasedProcessSuppressionEnabled;
@property (nonatomic, setter=_setAllowFileAccessFromFileURLs:) BOOL _allowFileAccessFromFileURLs;
@property (nonatomic, setter=_setJavaScriptRuntimeFlags:) unsigned long long _javaScriptRuntimeFlags;
@property (nonatomic, getter=_isStandalone, setter=_setStandalone:) BOOL _standalone;
@property (nonatomic, setter=_setDiagnosticLoggingEnabled:) BOOL _diagnosticLoggingEnabled;
@property (nonatomic, setter=_setDefaultFontSize:) unsigned long long _defaultFontSize;
@property (nonatomic, setter=_setDefaultFixedPitchFontSize:) unsigned long long _defaultFixedPitchFontSize;
@property (copy, nonatomic, setter=_setFixedPitchFontFamily:) NSString *_fixedPitchFontFamily;
@property (nonatomic, setter=_setFullScreenEnabled:) BOOL _fullScreenEnabled;
@property (nonatomic, setter=_setShouldSuppressKeyboardInputDuringProvisionalNavigation:) BOOL _shouldSuppressKeyboardInputDuringProvisionalNavigation;
@property (nonatomic, setter=_setAllowsPictureInPictureMediaPlayback:) BOOL _allowsPictureInPictureMediaPlayback;
@property (nonatomic, setter=_setApplePayCapabilityDisclosureAllowed:) BOOL _applePayCapabilityDisclosureAllowed;
@property (nonatomic, setter=_setLoadsImagesAutomatically:) BOOL _loadsImagesAutomatically;
@property (nonatomic, setter=_setPeerConnectionEnabled:) BOOL _peerConnectionEnabled;
@property (nonatomic, setter=_setMediaDevicesEnabled:) BOOL _mediaDevicesEnabled;
@property (nonatomic, setter=_setGetUserMediaRequiresFocus:) BOOL _getUserMediaRequiresFocus;
@property (nonatomic, setter=_setScreenCaptureEnabled:) BOOL _screenCaptureEnabled;
@property (nonatomic, setter=_setMockCaptureDevicesEnabled:) BOOL _mockCaptureDevicesEnabled;
@property (nonatomic, setter=_setMockCaptureDevicesPromptEnabled:) BOOL _mockCaptureDevicesPromptEnabled;
@property (nonatomic, setter=_setMediaCaptureRequiresSecureConnection:) BOOL _mediaCaptureRequiresSecureConnection;
@property (nonatomic, setter=_setEnumeratingAllNetworkInterfacesEnabled:) BOOL _enumeratingAllNetworkInterfacesEnabled;
@property (nonatomic, setter=_setICECandidateFilteringEnabled:) BOOL _iceCandidateFilteringEnabled;
@property (nonatomic, setter=_setInactiveMediaCaptureStreamRepromptIntervalInMinutes:) double _inactiveMediaCaptureStreamRepromptIntervalInMinutes;
@property (nonatomic, setter=_setInterruptAudioOnPageVisibilityChangeEnabled:) BOOL _interruptAudioOnPageVisibilityChangeEnabled;
@property (nonatomic, setter=_setJavaScriptCanAccessClipboard:) BOOL _javaScriptCanAccessClipboard;
@property (nonatomic, setter=_setDOMPasteAllowed:) BOOL _domPasteAllowed;
@property (nonatomic, setter=_setShouldAllowUserInstalledFonts:) BOOL _shouldAllowUserInstalledFonts;
@property (nonatomic, setter=_setEditableLinkBehavior:) long long _editableLinkBehavior;
@property (nonatomic, setter=_setAVFoundationEnabled:) BOOL _avFoundationEnabled;
@property (nonatomic, setter=_setTextExtractionEnabled:) BOOL _textExtractionEnabled;
@property (nonatomic, setter=_setShouldEnableTextAutosizingBoost:) BOOL _shouldEnableTextAutosizingBoost;
@property (nonatomic, getter=_isSafeBrowsingEnabled, setter=_setSafeBrowsingEnabled:) BOOL _safeBrowsingEnabled;
@property (nonatomic, setter=_setColorFilterEnabled:) BOOL _colorFilterEnabled;
@property (nonatomic, setter=_setPunchOutWhiteBackgroundsInDarkMode:) BOOL _punchOutWhiteBackgroundsInDarkMode;
@property (nonatomic, setter=_setLowPowerVideoAudioBufferSizeEnabled:) BOOL _lowPowerVideoAudioBufferSizeEnabled;
@property (nonatomic, setter=_setShouldIgnoreMetaViewport:) BOOL _shouldIgnoreMetaViewport;
@property (nonatomic, setter=_setVideoQualityIncludesDisplayCompositingEnabled:) BOOL _videoQualityIncludesDisplayCompositingEnabled;
@property (nonatomic, setter=_setDeviceOrientationEventEnabled:) BOOL _deviceOrientationEventEnabled;
@property (nonatomic, setter=_setNeedsSiteSpecificQuirks:) BOOL _needsSiteSpecificQuirks;
@property (nonatomic, setter=_setItpDebugModeEnabled:) BOOL _itpDebugModeEnabled;
@property (nonatomic, setter=_setMediaSourceEnabled:) BOOL _mediaSourceEnabled;
@property (nonatomic, setter=_setSecureContextChecksEnabled:) BOOL _secureContextChecksEnabled;
@property (nonatomic, setter=_setRemotePlaybackEnabled:) BOOL _remotePlaybackEnabled;
@property (nonatomic, setter=_setWebAudioEnabled:) BOOL _webAudioEnabled;
@property (nonatomic, setter=_setAcceleratedCompositingEnabled:) BOOL _acceleratedCompositingEnabled;
@property (nonatomic, setter=_setServiceWorkerEntitlementDisabledForTesting:) BOOL _serviceWorkerEntitlementDisabledForTesting;
@property (nonatomic, setter=_setAccessibilityIsolatedTreeEnabled:) BOOL _accessibilityIsolatedTreeEnabled;
@property (nonatomic, setter=_setSpeechRecognitionEnabled:) BOOL _speechRecognitionEnabled;
@property (nonatomic, setter=_setPrivateClickMeasurementEnabled:) BOOL _privateClickMeasurementEnabled;
@property (nonatomic, setter=_setPrivateClickMeasurementDebugModeEnabled:) BOOL _privateClickMeasurementDebugModeEnabled;
@property (nonatomic, setter=_setPitchCorrectionAlgorithm:) long long _pitchCorrectionAlgorithm;
@property (nonatomic, setter=_setMediaSessionEnabled:) BOOL _mediaSessionEnabled;
@property (nonatomic, getter=_isExtensibleSSOEnabled, setter=_setExtensibleSSOEnabled:) BOOL _extensibleSSOEnabled;
@property (nonatomic, setter=_setRequiresPageVisibilityToPlayAudio:) BOOL _requiresPageVisibilityToPlayAudio;
@property (nonatomic, setter=_setFileSystemAccessEnabled:) BOOL _fileSystemAccessEnabled;
@property (nonatomic, setter=_setStorageAPIEnabled:) BOOL _storageAPIEnabled;
@property (nonatomic, setter=_setAccessHandleEnabled:) BOOL _accessHandleEnabled;
@property (nonatomic, setter=_setNotificationsEnabled:) BOOL _notificationsEnabled;
@property (nonatomic, setter=_setNotificationEventEnabled:) BOOL _notificationEventEnabled;
@property (nonatomic, setter=_setPushAPIEnabled:) BOOL _pushAPIEnabled;
@property (nonatomic, setter=_setModelDocumentEnabled:) BOOL _modelDocumentEnabled;
@property (nonatomic, setter=_setInteractionRegionMinimumCornerRadius:) double _interactionRegionMinimumCornerRadius;
@property (nonatomic, setter=_setInteractionRegionInlinePadding:) double _interactionRegionInlinePadding;
@property (nonatomic, setter=_setRequiresFullscreenToLockScreenOrientation:) BOOL _requiresFullscreenToLockScreenOrientation;
@property (nonatomic, setter=_setMediaPreferredFullscreenWidth:) double _mediaPreferredFullscreenWidth;
@property (nonatomic, setter=_setAppBadgeEnabled:) BOOL _appBadgeEnabled;
@property (nonatomic, setter=_setClientBadgeEnabled:) BOOL _clientBadgeEnabled;
@property (nonatomic, setter=_setVerifyWindowOpenUserGestureFromUIProcess:) BOOL _verifyWindowOpenUserGestureFromUIProcess;
@property (nonatomic, setter=_setManagedMediaSourceEnabled:) BOOL _managedMediaSourceEnabled;
@property (nonatomic, setter=_setManagedMediaSourceLowThreshold:) double _managedMediaSourceLowThreshold;
@property (nonatomic, setter=_setManagedMediaSourceHighThreshold:) double _managedMediaSourceHighThreshold;
@property (nonatomic, setter=_setMediaCapabilityGrantsEnabled:) BOOL _mediaCapabilityGrantsEnabled;
@property (nonatomic, setter=_setAllowPrivacySensitiveOperationsInNonPersistentDataStores:) BOOL _allowPrivacySensitiveOperationsInNonPersistentDataStores;
@property (nonatomic, setter=_setVideoFullscreenRequiresElementFullscreen:) BOOL _videoFullscreenRequiresElementFullscreen;
@property (nonatomic, setter=_setCSSTransformStyleSeparatedEnabled:) BOOL _cssTransformStyleSeparatedEnabled;
@property (nonatomic, setter=_setOverlayRegionsEnabled:) BOOL _overlayRegionsEnabled;
@property (nonatomic, setter=_setSpatialVideoEnabled:) BOOL _spatialVideoEnabled;
@property (nonatomic, setter=_setModelElementEnabled:) BOOL _modelElementEnabled;
@property (nonatomic, setter=_setModelProcessEnabled:) BOOL _modelProcessEnabled;
@property (nonatomic, setter=_setModelNoPortalAttributeEnabled:) BOOL _modelNoPortalAttributeEnabled;
@property (nonatomic, setter=_setRequiresPageVisibilityForVideoToBeNowPlayingForTesting:) BOOL _requiresPageVisibilityForVideoToBeNowPlayingForTesting;
@property (nonatomic, setter=_setWebGLEnabled:) BOOL _webGLEnabled;
@property (nonatomic, setter=_setCanvasUsesAcceleratedDrawing:) BOOL _canvasUsesAcceleratedDrawing;
@property (nonatomic, setter=_setDefaultTextEncodingName:) NSString *_defaultTextEncodingName;
@property (nonatomic, setter=_setAuthorAndUserStylesEnabled:) BOOL _authorAndUserStylesEnabled;
@property (nonatomic, setter=_setDOMTimersThrottlingEnabled:) BOOL _domTimersThrottlingEnabled;
@property (nonatomic, setter=_setWebArchiveDebugModeEnabled:) BOOL _webArchiveDebugModeEnabled;
@property (nonatomic, setter=_setLocalFileContentSniffingEnabled:) BOOL _localFileContentSniffingEnabled;
@property (nonatomic, setter=_setUsesPageCache:) BOOL _usesPageCache;
@property (nonatomic, setter=_setShouldPrintBackgrounds:) BOOL _shouldPrintBackgrounds;
@property (nonatomic, setter=_setWebSecurityEnabled:) BOOL _webSecurityEnabled;
@property (nonatomic, setter=_setUniversalAccessFromFileURLsAllowed:) BOOL _universalAccessFromFileURLsAllowed;
@property (nonatomic, setter=_setTopNavigationToDataURLsAllowed:) BOOL _topNavigationToDataURLsAllowed;
@property (nonatomic, setter=_setSuppressesIncrementalRendering:) BOOL _suppressesIncrementalRendering;
@property (nonatomic, setter=_setCookieEnabled:) BOOL _cookieEnabled;
@property (nonatomic, setter=_setViewGestureDebuggingEnabled:) BOOL _viewGestureDebuggingEnabled;
@property (nonatomic, setter=_setStandardFontFamily:) NSString *_standardFontFamily;
@property (nonatomic, setter=_setBackspaceKeyNavigationEnabled:) BOOL _backspaceKeyNavigationEnabled;
@property (nonatomic, setter=_setAllowsInlineMediaPlayback:) BOOL _allowsInlineMediaPlayback;
@property (nonatomic, setter=_setApplePayEnabled:) BOOL _applePayEnabled;
@property (nonatomic, setter=_setDNSPrefetchingEnabled:) BOOL _dnsPrefetchingEnabled;
@property (nonatomic, setter=_setInlineMediaPlaybackRequiresPlaysInlineAttribute:) BOOL _inlineMediaPlaybackRequiresPlaysInlineAttribute;
@property (nonatomic, setter=_setInvisibleMediaAutoplayNotPermitted:) BOOL _invisibleMediaAutoplayNotPermitted;
@property (nonatomic, setter=_setLegacyEncryptedMediaAPIEnabled:) BOOL _legacyEncryptedMediaAPIEnabled;
@property (nonatomic, setter=_setMainContentUserGestureOverrideEnabled:) BOOL _mainContentUserGestureOverrideEnabled;
@property (nonatomic, setter=_setNeedsStorageAccessFromFileURLsQuirk:) BOOL _needsStorageAccessFromFileURLsQuirk;
@property (nonatomic, setter=_setPDFPluginEnabled:) BOOL _pdfPluginEnabled;
@property (nonatomic, setter=_setRequiresUserGestureForAudioPlayback:) BOOL _requiresUserGestureForAudioPlayback;
@property (nonatomic, setter=_setRequiresUserGestureForVideoPlayback:) BOOL _requiresUserGestureForVideoPlayback;
@property (nonatomic, setter=_setServiceControlsEnabled:) BOOL _serviceControlsEnabled;
@property (nonatomic, setter=_setShowsToolTipOverTruncatedText:) BOOL _showsToolTipOverTruncatedText;
@property (nonatomic, setter=_setTextAreasAreResizable:) BOOL _textAreasAreResizable;
@property (nonatomic, setter=_setUseGiantTiles:) BOOL _useGiantTiles;
@property (nonatomic, setter=_setWantsBalancedSetDefersLoadingBehavior:) BOOL _wantsBalancedSetDefersLoadingBehavior;
@property (nonatomic, setter=_setAggressiveTileRetentionEnabled:) BOOL _aggressiveTileRetentionEnabled;
@property (nonatomic, setter=_setAppNapEnabled:) BOOL _appNapEnabled;
@property (nonatomic) BOOL javaEnabled;
@property (nonatomic) BOOL plugInsEnabled;
@property (nonatomic) BOOL javaScriptEnabled;
@property (nonatomic, setter=_setShouldAllowDesignSystemUIFonts:) BOOL _shouldAllowDesignSystemUIFonts;
@property (nonatomic, setter=_setRequestAnimationFrameEnabled:) BOOL _requestAnimationFrameEnabled;
@property (nonatomic, setter=_setSubpixelAntialiasedLayerTextEnabled:) BOOL _subpixelAntialiasedLayerTextEnabled;
@property (nonatomic, setter=_setPageCacheSupportsPlugins:) BOOL _pageCacheSupportsPlugins;
@property (nonatomic, setter=_setAsynchronousPluginInitializationEnabled:) BOOL _asynchronousPluginInitializationEnabled;
@property (nonatomic, setter=_setArtificialPluginInitializationDelayEnabled:) BOOL _artificialPluginInitializationDelayEnabled;
@property (nonatomic, setter=_setExperimentalPlugInSandboxProfilesEnabled:) BOOL _experimentalPlugInSandboxProfilesEnabled;
@property (nonatomic, setter=_setPlugInSnapshottingEnabled:) BOOL _plugInSnapshottingEnabled;
@property (nonatomic, setter=_setSubpixelCSSOMElementMetricsEnabled:) BOOL _subpixelCSSOMElementMetricsEnabled;
@property (nonatomic, setter=_setDisplayListDrawingEnabled:) BOOL _displayListDrawingEnabled;
@property (nonatomic, setter=_setOfflineApplicationCacheIsEnabled:) BOOL _offlineApplicationCacheIsEnabled;
@property (nonatomic, setter=_setMediaStreamEnabled:) BOOL _mediaStreamEnabled;
@property (nonatomic, setter=_setUseSystemAppearance:) BOOL _useSystemAppearance;
@property (nonatomic) double minimumFontSize;
@property (nonatomic) BOOL javaScriptCanOpenWindowsAutomatically;
@property (nonatomic, getter=isFraudulentWebsiteWarningEnabled) BOOL fraudulentWebsiteWarningEnabled;
@property (nonatomic) BOOL shouldPrintBackgrounds;
@property (nonatomic) BOOL tabFocusesLinks;
@property (nonatomic, getter=isTextInteractionEnabled) BOOL textInteractionEnabled;
@property (nonatomic, getter=isSiteSpecificQuirksModeEnabled) BOOL siteSpecificQuirksModeEnabled;
@property (nonatomic, getter=isElementFullscreenEnabled) BOOL elementFullscreenEnabled;
@property (nonatomic) long long inactiveSchedulingPolicy;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)_experimentalFeatures;
+ (id)_features;
+ (id)_internalDebugFeatures;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEnabledForFeature:(id)a0;
- (void)_setEnabled:(BOOL)a0 forFeature:(id)a1;
- (void)_disableMediaPlaybackRelatedFeatures;
- (void)_disableRichJavaScriptFeatures;
- (BOOL)_isEnabledForExperimentalFeature:(id)a0;
- (BOOL)_isEnabledForInternalDebugFeature:(id)a0;
- (BOOL)_javaEnabledForLocalFiles;
- (void)_setEnabled:(BOOL)a0 forExperimentalFeature:(id)a1;
- (void)_setEnabled:(BOOL)a0 forInternalDebugFeature:(id)a1;
- (void)_setJavaEnabledForLocalFiles:(BOOL)a0;

@end
