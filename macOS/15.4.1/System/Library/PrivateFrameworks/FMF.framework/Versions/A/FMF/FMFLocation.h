@class NSDate, NSString, FMAccuracyOverlay, FMFHandle, NSColor, FMFPlacemark, NSImage, CLLocation;

@interface FMFLocation : NSObject <NSCopying, NSSecureCoding, FMAnnotation>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) FMFHandle *handle;
@property (retain) FMFPlacemark *placemark;
@property long long locationType;
@property (retain) CLLocation *location;
@property long long activityState;
@property (retain) NSString *label;
@property (getter=isLocatingInProgress) BOOL locatingInProgress;
@property (copy) NSString *shortAddressString;
@property (copy) NSString *longAddress;
@property (copy) NSDate *timestamp;
@property double maxLocatingInterval;
@property double TTL;
@property double distance;
@property (retain) NSString *distanceDescription;
@property (retain) NSString *age;
@property (readonly, copy) NSString *shortAddress;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (retain, nonatomic) FMAccuracyOverlay *overlay;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double distanceFromUser;
@property (nonatomic) BOOL isBorderEnabled;
@property (retain, nonatomic) NSColor *tintColor;
@property (retain, nonatomic) NSImage *largeAnnotationIcon;
@property (retain, nonatomic) NSImage *smallAnnotationIcon;
@property (retain, nonatomic) NSImage *largeOverlayIcon;
@property (retain, nonatomic) NSImage *smallOverlayIcon;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (BOOL)isThisDevice;
- (BOOL)hasKnownLocation;
- (void)updateLocation:(id)a0;
- (void)_updateLocation:(id)a0;
- (id)agingItemTimestamp;
- (long long)distanceThenNameCompare:(id)a0;
- (id)initWithDictionary:(id)a0 forHandle:(id)a1 maxLocatingInterval:(double)a2 TTL:(double)a3;
- (id)initWithHandle:(id)a0 locationType:(long long)a1 location:(id)a2 activityState:(long long)a3 label:(id)a4 locatingInProgress:(BOOL)a5 shortAddress:(id)a6 longAddress:(id)a7 placemark:(id)a8;
- (BOOL)isMoreRecentThan:(id)a0;
- (id)locationAge;
- (id)locationShortAddressWithAge;
- (id)locationShortAddressWithAgeIncludeLocating;
- (void)resetLocateInProgress:(id)a0;
- (void)resetLocateInProgressTimer;
- (void)updateHandle:(id)a0;
- (void)updateLocationForCache:(id)a0;

@end
