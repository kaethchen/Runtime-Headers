@class NSData, NSString, NSNumber;

@interface MSUserRoute : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _addressObject;
    void /* unknown type, empty encoding */ _customName;
    void /* unknown type, empty encoding */ _customNote;
    void /* unknown type, empty encoding */ _eastLongitude;
    void /* unknown type, empty encoding */ _hikeType;
    void /* unknown type, empty encoding */ _length;
    void /* unknown type, empty encoding */ _northLatitude;
    void /* unknown type, empty encoding */ _originLatitude;
    void /* unknown type, empty encoding */ _originLongitude;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _routeGeometry;
    void /* unknown type, empty encoding */ _southLatitude;
    void /* unknown type, empty encoding */ _totalAscent;
    void /* unknown type, empty encoding */ _totalDescent;
    void /* unknown type, empty encoding */ _tourIdentifier;
    void /* unknown type, empty encoding */ _transportType;
    void /* unknown type, empty encoding */ _westLongitude;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSData *addressObject;
@property (nonatomic, copy) NSString *customName;
@property (nonatomic, copy) NSString *customNote;
@property (nonatomic, retain) NSNumber *eastLongitude;
@property (nonatomic) long long hikeType;
@property (nonatomic, retain) NSNumber *length;
@property (nonatomic, retain) NSNumber *northLatitude;
@property (nonatomic, retain) NSNumber *originLatitude;
@property (nonatomic, retain) NSNumber *originLongitude;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSData *routeGeometry;
@property (nonatomic, retain) NSNumber *southLatitude;
@property (nonatomic, retain) NSNumber *totalAscent;
@property (nonatomic, retain) NSNumber *totalDescent;
@property (nonatomic) long long tourIdentifier;
@property (nonatomic, retain) NSNumber *transportType;
@property (nonatomic, retain) NSNumber *westLongitude;

- (void).cxx_destruct;
- (id)initWithAddressObject:(id)a0 customName:(id)a1 customNote:(id)a2 eastLongitude:(id)a3 hikeType:(long long)a4 length:(id)a5 northLatitude:(id)a6 originLatitude:(id)a7 originLongitude:(id)a8 positionIndex:(long long)a9 routeGeometry:(id)a10 southLatitude:(id)a11 totalAscent:(id)a12 totalDescent:(id)a13 tourIdentifier:(long long)a14 transportType:(id)a15 westLongitude:(id)a16;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 addressObject:(id)a1 customName:(id)a2 customNote:(id)a3 eastLongitude:(id)a4 hikeType:(long long)a5 length:(id)a6 northLatitude:(id)a7 originLatitude:(id)a8 originLongitude:(id)a9 positionIndex:(long long)a10 routeGeometry:(id)a11 southLatitude:(id)a12 totalAscent:(id)a13 totalDescent:(id)a14 tourIdentifier:(long long)a15 transportType:(id)a16 westLongitude:(id)a17;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
