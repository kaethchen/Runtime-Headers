@class NSString, GEOApplicationAuditToken, MNActiveRouteInfo, MNLocation;

@interface MNNavigationSimulationParameters : NSObject

@property (nonatomic) long long simulationType;
@property (retain, nonatomic) MNActiveRouteInfo *initialRoute;
@property (retain, nonatomic) MNLocation *startingLocation;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (copy, nonatomic) NSString *requestingAppIdentifier;

- (void).cxx_destruct;

@end
