@class NSString;

@interface FedStatsCohortQueryUserSetDeviceRegion : NSObject <FedStatsCohortQueryProtocol>

@property (readonly, nonatomic) NSString *userSetDeviceRegion;

+ (id)cohortInstance;

- (id)init;
- (void).cxx_destruct;
- (id)cohortKeyForParameters:(id)a0 possibleError:(id *)a1;

@end
