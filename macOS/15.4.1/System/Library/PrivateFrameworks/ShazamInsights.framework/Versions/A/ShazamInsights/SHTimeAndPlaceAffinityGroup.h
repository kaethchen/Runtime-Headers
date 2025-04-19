@class NSDictionary, NSArray, SHAffinityGroup;

@interface SHTimeAndPlaceAffinityGroup : NSObject

@property (readonly) NSDictionary *geohashKeyedRegions;
@property (readonly) NSArray *regions;
@property (readonly) SHAffinityGroup *affinityGroup;

- (void).cxx_destruct;
- (id)initWithRegions:(id)a0 affinityGroup:(id)a1;
- (id)regionsForGeohash:(id)a0;

@end
