@interface SASoftwareUpdateManager : NSObject <SASoftwareUpdateManagerProtocol>

- (BOOL)requiresDeferredMandatoryUpdate;
- (BOOL)forceDeferredMandatoryUpdate;
- (BOOL)forceNoMandatoryUpdateFound;

@end
