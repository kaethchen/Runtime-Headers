@class NSString, CLPlacemark, NSNumber;

@interface KHPhotoLocationMetadata : NSObject <MapPointOfInterestProtocol>

@property (readonly, nonatomic) CLPlacemark *placemark;
@property (readonly) struct CGPoint { double x0; double x1; } location;
@property (readonly) NSString *name;
@property (readonly) NSString *locationDisplayString;
@property (readonly) NSNumber *radius;
@property (readonly) NSString *neighborhoodName;
@property (readonly) NSString *cityName;
@property (readonly) NSString *countyName;
@property (readonly) NSString *provinceName;
@property (readonly) NSString *countryName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPlacemark:(id)a0;

@end
