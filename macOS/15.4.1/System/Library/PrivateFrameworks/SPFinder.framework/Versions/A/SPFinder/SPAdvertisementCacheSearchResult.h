@class NSArray, SPSearchResultMarker, NSError;

@interface SPAdvertisementCacheSearchResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *beaconAdvertisements;
@property (retain, nonatomic) SPSearchResultMarker *searchResultMarker;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBeaconAdvertisements:(id)a0 searchResultMarker:(id)a1 error:(id)a2;

@end
