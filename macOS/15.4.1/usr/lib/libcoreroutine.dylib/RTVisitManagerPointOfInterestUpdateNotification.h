@class RTPlaceInference;

@interface RTVisitManagerPointOfInterestUpdateNotification : RTNotification

@property (readonly, nonatomic) RTPlaceInference *placeInference;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPlaceInference:(id)a0;

@end
