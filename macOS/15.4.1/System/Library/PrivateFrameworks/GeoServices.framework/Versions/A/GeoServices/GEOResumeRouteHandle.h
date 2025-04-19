@class GEOOriginalWaypointRoute, NSData;

@interface GEOResumeRouteHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GEOOriginalWaypointRoute *routeGeometry;
@property (retain, nonatomic) NSData *serverSessionState;
@property (nonatomic) BOOL hasVisitedFirstStop;

+ (id)resumeRouteHandleStorageFromResumeRouteHandle:(id)a0;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGEOStorageResumeRouteHandle:(id)a0;
- (id)resumeRouteHandleStorage;

@end
