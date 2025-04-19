@class NSUUID, NSString;

@interface CLRegion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *deviceId;
@property (readonly, copy, nonatomic) NSString *handoffTag;
@property (copy, nonatomic) NSString *onBehalfOfBundleId;
@property BOOL conservativeEntry;
@property int referenceFrame;
@property BOOL emergency;
@property int type;
@property (readonly) struct CLLocationCoordinate2D { double latitude; double longitude; } center;
@property (readonly) double radius;
@property (readonly, copy, nonatomic) NSString *identifier;
@property BOOL notifyOnEntry;
@property BOOL notifyOnExit;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)containsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)initCircularRegionWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2;
- (id)initWithClientRegion:(struct { char x0[512]; char x1[512]; char x2[512]; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; union { struct { char x0[512]; unsigned short x1; unsigned short x2; int x3; BOOL x4; } x0; struct { struct { double x0; double x1; } x0; double x1; double x2; int x3; BOOL x4; BOOL x5; } x1; struct { struct { double x0; double x1; } x0[101]; int x1; int x2; BOOL x3; } x2; } x8; })a0;
- (id)initWithIdentifier:(id)a0 andRegionType:(int)a1;
- (id)initWithIdentifier:(id)a0 onBehalfOf:(id)a1 regionType:(int)a2 notifyOnEntry:(BOOL)a3 notifyOnExit:(BOOL)a4 emergency:(BOOL)a5;

@end
