@class GEOLocation;

@interface GEORoadCoursePenalty : NSObject <GEORoadMatcherPenalty> {
    GEOLocation *_location;
    BOOL _useRawLocations;
}

@property (nonatomic) BOOL useRawLocations;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0;
- (double)penaltyForCandidate:(id)a0;

@end
