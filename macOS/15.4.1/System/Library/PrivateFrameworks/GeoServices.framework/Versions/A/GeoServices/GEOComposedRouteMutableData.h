@class GEOComposedRouteTraffic, NSArray, NSDictionary;

@interface GEOComposedRouteMutableData : NSObject <NSSecureCoding> {
    NSDictionary *_stepsIDToEVInfos;
    NSDictionary *_legIndexToChargingStationInfos;
    NSDictionary *_originDisplayInfos;
    NSDictionary *_destinationDisplayInfos;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GEOComposedRouteTraffic *traffic;
@property (retain, nonatomic) NSArray *trafficDelayInfos;
@property (retain, nonatomic) NSArray *updateableCameraInfos;
@property (copy, nonatomic) NSArray *rideSelections;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)chargingStationInfoForLegIndex:(unsigned long long)a0;
- (id)destinationDisplayInfoForLeg:(unsigned long long)a0;
- (id)evInfoForStepID:(unsigned long long)a0;
- (void)initializeForRoute:(id)a0;
- (id)originDisplayInfoForLeg:(unsigned long long)a0;
- (void)updateForRoute:(id)a0 etaRoute:(id)a1;

@end
