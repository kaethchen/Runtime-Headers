@interface GKAppLevelSignInVisibility : NSObject

+ (void)didShowBanner;
+ (void)didShowFullscreen;
+ (void)fetchAppLevelVisibilityConstraintsWithHandler:(id /* block */)a0;
+ (void)fetchConfigsWithHandler:(id /* block */)a0;

@end
