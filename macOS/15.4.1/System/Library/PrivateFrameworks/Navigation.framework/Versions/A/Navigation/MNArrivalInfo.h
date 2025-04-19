@class MNVehicleParkingInfo, GEOComposedWaypoint;

@interface MNArrivalInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long arrivalState;
@property (readonly, nonatomic) unsigned long long legIndex;
@property (readonly, nonatomic) GEOComposedWaypoint *destination;
@property (readonly, nonatomic) MNVehicleParkingInfo *vehicleParkingInfo;
@property (readonly, nonatomic) BOOL isInArrivalState;
@property (readonly, nonatomic) BOOL isInParkingState;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDestination:(id)a0;
- (void)setLegIndex:(unsigned long long)a0;
- (void)setArrivalState:(long long)a0;
- (void)setVehicleParkingInfo:(id)a0;

@end
