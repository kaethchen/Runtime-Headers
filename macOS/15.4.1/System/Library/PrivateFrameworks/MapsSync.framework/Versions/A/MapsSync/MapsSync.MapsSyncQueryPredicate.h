@interface MapsSync.MapsSyncQueryPredicate : NSCompoundPredicate

@property (nonatomic, readonly) Class classForCoder;

+ (Class)classForKeyedUnarchiver;
+ (id)mapsFavoritesPredicateWithHidden:(BOOL)a0 includeNearbyTransit:(BOOL)a1;
+ (id)queryPredicateWithFormat:(id)a0 argumentArray:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 subpredicates:(id)a1;
- (id)initWithCenterLatitude:(double)a0 centerLongitude:(double)a1 squareSideLengthMeters:(double)a2;
- (id)not;
- (id)initWithAnd:(id)a0;
- (id)initWithFormat:(id)a0 args:(id)a1;
- (id)initWithMapItem:(id)a0 customName:(id)a1;
- (id)initWithMinLatitude:(double)a0 maxLatitude:(double)a1 minLongitude:(double)a2 maxLongitude:(double)a3;
- (id)initWithNot:(id)a0;
- (id)initWithOr:(id)a0;

@end
