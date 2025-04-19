@class NSArray;

@interface GEOComposedRouteLaneInfo : NSObject <NSSecureCoding> {
    BOOL _good;
    BOOL _hov;
    BOOL _preferred;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasDirections;
@property (copy, nonatomic) NSArray *directions;
@property (readonly, nonatomic) BOOL isLaneForManeuver;
@property (readonly, nonatomic) BOOL isHOVLane;
@property (readonly, nonatomic) BOOL isPreferredLaneForManeuver;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLaneInfo:(id)a0;

@end
