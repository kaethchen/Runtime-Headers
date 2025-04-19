@class NSString, CLLocation;

@interface CLMicroLocationGeofence : NSObject

@property (retain, nonatomic) NSString *regionId;
@property (retain, nonatomic) CLLocation *regionCenterLocation;

- (id)init;
- (void).cxx_destruct;

@end
