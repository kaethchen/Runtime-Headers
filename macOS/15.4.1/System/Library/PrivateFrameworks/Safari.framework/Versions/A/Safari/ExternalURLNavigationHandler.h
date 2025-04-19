@class NSDate;
@protocol ExternalURLNavigationDelegate;

@interface ExternalURLNavigationHandler : NSObject {
    unsigned long long _requestGroup;
    BOOL _shouldSuppressAutomaticExternalSchemeNavigations;
    NSDate *_recentExternalSchemeNavigationWindowStart;
    unsigned long long _recentExternalSchemeNavigations;
}

@property (weak, nonatomic) id<ExternalURLNavigationDelegate> delegate;

- (void).cxx_destruct;
- (void)reset;
- (long long)_URLTypeForURL:(id)a0;
- (void)_determineIfPageIsTryingToSpamUserWithExternalSchemeNavigations;
- (void)_enqueueOrPresentDialogWithConfiguration:(id)a0 externalURL:(id)a1 applicationURL:(id)a2 tabDialogPresenter:(id)a3;
- (id)_originStringFromSourceFrame:(id)a0 externalURLType:(long long)a1;
- (long long)handleNavigationToExternalURL:(id)a0 withTabDialogPresenter:(id)a1 sourceFrame:(id)a2 userInitiatedAction:(id)a3 inLockdownMode:(BOOL)a4 browsingMode:(unsigned long long)a5;
- (id /* block */)openApplicationAlwaysAllowHandlerWithScheme:(id)a0 fromDomain:(id)a1 completionHandler:(id /* block */)a2;

@end
