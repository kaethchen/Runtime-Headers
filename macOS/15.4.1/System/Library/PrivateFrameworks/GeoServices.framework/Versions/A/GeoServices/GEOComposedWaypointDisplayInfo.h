@class GEOPBTransitArtwork, NSString, GEOARInfo, GEOComposedString, GEOWaypointInfo, GEOComposedRouteEVChargingStationInfo, GEOStyleAttributes;

@interface GEOComposedWaypointDisplayInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GEOARInfo *arInfo;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct { double latitude; double longitude; } position;
@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (copy, nonatomic) GEOComposedString *waypointCaption;
@property (retain, nonatomic) GEOComposedRouteEVChargingStationInfo *evChargingInfo;
@property (retain, nonatomic) GEOWaypointInfo *waypointInfo;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_initPositionWithGeoWaypointInfo:(id)a0 waypoint:(id)a1;
- (id)initWithGeoWaypointInfo:(id)a0 waypoint:(id)a1;

@end
