@class GEOApplicationAuditToken, GEOMapFeatureAccess, GEORoadMatcherCandidateSegment;

@interface GEORoadMatcher : NSObject {
    GEOMapFeatureAccess *_mapFeatureAccess;
}

@property (retain, nonatomic) GEORoadMatcherCandidateSegment *previousMatch;
@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) BOOL useRawLocations;
@property (nonatomic) double searchRadius;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAuditToken:(id)a0;
- (id)matchLocation:(id)a0 forTransportType:(int)a1;
- (id)_bestCandidateSegmentForLocation:(id)a0 transportType:(int)a1;

@end
