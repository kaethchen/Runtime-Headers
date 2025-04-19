@class NSUUID;

@interface MNRouteDistanceInfo : NSObject <NSSecureCoding> {
    unsigned long long _legIndex;
    NSUUID *_routeID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double distanceRemainingToEndOfLeg;
@property (readonly, nonatomic) double distanceRemainingToEndOfRoute;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDistanceRemainingToEndOfLeg:(double)a0 distanceRemainingToEndOfRoute:(double)a1 forLegIndex:(unsigned long long)a2 forRouteID:(id)a3;

@end
