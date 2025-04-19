@class _WKUserInitiatedAction, NSTimer, NSDate;

@interface WBSURLSpoofingMitigator : NSObject {
    NSDate *_dateOfLastSuspiciousProvisionalNavigationInterruption;
    unsigned long long _recentlyInterruptedNavigationCount;
    _WKUserInitiatedAction *_userInitiatedAction;
    NSTimer *_timerForRevertingToCommittedURL;
    BOOL _preferShowingCommittedURLForChromeInitiatedLoad;
}

@property (readonly, nonatomic) BOOL UIShouldReflectCommittedURLInsteadOfCurrentURL;
@property (nonatomic) long long navigationSource;

+ (BOOL)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;

- (void).cxx_destruct;
- (void)didCommitNavigation;
- (void)didFailProvisionalNavigationWithError:(id)a0;
- (void)didStartProvisionalNavigationWithUserInitiatedAction:(id)a0;
- (void)willStartNewBrowserChromeInitiatedNavigation;
- (void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
- (void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(BOOL)a0;
- (void)_stopTrackingInterruptedProvisionalNavigations;
- (void)reflectCommittedURLIfPossible;

@end
