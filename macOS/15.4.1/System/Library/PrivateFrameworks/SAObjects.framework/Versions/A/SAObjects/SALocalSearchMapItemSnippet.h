@class NSArray, NSString, NSNumber, SALocation;

@interface SALocalSearchMapItemSnippet : SAUISnippet

@property (nonatomic) BOOL chainResultSet;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *providerCommand;
@property (copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;
@property (copy, nonatomic) NSString *responseViewId;
@property (nonatomic) BOOL searchAlongRoute;
@property (retain, nonatomic) SALocation *searchRegionCenter;
@property (copy, nonatomic) NSNumber *userCurrentLocation;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
