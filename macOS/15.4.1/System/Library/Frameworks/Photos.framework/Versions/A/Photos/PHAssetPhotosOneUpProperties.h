@class NSData, NSString;

@interface PHAssetPhotosOneUpProperties : PHAssetPropertySet

@property (readonly, nonatomic) BOOL reverseLocationDataIsValid;
@property (readonly, nonatomic) NSData *reverseLocationData;
@property (readonly, nonatomic) BOOL shiftedLocationIsValid;
@property (readonly, nonatomic) NSString *addressString;
@property (readonly, nonatomic) unsigned long long variationSuggestionStates;
@property (readonly, nonatomic) short viewPresentation;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)_locationInfo;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (id)localizedGeoDescriptionIsHome:(BOOL *)a0;
- (id)placeNamesForLocalizedDetailedDescriptionIsHome:(BOOL *)a0;

@end
