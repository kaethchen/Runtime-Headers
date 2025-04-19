@class NSString, NSViewController;
@protocol GKOnboardingFlowDelegate;

@interface GKOnboardingController : NSObject

@property (class, readonly, nonatomic) GKOnboardingController *shared;

@property (retain) NSViewController *sheetPresentingViewController;
@property (copy, nonatomic) NSString *gameBundleId;
@property (weak, nonatomic) id<GKOnboardingFlowDelegate> delegate;
@property unsigned long long origin;
@property BOOL invokedFromSystemSettings;

+ (id)describePlayerComparisonsBetween:(id)a0 and:(id)a1;

- (void).cxx_destruct;
- (void)presentFriendSuggestionsScreen:(id)a0;
- (void)dismissPresentingSheet;
- (id)landingViewControllerWithGameBundleId:(id)a0;
- (void)presentContactsIntegrationConsentScreen:(id)a0;
- (void)presentPersonalizationScreen:(id)a0;
- (void)presentViewController:(id)a0 presentingViewController:(id)a1;

@end
