@class NSString, MNDepartureUpdater;

@interface __MNDepartureMinimumArrivalDistanceCondition : NSObject <__MNDepartureCondition> {
    MNDepartureUpdater *_updater;
    double _closestDistanceToWaypoint;
    double _threshold;
}

@property (readonly, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithUpdater:(id)a0 distanceThreshold:(double)a1;
- (double)scoreForLocation:(id)a0;

@end
