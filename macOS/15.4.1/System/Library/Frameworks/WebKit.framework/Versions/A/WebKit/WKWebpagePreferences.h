@class NSString;

@interface WKWebpagePreferences : NSObject <WKObject> {
    struct ObjectStorage<API::WebsitePolicies> { struct type { unsigned char __lx[176]; } data; } _websitePolicies;
}

@property (class, readonly, nonatomic) WKWebpagePreferences *defaultPreferences;

@property (nonatomic) long long preferredContentMode;
@property (nonatomic) BOOL allowsContentJavaScript;
@property (nonatomic, getter=isLockdownModeEnabled) BOOL lockdownModeEnabled;
@property (nonatomic) long long preferredHTTPSNavigationPolicy;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;

- (void)dealloc;
- (id)init;
- (long long)_autoplayPolicy;
- (id)_activeContentRuleListActionPatterns;
- (BOOL)_allowPrivacyProxy;
- (BOOL)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
- (unsigned long long)_allowedAutoplayQuirks;
- (id)_applicationNameForUserAgentWithModernCompatibility;
- (BOOL)_captivePortalModeEnabled;
- (unsigned long long)_colorSchemePreference;
- (BOOL)_contentBlockersEnabled;
- (id)_customHeaderFields;
- (id)_customNavigatorPlatform;
- (id)_customUserAgent;
- (id)_customUserAgentAsSiteSpecificQuirks;
- (unsigned long long)_deviceOrientationAndMotionAccessPolicy;
- (unsigned long long)_modalContainerObservationPolicy;
- (unsigned long long)_mouseEventPolicy;
- (BOOL)_networkConnectionIntegrityEnabled;
- (unsigned long long)_networkConnectionIntegrityPolicy;
- (unsigned long long)_popUpPolicy;
- (BOOL)_pushAndNotificationAPIEnabled;
- (void)_setActiveContentRuleListActionPatterns:(id)a0;
- (void)_setAllowPrivacyProxy:(BOOL)a0;
- (void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(BOOL)a0;
- (void)_setAllowedAutoplayQuirks:(unsigned long long)a0;
- (void)_setApplicationNameForUserAgentWithModernCompatibility:(id)a0;
- (void)_setAutoplayPolicy:(long long)a0;
- (void)_setCaptivePortalModeEnabled:(BOOL)a0;
- (void)_setColorSchemePreference:(unsigned long long)a0;
- (void)_setContentBlockersEnabled:(BOOL)a0;
- (void)_setContentRuleListsEnabled:(BOOL)a0 exceptions:(id)a1;
- (void)_setCustomHeaderFields:(id)a0;
- (void)_setCustomNavigatorPlatform:(id)a0;
- (void)_setCustomUserAgent:(id)a0;
- (void)_setCustomUserAgentAsSiteSpecificQuirks:(id)a0;
- (void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)a0;
- (void)_setModalContainerObservationPolicy:(unsigned long long)a0;
- (void)_setMouseEventPolicy:(unsigned long long)a0;
- (void)_setNetworkConnectionIntegrityEnabled:(BOOL)a0;
- (void)_setNetworkConnectionIntegrityPolicy:(unsigned long long)a0;
- (void)_setPopUpPolicy:(unsigned long long)a0;
- (void)_setPushAndNotificationAPIEnabled:(BOOL)a0;
- (void)_setUserContentController:(id)a0;
- (void)_setVisibilityAdjustmentSelectors:(id)a0;
- (void)_setVisibilityAdjustmentSelectorsIncludingShadowHosts:(id)a0;
- (void)_setWebsiteDataStore:(id)a0;
- (id)_userContentController;
- (id)_visibilityAdjustmentSelectors;
- (id)_visibilityAdjustmentSelectorsIncludingShadowHosts;
- (id)_websiteDataStore;

@end
