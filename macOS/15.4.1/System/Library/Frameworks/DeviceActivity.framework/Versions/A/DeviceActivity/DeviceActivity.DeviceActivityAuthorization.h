@class NSArray;

@interface DeviceActivity.DeviceActivityAuthorization : NSObject <DeviceActivity.DeviceActivityAuthorizing>

@property (class, nonatomic, readonly) BOOL isAuthorized;
@property (class, nonatomic, readonly) NSArray *authorizedClientIdentifiers;
@property (class, nonatomic, readonly) BOOL sharingEnabled;
@property (class, nonatomic) BOOL isOverridden;

+ (BOOL)isAuthorized:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
