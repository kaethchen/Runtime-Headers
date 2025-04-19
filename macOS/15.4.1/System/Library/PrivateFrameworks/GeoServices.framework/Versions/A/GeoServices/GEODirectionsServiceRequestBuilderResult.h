@class NSArray, GEODirectionsRequest, NSError;

@interface GEODirectionsServiceRequestBuilderResult : NSObject {
    NSArray *_waypoints;
    GEODirectionsRequest *_directionsRequest;
    NSError *_error;
}

+ (id)resultWithError:(id)a0;
+ (id)resultWithWaypoints:(id)a0 directionsRequest:(id)a1;

- (void).cxx_destruct;

@end
