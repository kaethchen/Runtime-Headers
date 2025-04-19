@class NSString, NSMutableSet, NSArray;

@interface FCLocalRegion : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableSet *areas;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *autoFavoriteTagIDs;
@property (readonly, nonatomic) NSArray *localVersionedTagIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)addLocalArea:(id)a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })centerLocationCoordinateForEntireRegion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForEntireRegion;

@end
