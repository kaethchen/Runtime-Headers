@class NSString;

@interface CoreTelephonyMockObject : NSObject

@property (copy, nonatomic) NSString *cellularEid;
@property (copy, nonatomic) NSString *cellularImei;

- (void).cxx_destruct;
- (id)initWithCellularEid:(id)a0 cellularImei:(id)a1;
- (id)retrieveDeviceIdentifier:(long long)a0;

@end
