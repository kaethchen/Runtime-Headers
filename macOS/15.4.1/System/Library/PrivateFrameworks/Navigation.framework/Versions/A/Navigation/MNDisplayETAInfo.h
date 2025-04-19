@class NSUUID, NSArray, NSDate;

@interface MNDisplayETAInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long displayRemainingMinutesToEndOfRoute;
@property (readonly, nonatomic) NSDate *displayETAToEndOfRoute;
@property (readonly, nonatomic) unsigned long long displayRemainingMinutesToEndOfLeg;
@property (readonly, nonatomic) NSDate *displayETAToEndOfLeg;
@property (readonly, nonatomic) unsigned long long legIndex;
@property (retain, nonatomic) NSUUID *routeID;
@property (retain, nonatomic) NSArray *legInfos;
@property (nonatomic) unsigned long long remainingMinutesToEndOfRoute;
@property (retain, nonatomic) NSDate *etaToEndOfRoute;
@property (readonly, nonatomic) BOOL isUsingServerDisplayETA;

+ (id)dateFormatter;
+ (id)displayETAInfoForRouteInfo:(id)a0 routeCoordinate:(struct { unsigned int x0; float x1; })a1;
+ (BOOL)isDisplayDate:(id)a0 equalTo:(id)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayETAToEndOfLeg:(id)a0 displayRemainingMinutesToEndOfLeg:(unsigned long long)a1 displayETAToEndOfRoute:(id)a2 displayRemainingMinutesToEndOfRoute:(unsigned long long)a3;

@end
