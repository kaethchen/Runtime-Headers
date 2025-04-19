@class NSString;

@interface PLRevGeoPlaceAnnotation : NSObject <NSCopying>

@property (nonatomic) int placeLevel;
@property (retain, nonatomic) NSString *placeName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
