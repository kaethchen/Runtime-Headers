@class GEODirectionsRequest, GEODirectionsRequester;

@interface GEODirectionsServiceRequest : NSObject {
    GEODirectionsRequest *_directionsRequest;
    GEODirectionsRequester *_directionsRequester;
    BOOL _isCancelled;
}

- (void).cxx_destruct;
- (void)cancel;

@end
