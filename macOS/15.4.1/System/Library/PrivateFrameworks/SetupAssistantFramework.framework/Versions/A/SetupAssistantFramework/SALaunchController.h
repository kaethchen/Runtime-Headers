@protocol SASoftwareUpdateManagerProtocol, SACookieHandlingProtocol;

@interface SALaunchController : NSObject <SALaunchProtocol>

@property (readonly) id<SACookieHandlingProtocol> cookieHandler;
@property (readonly) id<SASoftwareUpdateManagerProtocol> softwareUpdateManager;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)launchReason;
- (id)initWithCookieHandler:(id)a0 softwareUpdateManager:(id)a1;
- (BOOL)needsToRun;
- (BOOL)repairMacBuddyCookieIfNeeded;

@end
