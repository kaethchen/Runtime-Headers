@class NSNumber, NSString, NSSet;

@interface GeoKitPlace : NSManagedObject

@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *geonameid;
@property (retain, nonatomic) NSNumber *population;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *embargo;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *localizedNames;

+ (id)arrayWithPopulationSortDescriptor;
+ (id)populationSortDescriptor;

- (id)displayName;
- (BOOL)isEqualToPlace:(id)a0;
- (id)_displayNameWithSelector:(SEL)a0;
- (id)localizedNamesDumpDictionary;
- (struct CGPoint { double x0; double x1; })longLatPoint;

@end
