@class GKLimitedPresentationManager;

@interface GKSignInVisibilityManager : NSObject

@property (retain) GKLimitedPresentationManager *fullscreenManager;
@property (retain) GKLimitedPresentationManager *bannerManager;

- (void).cxx_destruct;
- (void)reset;
- (void)bannerDisabledWithConfig:(id)a0 handler:(id /* block */)a1;
- (void)bannerDisabledWithConfig:(id)a0 scope:(long long)a1 handler:(id /* block */)a2;
- (void)didShowBanner;
- (void)didShowFullscreen;
- (id)initWithFullscreenDefaultsKey:(id)a0 bannerDefaultsKey:(id)a1;
- (id)initWithPersistence;
- (id)initWithoutPersistence;
- (void)loginDisabledWithConfig:(id)a0 handler:(id /* block */)a1;
- (void)loginDisabledWithConfig:(id)a0 scope:(long long)a1 handler:(id /* block */)a2;
- (void)promptsDisabledWithConfig:(id)a0 handler:(id /* block */)a1;
- (void)promptsDisabledWithConfig:(id)a0 scope:(long long)a1 handler:(id /* block */)a2;

@end
