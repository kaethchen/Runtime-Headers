@class NSDictionary;

@interface CRKWiProxDeviceRegistration : NSObject

@property (copy, nonatomic) NSDictionary *devices;
@property (copy, nonatomic) NSDictionary *options;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
