@class NSArray;

@interface GEORawRouteGeometry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *paths;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGeoWaypointRoute:(id)a0;
- (id)initWithRawData:(id)a0;
- (void)pathMatcherNoMatchRangesWithHandler:(id /* block */)a0;

@end
