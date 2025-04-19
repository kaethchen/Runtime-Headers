@class GEOComposedRoute, GEODirectionsRequest, GEODirectionsError, NSError;

@interface _MNRouteEditorRequestGeometryStepResult : NSObject

@property (retain, nonatomic) GEOComposedRoute *route;
@property (retain, nonatomic) GEODirectionsRequest *directionsRequest;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) GEODirectionsError *directionsError;

- (void).cxx_destruct;

@end
