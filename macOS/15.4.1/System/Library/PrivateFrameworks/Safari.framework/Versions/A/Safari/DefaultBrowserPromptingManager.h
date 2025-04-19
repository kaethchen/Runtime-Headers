@interface DefaultBrowserPromptingManager : NSObject {
    BOOL _setupComplete;
    BOOL _shouldForceShowBanner;
}

@property (nonatomic) int promptingState;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)performDelayedLaunchOperations;
- (BOOL)_shouldShowDefaultBrowserBanner;
- (double)_intervalToWaitBeforeFourthPrompt;
- (double)_intervalToWaitBeforeThirdPrompt;
- (void)_intializePromptingStateFromUserDefaults;
- (void)_setDateOfLastPromptToNow;
- (void)_showDefaultBrowserBannerIfNecessary;
- (void)forceShowDefaultBrowserBannerWhenReady;
- (void)preventFuturePromptsUntilNextSafariUpdate;
- (void)willHideDefaultBrowserBanner;

@end
