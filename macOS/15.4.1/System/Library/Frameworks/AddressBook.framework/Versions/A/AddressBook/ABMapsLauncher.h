@class ABMapsLaunchRequest;

@interface ABMapsLauncher : NSObject

@property (readonly, nonatomic) ABMapsLaunchRequest *launchRequest;
@property (readonly, nonatomic) ABMapsLauncher *nextLauncher;

+ (id)mapsLauncherWithRequest:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLaunchRequest:(id)a0;
- (id)initWithLaunchRequest:(id)a0 nextLauncher:(id)a1;
- (void)launchMaps;

@end
