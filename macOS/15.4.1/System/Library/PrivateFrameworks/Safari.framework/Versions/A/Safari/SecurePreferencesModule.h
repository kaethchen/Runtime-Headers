@class NSView, SLSecureCursorAssertion, NSOcclusionDetectionView;

@interface SecurePreferencesModule : PreferencesModule {
    SLSecureCursorAssertion *_cursorAssertion;
    NSOcclusionDetectionView *_occlusionDetectionView;
    BOOL _windowIsOccluded;
    id _occlusionValidationToken;
}

@property (weak, nonatomic) NSView *viewToSecure;
@property (readonly, nonatomic) BOOL canTrustUserInteraction;

- (void).cxx_destruct;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;
- (void)_prepareOcclusionDetectionView;
- (void)_prepareSecureCursorAssertion;
- (void)_updateSecureAssertionState:(id)a0;
- (void)_viewDidBecomeOccluded:(id)a0;
- (void)_viewDidBecomeUnoccluded:(id)a0;
- (void)toggleSettingEnsuringTrustedUserInteraction:(BOOL)a0 authorizationRight:(int)a1 toggleBlock:(id /* block */)a2 updateBlock:(id /* block */)a3;

@end
