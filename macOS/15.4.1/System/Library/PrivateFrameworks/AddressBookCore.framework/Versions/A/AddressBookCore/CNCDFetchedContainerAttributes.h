@interface CNCDFetchedContainerAttributes : NSObject

@property (readonly) int iOSLegacyIdentifier;
@property (readonly) BOOL isGuardianRestricted;

- (id)initWithFetchedCNCDContainers:(id)a0;

@end
