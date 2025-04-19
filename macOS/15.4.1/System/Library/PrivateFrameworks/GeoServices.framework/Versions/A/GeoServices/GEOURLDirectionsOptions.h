@class NSNumber;

@interface GEOURLDirectionsOptions : NSObject

@property (readonly, nonatomic) BOOL avoidTolls;
@property (readonly, nonatomic) BOOL avoidHighways;
@property (readonly, nonatomic) BOOL avoidHills;
@property (readonly, nonatomic) BOOL avoidBusyRoads;
@property (readonly, nonatomic) BOOL avoidStairs;
@property (readonly, nonatomic) BOOL transitPreferBus;
@property (readonly, nonatomic) BOOL transitPreferSubway;
@property (readonly, nonatomic) BOOL transitPreferCommuter;
@property (readonly, nonatomic) BOOL transitPreferFerry;
@property (readonly, nonatomic) BOOL hasDrivingPreferences;
@property (readonly, nonatomic) BOOL hasWalkingOrCyclingPreferences;
@property (readonly, nonatomic) BOOL hasTransitPreferences;
@property (copy, nonatomic) NSNumber *navigationAutoLaunchDelay;

- (void).cxx_destruct;
- (id)avoidOptionsString;
- (void)setAvoidOptions:(id)a0;
- (void)setTransitOptions:(id)a0;
- (id)transitOptionsString;

@end
