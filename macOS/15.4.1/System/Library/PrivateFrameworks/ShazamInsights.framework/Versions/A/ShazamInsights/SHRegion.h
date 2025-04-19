@class NSString, CLLocation;

@interface SHRegion : NSObject

@property (readonly, copy) NSString *geohash;
@property (readonly) CLLocation *location;

- (void).cxx_destruct;
- (id)initWithLocation:(id)a0;
- (id)initWithGeohash:(id)a0;

@end
