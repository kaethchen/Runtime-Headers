@class GEOComposedRoute, NSArray, GEODirectionsError, NSError, GEOAddressObject;

@interface _MNRouteEditorConvertToNavigableRouteStepResult : NSObject

@property (retain, nonatomic) NSArray *waypoints;
@property (retain, nonatomic) GEOAddressObject *address;
@property (retain, nonatomic) GEOComposedRoute *finalizedRoute;
@property (retain, nonatomic) NSError *stepError;
@property (retain, nonatomic) GEODirectionsError *directionsError;

- (void).cxx_destruct;

@end
